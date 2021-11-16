# Ultrasonic_Telemeter
The ultrasonic telemeter allows to measure distances thanks to a transmitter/receiver system.
In Arduino, it is connected to 4 pins: GND (ground), VCC (power), echo and trigg. 
To obtain the distance, we program a sound sending in the arduino from trig, passing by the microcontroller and then a power amplifier. 
Once the sound has reached the target, the receiver receives the "bounce" of the amplified signal, 
which will be interpreted by the micro-controller before being sent to the Arduino board via the echo output. 
The ST232 circuit is a device with 2 drivers and 2 receivers. It is particularly suitable for applications where 12V is not available.
The ST232 uses a single 5 V supply and only four external capacitors (0.1 mF). It is placed between the amplifier and the transmitter.
A timer is placed at the beginning of the sound emission, 
and then calculates the time difference between the first the first ultrasound received and the activation of the transmitter. 
A signal is then sent to the the arduino corresponding to the calculated time.
