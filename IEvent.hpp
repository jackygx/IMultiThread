/*
 * Copyright (c) 2018 Guo Xiang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __IEVENT_HPP__
#define __IEVENT_HPP__

#include <EasyCpp.hpp>

DEFINE_INTERFACE(Event);

class IEvent
{
public:
	IEvent(void) {}
	virtual ~IEvent(void) {}

	virtual void Wait(void) = 0;
	virtual bool WaitTimeout(int msec) = 0;
	virtual void Wakeup(void) = 0;
};

#endif /* __EVENT_HPP__ */

