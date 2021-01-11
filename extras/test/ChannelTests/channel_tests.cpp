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

#include <gtest/gtest.h>

#include <supla/channel.h>

TEST(ChannelTests, ChannelMethods) {
  Supla::Channel first;
  Supla::Channel second;

  EXPECT_EQ(first.getChannelNumber(), 0);
  EXPECT_EQ(second.getChannelNumber(), 1);

  EXPECT_EQ(first.isExtended(), false);
  EXPECT_EQ(first.isUpdateReady(), false);
  EXPECT_EQ(first.getChannelType(), 0);
  EXPECT_EQ(first.getExtValue(), nullptr);

  int number = first.getChannelNumber();
  char emptyArray[SUPLA_CHANNELVALUE_SIZE] = {};
  EXPECT_EQ(number, Supla::Channel::reg_dev.channels[number].Number);
  EXPECT_EQ(Supla::Channel::reg_dev.channels[number].Type, 0);
  EXPECT_EQ(Supla::Channel::reg_dev.channels[number].FuncList, 0);
  EXPECT_EQ(Supla::Channel::reg_dev.channels[number].Default, 0);
  EXPECT_EQ(Supla::Channel::reg_dev.channels[number].Flags, SUPLA_CHANNEL_FLAG_CHANNELSTATE);
  EXPECT_TRUE(0 == memcmp(Supla::Channel::reg_dev.channels[number].value, emptyArray, SUPLA_CHANNELVALUE_SIZE));
}