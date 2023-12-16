# Routing table of microprocessor, ram and codec
[Return to Hardware Section](2324_Projet2A_PedaleGuitare/tree/Hardware-Section)

| Label           | Microprocesseur (STM32F446ZC) | RAM (42-45S16400J )  | Codec (SGTL5000) | Description                                |
|--------------|------|-------|------------|-------------------------------------------|
| BOOT0        | BOOT0|       |            | Boot Mode Selection (Microprocessor)      |
| NRST         | NRST |       |            | Reset (Microprocessor)                     |
| P0           | PA0  |       |            | General Purpose I/O (Microprocessor)      |
| P1           | PA1  |       |            | General Purpose I/O (Microprocessor)      |
| SYS_MLK      | PA1  |       | SYS_MLK    | System Master Clock (Microprocessor)      |
| SWDIO        | PA13 |       |            | SWD Debug I/O (Microprocessor)            |
| SWCLK        | PA14 |       |            | SWD Debug Clock (Microprocessor)          |
| P2           | PA2  |       |            | General Purpose I/O (Microprocessor)      |
| P3           | PA3  |       |            | General Purpose I/O (Microprocessor)      |
| P4           | PA4  |       |            | General Purpose I/O (Microprocessor)      |
| P5           | PA5  |       |            | General Purpose I/O (Microprocessor)      |
| P6           | PA6  |       |            | General Purpose I/O (Microprocessor)      |
| P7           | PA7  |       |            | General Purpose I/O (Microprocessor)      |
| P8           | PA8  |       |            | General Purpose I/O (Microprocessor)      |
| P8           | PB0  |       |            | General Purpose I/O (Microprocessor)      |
| P9           | PB1  |       |            | General Purpose I/O (Microprocessor)      |
| SCL_I2C      | PB10 |       | CTRL_CLK   | I2C Clock (Microprocessor)                |
| SDA_I2C      | PB11 |       | CTRL_DATA  | I2C Data (Microprocessor)                 |
| WS_I2S       | PB12 |       | I2S_LRCLK  | I2S Word Select (Microprocessor)          |
| CK_I2S       | PB13 |       | I2S_SCLK   | I2S Clock (Microprocessor)                |
| SD_I2S       | PB15 |       | I2S_DIN    | I2S Data (Microprocessor)                 |
| BOOT1        | PB2  |       |            | Boot Mode Selection (Microprocessor)      |
| SWO          | PB3  |       |            | Serial Wire Output (Microprocessor)       |
| SDCKE1       | PB5  | CKE   |            | Clock Enable for SDRAM (Microprocessor)   |
| SDNE1        | PB6  | CS    |            | Chip Select for SDRAM (Microprocessor)    |
| DOUT_I2C     | PB9  |       | I2S_DOUT   | I2C Data Output (Microprocessor)          |
| SDNWE        | PC0  | WE    |            | Write Enable for SDRAM (Microprocessor)   |
| OSC32_IN     | PC14 |       |            | External 32 kHz Oscillator Input (Microprocessor) |
| OSC32_OUT    | PC15 |       |            | External 32 kHz Oscillator Output (Microprocessor) |
| D2           | PD0  | DQ2   |            | Data Bit 2 (RAM)                         |
| D3           | PD1  | DQ3   |            | Data Bit 3 (RAM)                         |
| D15          | PD10 | DQ15  |            | Data Bit 15 (RAM)                        |
| D0           | PD14 | DQ0   |            | Data Bit 0 (RAM)                         |
| D1           | PD15 | DQ1   |            | Data Bit 1 (RAM)                         |
| PD2          |      |       |            | (Unused)                                |
| D13          | PD8  | DQ13  |            | Data Bit 13 (RAM)                        |
| D14          | PD9  | DQ14  |            | Data Bit 14 (RAM)                        |
| NBL0         | PE0  | LDQM  |            | Latch Enable Data Input/Output (RAM)    |
| NBL1         | PE1  | UDQM  |            | Output Enable for Data Output (RAM)     |
| D7           | PE10 | DQ7   |            | Data Bit 7 (RAM)                         |
| D8           | PE11 | DQ8   |            | Data Bit 8 (RAM)                         |
| D9           | PE12 | DQ9   |            | Data Bit 9 (RAM)                         |
| D10          | PE13 | DQ10  |            | Data Bit 10 (RAM)                        |
| D11          | PE14 | DQ11  |            | Data Bit 11 (RAM)                        |
| D12          | PE15 | DQ12  |            | Data Bit 12 (RAM)                        |
| D4           | PE7  | DQ4   |            | Data Bit 4 (RAM)                         |
| D5           | PE8  | DQ5   |            | Data Bit 5 (RAM)                         |
| D6           | PE9  | DQ6   |            | Data Bit 6 (RAM)                         |
| A0           | PF0  | A0    |            | Address Bit 0 (RAM)                      |
| A1           | PF1  | A1    |            | Address Bit 1 (RAM)                      |
| SDNRAS       | PF11 | RAS   |            | Row Address Strobe (RAM)                |
| A6           | PF12 | A6    |            | Address Bit 6 (RAM)                      |
| A7           | PF13 | A7    |            | Address Bit 7 (RAM)                      |
| A8           | PF14 | A8    |            | Address Bit 8 (RAM)                      |
| A9           | PF15 | A9    |            | Address Bit 9 (RAM)                      |
| A2           | PF2  | A2    |            | Address Bit 2 (RAM)                      |
| A3           | PF3  | A3    |            | Address Bit 3 (RAM)                      |
| A4           | PF4  | A4    |            | Address Bit 4 (RAM)                      |
| A5           | PF5  | A5    |            | Address Bit 5 (RAM)                      |
| A10          | PG0  | A10   |            | Address Bit 10 (RAM)                     |
| A11          | PG1  | A11   |            | Address Bit 11 (RAM)                     |
| SDNCAS       | PG15 | CAS   |            | Column Address Strobe (RAM)             |
| BA0          | PG4  | BA0   |            | Bank Address Bit 0 (RAM)                |
| BA1          | PG5  | BA1   |            | Bank Address Bit 1 (RAM)                |
| SDCLK        | PG8  | CLK   |            | Clock Signal for SDRAM (Microprocessor) |
| OSC_IN       | PH1  |       |            | Oscillator Input (Microprocessor)       |
| OSC_OUT      | PH2  |       |            | Oscillator Output (Microprocessor)      |
| Ve_guitare_L |      |       | LINEIN_L    | Left Channel Input for Guitar Voltage   |
| Ve_guitare_R |      |       | LINEIN_R    | Right Channel Input for Guitar Voltage  |
| Vs_guitare_L |      |       | LINEOUT_L   | Left Channel Output for Guitar Voltage  |
| Vs_guitare_R |      |       | LINEOUT_R   | Right Channel Output for Guitar Voltage |

