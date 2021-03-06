// Copyright 2020 The MACE Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MICRO_OPS_NHWC_DEPTHWISE_CONV_2D_KB4_S4_H_
#define MICRO_OPS_NHWC_DEPTHWISE_CONV_2D_KB4_S4_H_

#include "micro/ops/nhwc/base/depthwise_conv_2d_base.h"

namespace micro {
namespace ops {

class DepthwiseConv2dKB4S4Op : public DepthwiseConv2dBase {
 private:
  MaceStatus Compute(int32_t (&output_dims)[4]);
};
}  // namespace ops
}  // namespace micro


#endif  // MICRO_OPS_NHWC_DEPTHWISE_CONV_2D_KB4_S4_H_
