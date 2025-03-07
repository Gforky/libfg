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

#ifndef CORE_OPERANDS_OPERAND_H_
#define CORE_OPERANDS_OPERAND_H_
#include <string>

#include "core/common/operation_node.h"
namespace clink {
class Operand : public OperationNode {
 public:
  Operand() = default;
  
  virtual ~Operand() = default;
  
  const std::string* GetOperationName() override { return nullptr; }

 protected:
  Operand(const Operand&) {}
};
}  // namespace clink

#endif  // CORE_OPERANDS_OPERAND_H_
