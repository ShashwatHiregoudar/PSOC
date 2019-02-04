# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\srhi\Desktop\PSOC\L3_Blink_With_Clock.cydsn\L3_Blink_With_Clock.cyprj
# Date: Tue, 29 Jan 2019 11:13:32 GMT
#set_units -time ns
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFClk} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySysClk} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_1} -source [get_pins {ClockBlock/hfclk}] -edges {1 24000001 48000001} [list [get_pins {ClockBlock/udb_div_1}]]
create_generated_clock -name {Clock_3} -source [get_pins {ClockBlock/hfclk}] -edges {1 24000001 48000001} [list [get_pins {ClockBlock/udb_div_2}]]
create_generated_clock -name {Clock_2} -source [get_pins {ClockBlock/hfclk}] -edges {1 24000001 48000001} [list [get_pins {ClockBlock/udb_div_3}]]


# Component constraints for C:\Users\srhi\Desktop\PSOC\L3_Blink_With_Clock.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\srhi\Desktop\PSOC\L3_Blink_With_Clock.cydsn\L3_Blink_With_Clock.cyprj
# Date: Tue, 29 Jan 2019 11:13:28 GMT
