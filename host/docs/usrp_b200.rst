========================================================================
UHD - USRP-B2x0 Series Device Manual
========================================================================

.. contents:: Table of Contents

------------------------------------------------------------------------
Comparative features list - B200
------------------------------------------------------------------------

**Hardware Capabilities:**
 * Integrated RF frontend (70 MHz - 6 GHz)
 * External PPS reference input
 * External 10 MHz reference input
 * Configurable clock rate
 * Internal GPSDO option
 * B210 Only:

   * MICTOR Debug Connector
   * JTAG Connector

**FPGA Capabilities:**
 * Timed commands in FPGA
 * Timed sampling in FPGA

------------------------------------------------------------------------
Specify a Non-standard Image
------------------------------------------------------------------------
UHD software will automatically select the USRP B2X0 images from the installed images package.
The image selection can be overridden with the **fpga** and **fw** device address parameters.

Example device address string representations to specify non-standard images:

::

    fpga=usrp_b200_fpga.bin

    -- OR --

    fw=usrp_b200_fw.hex

------------------------------------------------------------------------
Changing the Master Clock Rate
------------------------------------------------------------------------
The master clock rate feeds the RF frontends and the DSP chains.
Users may select non-default clock rates to acheive integer decimations or interpolations in the DSP chains.
The default master clock rate defaults to 32 MHz, but can be set to any rate between 5 MHz and 61.44 MHz.

The user can set the master clock rate through the usrp API call set_master_clock_rate(),
or the clock rate can be set through the device arguments, which many applications take:
::

    uhd_usrp_probe --args="master_clock_rate=52e6"

------------------------------------------------------------------------
RF Frontend Notes
------------------------------------------------------------------------
The B200 features and integrated RF frontend.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Frontend tuning
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
The RF frontend has individually tunable receive and transmit chains.
On the B200, there is one transmit and one receive RF frontend.
On the B210, both transmit and receive can be used in a MIMO configuration.
For the MIMO case, both receive frontends share the RX LO,
and both transmit frontends share the TX LO.
Each LO is tunable between 50 MHz and 6 GHz.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Frontend gain
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
All frontends have individual analog gain controls.
The receive frontends have 73 dB of available gain;
and the transmit frontends have 89.5 dB of available gain.
Gain settings are application specific,
but it is recommended that users consider using at least
half of the available gain to get reasonable dynamic range.
