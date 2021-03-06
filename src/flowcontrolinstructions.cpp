// Copyright Hugh Perkins 2016

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cocl/flowcontrolinstructions.h"
#include "cocl/ir-to-opencl.h"
#include "cocl/util.h"

#include <iostream>
#include <sstream>

namespace cocl {
namespace flowcontrol {

static int nextId = 0;

using namespace std;
using namespace cocl;
using namespace cocl::flowcontrol;
using namespace llvm;

void resetNextId() {
    nextId = 0;
}

int getNextId() {
    return nextId;
}

void incNextId() {
    nextId++;
}

} // flowcontrol
} // cocl
