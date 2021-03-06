/* CMSIS-DAP-STM32 libre using libopencm3 library 
 * 
 * 
 * Copyright (C) 2009 Uwe Hermann <uwe@hermann-uwe.de>,
 * Copyright (C) 2011 Piotr Esden-Tempski <piotr@esden.net>
 * Copyright (C) 2015 Zhiyuan Wan <rgwan@rocaloid.org>
 * 
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef USB_H
#define USB_H
void set_config(usbd_device *usbd_dev, uint16_t wValue);
extern uint8_t usbd_control_buffer[256];
extern const struct usb_device_descriptor dev;
extern const struct usb_config_descriptor config;
extern const char *usb_strings[];

#define USB_ACM_BULK_OUT_EP		0x02
#define USB_ACM_BULK_IN_EP		0x82
#define USB_ACM_CONTROL_EP		0x83
#define USB_ACM_ENABLE

#define HID_EP_IN				0x81
#define HID_EP_OUT				0x01

#define USB_MSC_BULK_OUT_EP		0x04
#define USB_MSC_BULK_IN_EP		0x84
//#define USB_MSC_ENABLE

#endif
