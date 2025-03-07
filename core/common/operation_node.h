/* Copyright (c) 2021, Qihoo, Inc.  All rights reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 ==============================================================================*/

#ifndef CORE_COMMON_OPERATION_NODE_H_
#define CORE_COMMON_OPERATION_NODE_H_
#include <google/protobuf/arena.h>

#include <memory>
#include <stdexcept>
#include <string>

#include "core/common/common.h"
#include "core/common/context.h"

namespace clink {

typedef enum { OP_OPERAND, OP_OPERATOR } OperationType;

class OperationNode {
 public:
  OperationNode() = default;

  virtual ~OperationNode() = default;

  virtual const Feature* Evaluate(Context*) = 0;

  virtual const std::string* GetOperationName() = 0;

  const OperationType& GetOperationType() { return operation_type_; }

  void SetOperationType(const OperationType& operation_type) {
    operation_type_ = operation_type;
  }

 protected:
  explicit OperationNode(const OperationNode&) = default;

 private:
  OperationNode& operator=(const OperationNode&);
  OperationType operation_type_;
};

}  // namespace clink

#endif  // CORE_COMMON_OPERATION_NODE_H_
