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

#pragma once

#include "sg/common/Node.h"
#include "sg/camera/PerspectiveCamera.h"

namespace ospray {
  namespace sg {

    /*! a camera node - the generic camera node */
    struct OSPSG_INTERFACE VRPerspectiveCamera : public sg::PerspectiveCamera 
    {
      VRPerspectiveCamera();
      virtual void init() override;

      // virtual void commit();
      // virtual void postCommit(RenderContext &ctx);
    };

  } // ::ospray::sg
} // ::ospray