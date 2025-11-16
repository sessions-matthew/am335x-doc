<!-- image -->

www.ti.com

## 6.4 Crypto DMA Events

Table 6-2. Crypto DMA Events

|   Event# | Event Name                 | Source Module                                                                              |
|----------|----------------------------|--------------------------------------------------------------------------------------------|
|        1 | AES0_s_dma_ctx_in_req      | AES Module 0: Request a new context on the Secure HIB                                      |
|        2 | AES0_s_dma_data_in_req     | AES Module 0: Request input data on the Secured HIB                                        |
|        3 | AES0_s_dma_data_out_req    | AES Module 0: Request output data read on the Secured HIB                                  |
|        4 | AES0_p_dma_ctx_in_req      | AES Module 0: Request a new context on the Public HIB                                      |
|        5 | AES0_p_dma_data_in_req     | AES Module 0: Request input data on the Public HIB                                         |
|        6 | AES0_p_dma_data_out_req    | AES Module 0: Request output data read on the Public HIB                                   |
|        7 | AES1_s_dma_ctx_in_req      | AES Module 1: Request a new context on the Secured HIB                                     |
|        8 | AES1_s_dma_data_in_req     | AES Module 1: Request input data on the Secured HIB                                        |
|        9 | AES1_s_dma_data_out_req    | AES Module 1: Request output data read on the Secured HIB                                  |
|       10 | AES1_p_dma_ctx_in_req      | AES Module 1: Request a new context on the Public HIB                                      |
|       11 | AES1_p_dma_data_in_req     | AES Module 1: Request input data on the Public HIB                                         |
|       12 | AES1_p_dma_data_out_req    | AES Module 1: Request output data read on the Public HIB                                   |
|       13 | Reserved                   |                                                                                            |
|       14 | Reserved                   |                                                                                            |
|       15 | DES_s_dma_ctx_in_req       | DES Module: Request a new context on the secure HIB                                        |
|       16 | DES_s_dma_data_in_req      | DES Module: Request input data on the secure HIB                                           |
|       17 | DES_s_dma_data_out_req     | DES Module: Request output data read on the secure HIB                                     |
|       18 | DES_p_dma_ctx_in_req       | DES Module: Request a new context on the public HIB                                        |
|       19 | DES_p_dma_data_in_req      | DES Module: Request input data on the public HIB                                           |
|       20 | DES_p_dma_data_out_req     | DES Module: Request output data read on the public HIB                                     |
|       21 | SHA2_dma_ctxin_s           | SHA2MD5 Module 1: Request a context on secure HIB                                          |
|       22 | SHA2_dma_din_s             | SHA2MD5 Module 1: Request input data on secure HIB                                         |
|       23 | SHA2_dma_ctxout_s          | SHA2MD5 Module 1: Request output data/context on secure HIB                                |
|       24 | SHA2_dma_ctxin_p           | SHA2MD5 Module 1: Request a context on public HIB                                          |
|       25 | SHA2_dma_din_p             | SHA2MD5 Module 1: Request input data on public HIB                                         |
|       26 | SHA2_dma_ctxout_p          | SHA2MD5 Module 1: Request output data/context on public HIB                                |
|       27 | AES0_s_dma_context_out_req | AES Module 0: Request the authentication result (TAG) or result IV read on the Secured HIB |

Table 6-2. Crypto DMA Events (continued)

|   Event# | Event Name                 | Source Module                                                                              |
|----------|----------------------------|--------------------------------------------------------------------------------------------|
|       28 | AES0_p_dma_context_out_req | AES Module 0: Request the authentication result (TAG) or result IV read on the Public HIB  |
|       29 | AES1_s_dma_context_out_req | AES Module 1: Request the authentication result (TAG) or result IV read on the Secured HIB |
|       30 | AES1_p_dma_context_out_req | AES Module 1: Request the authentication result (TAG) or result IV read on the Public HIB  |
|       31 | Reserved                   |                                                                                            |
|       32 | Reserved                   |                                                                                            |

<!-- image -->