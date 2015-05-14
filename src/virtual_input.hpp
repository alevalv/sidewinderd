/*
 * Copyright (c) 2014 - 2015 Tolga Cakir <tolga@cevel.net>
 *
 * This source file is part of Sidewinder daemon and is distributed under the
 * MIT License. For more information, see LICENSE file.
 */

#ifndef VIRTUALINPUT_CLASS_H
#define VIRTUALINPUT_CLASS_H

#include <pwd.h>

#include "device_data.hpp"

class VirtualInput {
	public:
		void sendEvent(short type, short code, int value);
		VirtualInput(sidewinderd::DeviceData *data, struct passwd *pw);
		~VirtualInput();

	private:
		int uifd_;
		struct passwd *pw_;
		sidewinderd::DeviceData *deviceData_;
		void createUidev();
};

#endif
