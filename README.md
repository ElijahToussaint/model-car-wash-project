# Car Wash Project

## About

A car wash project with the primary objective of efficiently and efficiently controlling six DC motors simultaneously.

## Software

- [DipTrace 5.2](https://diptrace.com/download/download-diptrace/)
- [Arduino IDE 2.3.7](https://www.arduino.cc/en/software/)
- [Teensyduino 1.59](https://www.pjrc.com/teensy/td_download.html)

## Hardware

### Components List

<table style="width: auto;">
  <tr>
    <th>Quantity</th>
    <th>Component</th>
    <th>Name</th>
  </tr>
  <tr>
    <td style="text-align: center;">10</td>
    <td><img src="files/images/screw_terminal_kf301_2p.jpg" alt="Italian Trulli" width="100"></td>
    <td>2 Hole Screw Terminals</td>
  </tr>
  <tr>
    <td style="text-align: center;">1</td>
    <td style="width: auto"><img src="files/images/led_th.jpg" alt="Italian Trulli" width="100"></td>
    <td>LED</td>
  </tr>
  <tr>
    <td style="text-align: center;">1</td>
    <td><img src="files/images/330_ohm_resistor.jpg" alt="Italian Trulli" width="100"></td>
    <td>330 Ohm Resistor</td>
</tr>
  <tr>
    <td style="text-align: center;">3</td>
    <td><img src="files/images/tb6612fng_motor_driver_rob_14450.jpg" alt="Italian Trulli" width="100"></td>
    <td>TB6612FNG Motor Driver</td>
</tr>
  <tr>
    <td style="text-align: center;">6</td>
    <td><img src="files/images/rf300_dc_motor.jpg" alt="Italian Trulli" width="100"></td>
    <td>DC Motor</td>
</tr>
  <tr>
    <td style="text-align: center;">1</td>
    <td><img src="files/images/teensy_4_1_dev_16771.jpg" alt="Italian Trulli" width="100"></td>
    <td>Teensy 4.1</td>
</tr>
  <tr>
    <td style="text-align: center;">1</td>
    <td><img src="files/images/4_aa_battery_latch.jpg" alt="Italian Trulli" width="100"></td>
    <td>4 AA Battery Latch</td>
</tr>
  <tr>
    <td style="text-align: center;">1</td>
    <td><img src="files/images/rocker_switch.jpg" alt="Italian Trulli" width="100"></td>
    <td>2 Pin Rocker Switch</td>
</tr>
  <tr>
    <td style="text-align: center;">1</td>
    <td><img src="files/images/5v_buck_converter_mp1584en.jpg" alt="Italian Trulli" width="100"></td>
    <td>5V Buck Converter</td>
</tr>
  <tr>
    <td style="text-align: center;">4</td>
    <td><img src="files/images/aa_battery.jpg" alt="Italian Trulli" width="100"></td>
    <td>1.5V Battery</td>
  </tr>
</table>

#### Optional

<table style="width: auto; text-align: left;">
  <tr>
    <th>Quantity</th>
    <th>Component</th>
    <th>Name</th>
  </tr>
  <tr>
    <td style="text-align: center;">6</td>
    <td><img src="files/images/6_female_pin_header.jpg" alt="Italian Trulli" width="100"></td>
    <td>Female 6 Pin Header</td>
  </tr>
  <tr>
    <td style="text-align: center;">2</td>
    <td style="width: auto"><img src="files/images/24_female_pin_header.jpg" alt="Italian Trulli" width="100"></td>
    <td>Female 24 Pin Header</td>
  </tr>
</table>

### 3D Rendered PCB

<table style="width: auto;">
  <tr>
    <th style="text-align: center;">Without Components</th>
    <th style="text-align: center;">With Components</th>
  </tr>
  <tr>
    <td><img src="files/images/car_wash_3d_preview.jpg" alt="Italian Trulli" width="100%"></td>
    <td><img src="files/images/car_wash_3d_preview_2.jpg" alt="Italian Trulli" width="100%"></td>
  </tr>
</table>

### Video Demonstration

https://github.com/user-attachments/assets/6ffc5e24-8c43-4aa4-a156-bba197fbcea6

## Warning

DO NOT connect to power or power on the Teensy and connect to the USB port concurrently. Doing so can damage the microcontroller.

Follow this [guide](https://www.pjrc.com/teensy/external_power.html) if you want to use power and the USB port concurrently.
