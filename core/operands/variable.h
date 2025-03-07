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

#ifndef CORE_OPERANDS_VARIABLE_H_
#define CORE_OPERANDS_VARIABLE_H_
#include <memory>
#include <string>

#include "core/common/common.h"
#include "core/operands/operand.h"
namespace clink {
class Variable : public Operand {
 public:
  explicit Variable(std::string);

  const std::string& GetKey();

  const Feature* Evaluate(Context*) override;

  const std::string* GetOperationName() override;

 protected:
  Variable();

 private:
  std::string token_;
  int64_t hash_token_;
};
}  // namespace clink
#endif  // CORE_OPERANDS_VARIABLE_H_
