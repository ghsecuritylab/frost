/*
 * This file is part of the DAC distribution (https://github.com/xainag/frost)
 * Copyright (c) 2019 XAIN AG.
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

/****************************************************************************
 * \project Decentralized Access Control
 * \file gps_receiver.h
 * \brief
 * Implementation of interface for GPS module
 *
 * @Author Djordje Golubovic
 *
 * \notes
 *
 * \history
 * 04.15.2019. Initial version.
 ****************************************************************************/

#ifndef _GPS_RECEIVER_H_
#define _GPS_RECEIVER_H_

#include <pthread.h>

int GpsReceiver_init(const char* portname, pthread_mutex_t* json_mutex);
int GpsReceiver_start();
int GpsReceiver_end();

#endif