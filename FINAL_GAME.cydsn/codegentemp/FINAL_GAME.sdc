# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\srhi\Desktop\PSOC\FINAL_GAME.cydsn\FINAL_GAME.cyprj
# Date: Fri, 15 Feb 2019 13:10:20 GMT
#set_units -time ns
create_clock -name {ADC_intClock(FFB)} -period 875 -waveform {0 437.5} [list [get_pins {ClockBlock/ff_div_7}]]
create_clock -name {EZI2C_SCBCLK(FFB)} -period 625 -waveform {0 312.5} [list [get_pins {ClockBlock/ff_div_3}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {ADC_intClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 21 43} [list]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 4801 9601} [list [get_pins {ClockBlock/udb_div_0}]]
create_generated_clock -name {EZI2C_SCBCLK} -source [get_pins {ClockBlock/hfclk}] -edges {1 15 31} [list]


# Component constraints for C:\Users\srhi\Desktop\PSOC\FINAL_GAME.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\srhi\Desktop\PSOC\FINAL_GAME.cydsn\FINAL_GAME.cyprj
# Date: Fri, 15 Feb 2019 13:10:17 GMT
