// Copyright 2020 Google LLC
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

#ifndef CORTEXM4_GDB_MONITOR_H_
#define CORTEXM4_GDB_MONITOR_H_

#include "corpus_tests/monitor/gdb_monitor.h"

namespace corpus_tests {

// A GdbMonitor specific to the Cortex m4 architecture, capable of 
// a more detailed crash report.
class Cortexm4GdbMonitor : public GdbMonitor {
 public:
  Cortexm4GdbMonitor(fido2_tests::DeviceInterface* device, int port);
  // Prints the general registers and fault status of the 
  // cortex m4 architecture.
  void PrintCrashReport() override;
};

}  // namespace corpus_tests

#endif  // CORTEXM4_GDB_MONITOR_H_
