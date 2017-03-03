// ======================================================================== //
// Copyright 2009-2017 Intel Corporation                                    //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#include "VRPerspectiveCamera.h"

namespace ospray {
  namespace sg {

    VRPerspectiveCamera::VRPerspectiveCamera() 
      : PerspectiveCamera()
    {
      type="vr";
      create(); 
    }
    void VRPerspectiveCamera::init()
    {
      PerspectiveCamera::init();
      add(createNode("lowerLeft", "vec2f", vec2f(0.f)));
      add(createNode("upperRight", "vec2f", vec2f(1.f)));
    }

    // void VRPerspectiveCamera::commit() 
    // {   
    // }

    // void VRPerspectiveCamera::postCommit(RenderContext &ctx)
    // {
    // }

    OSP_REGISTER_SG_NODE(VRPerspectiveCamera);
    
  } // ::ospray::sg
} // ::ospray


