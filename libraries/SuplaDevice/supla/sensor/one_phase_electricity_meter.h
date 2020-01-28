/*
 Copyright (C) AC SOFTWARE SP. Z O.O.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef _one_phase_electricity_meter_h
#define _one_phase_electricity_meter_h

#include "one_phase_electricity_meter.h"

#define MAX_PHASES 3

namespace Supla {
class OnePhaseElectricityMeter : public ElectricityMeter {
 public:
  ElectricityMeter() {
    extChannel.setFlag(SUPLA_CHANNEL_FLAG_PHASE2_UNSUPPORTED);
    extChannel.setFlag(SUPLA_CHANNEL_FLAG_PHASE3_UNSUPPORTED);
  }

  virtual void readValuesFromDevice() {
  }

  void onInit() {
  }

};

};  // namespace Supla

#endif