# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\srhi\Desktop\PSOC\L6_Buzzer.cydsn\L6_Buzzer.cyprj
# Date: Wed, 30 Jan 2019 07:41:00 GMT
#set_units -time ns
create_clock -name {Clock_2(FFB)} -period 83.333333333333329 -waveform {0 41.6666666666667} [list [get_pins {ClockBlock/ff_div_8}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/hfclk}] -edges {1 3 5} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 61381 122763} -nominal_period 2557541.6666666665 [list [get_pins {ClockBlock/udb_div_0}]]


# Component constraints for C:\Users\srhi\Desktop\PSOC\L6_Buzzer.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\srhi\Desktop\PSOC\L6_Buzzer.cydsn\L6_Buzzer.cyprj
# Date: Wed, 30 Jan 2019 07:40:56 GMT