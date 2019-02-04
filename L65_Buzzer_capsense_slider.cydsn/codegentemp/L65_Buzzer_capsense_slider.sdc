# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\srhi\Desktop\PSOC\L65_Buzzer_capsense_slider.cydsn\L65_Buzzer_capsense_slider.cyprj
# Date: Wed, 30 Jan 2019 10:00:21 GMT
#set_units -time ns
create_clock -name {CapSense_SampleClk(FFB)} -period 10625 -waveform {0 5312.5} [list [get_pins {ClockBlock/ff_div_6}]]
create_clock -name {CapSense_SenseClk(FFB)} -period 10625 -waveform {0 5312.5} [list [get_pins {ClockBlock/ff_div_5}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {CapSense_SampleClk} -source [get_pins {ClockBlock/hfclk}] -edges {1 255 511} [list]
create_generated_clock -name {CapSense_SenseClk} -source [get_pins {ClockBlock/hfclk}] -edges {1 255 511} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 61381 122763} -nominal_period 2557541.6666666665 [list [get_pins {ClockBlock/udb_div_0}]]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\srhi\Desktop\PSOC\L65_Buzzer_capsense_slider.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\srhi\Desktop\PSOC\L65_Buzzer_capsense_slider.cydsn\L65_Buzzer_capsense_slider.cyprj
# Date: Wed, 30 Jan 2019 10:00:18 GMT
