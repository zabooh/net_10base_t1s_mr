﻿---
title: Harmony 3 10BASE-T1S Package
nav_order: 1
has_children: true
has_toc: false
---

![Microchip logo](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_logo.png)
![Harmony logo small](https://raw.githubusercontent.com/wiki/Microchip-MPLAB-Harmony/Microchip-MPLAB-Harmony.github.io/images/microchip_mplab_harmony_logo_small.png)

# MPLAB® Harmony 3 10BASE-T1S

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating
embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller
and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB® X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 10BASE-T1S solutions and example
applications. Quickly incorporate connectivity to your designs with 10BASE-T1S
ICs, modules, software and development kits that make connecting effortless
for your customers. Our comprehensive 10BASE-T1S portfolio has the technology
to meet your range, data rate, interoperability, frequency and topology needs.
Refer to the following links for release notes, training materials,
and interface reference information.

- [Release Notes](release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)
- [10BASE-T1S Support](https://www.microchip.com/support)

# Contents Summary

| Folder    | Description                                   |
| ---       | ---                                           |
| apps      | Example applications for 10BASE-T1S devices   |
| config    | 10BASE-T1S module configuration file          |
| docs      | 10BASE-T1S package documentation              |
| drivers   | Driver/Firmware for 10BASE-T1S devices        |

## Code Examples

The following applications are provided to demonstrate the typical or
interesting usage models of one or more peripheral libraries.

| Name                                                                      | Status                                                                                            |
| ---                                                                       | ---                                                                                               |
|[TCP/IP Client using the LAN867x 10BASE-T1S Ethernet PHY](apps/tcpip_iperf_10base_t1s/readme.md)  | ![app-production](https://img.shields.io/badge/application-production-brightgreen?style=plastic)  |

Note: The following link guides through the steps to create a new TCP/IP application
using MPLAB® Harmony 3 modules.

[Create TCP/IP New Application Example](https://github.com/Microchip-MPLAB-Harmony/net/wiki/Create-your-first-tcpip-application)

Note: Please refer to AN4131 provided on the Microchip LAN867x product websites:
- [LAN8670](https://www.microchip.com/en-us/product/lan8670)
- [LAN8671](https://www.microchip.com/en-us/product/lan8671)
- [LAN8672](https://www.microchip.com/en-us/product/lan8672)

____

[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/net_10base_t1s/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/net_10base_t1s.svg)](https://github.com/Microchip-MPLAB-Harmony/net_10base_t1s/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/net_10base_t1s.svg)](https://github.com/Microchip-MPLAB-Harmony/net_10base_t1s/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/net_10base_t1s.svg)](https://github.com/Microchip-MPLAB-Harmony/net_10base_t1s/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/net_10base_t1s.svg)]()
____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/net_10base_t1s.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/net_10base_t1s.svg?style=social)]()


## OLED and iperf Version

To setup the Demo please checkout the branch "server" for one board the the branch "client" for the other board

If you compile please use a XC32 3.01 or 4.00

Choose the FreeRTOS project. 

Here is a short video that shows the usage of the Demo:
https://vimeo.com/740704827

If you want to use the MHC to reconfigure the projects, you have to install the Harmony Framework. 
But the different Harmony Repositories have to be at certain Versions (Tags). 

This is coded in 

net_10base_t1s_mr/apps/tcpip_iperf_10base_t1s/firmware/src/config/FreeRTOS/harmony-manifest-success.yml

modules:

    - {name: "csp", version: "v3.11.0"}    
    - {name: "net_10base_t1s", version: "v1.0.1"}
    - {name: "core", version: "v3.10.0"}    
    - {name: "dev_packs", version: "v3.11.1"}    
    - {name: "wolfssl", version: "v4.7.0"}    
    - {name: "net", version: "v3.7.4"}    
    - {name: "crypto", version: "v3.7.5"}    
    - {name: "CMSIS-FreeRTOS", version: "v10.3.1"}
    

Either you checkout the Versions by hand with git checkout one by one or you can use the Content Manager and utilize the function "Load Manifest". 




