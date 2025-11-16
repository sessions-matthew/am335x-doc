## 5.0.11 SGX 3D Features

- Deferred pixel shading
- On-chip tile floating point depth buffer
- 8-bit stencil with on-chip tile stencil buffer
- 8 parallel depth/stencil tests per clock
- Scissor test
- Texture support:
- -Cube map
- -Projected textures
- -2D textures
- -Nonsquare textures
- Texture formats:
- -RGBA 8888, 565, 1555
- -Monochromatic 8, 16, 16f, 32f, 32int
- -Dual channel, 8:8, 16:16, 16f:16f
- -Compressed textures PVR-TC1, PVR-TC2, ETC1
- -Programmable support for YUV 420 and 422 formats for YUV/RGB color conversion
- Resolution support:
- -Frame buffer maximum size = 2048 x 2048
- -Texture maximum size = 2048 x 2048
- Texture filtering:
- -Bilinear, trilinear, anisotropic
- -Independent minimum and maximum control
- Antialiasing:
- -4x multisampling
- -Up to 16x full scene anti-aliasing
- -Programmable sample positions
- Indexed primitive list support
- -Bus mastered
- Programmable vertex DMA
- Render to texture:
- -Including twiddled formats
- -Auto MipMap generation
- Multiple on-chip render targets (MRT).

Note : Performance is limited when the on-chip memory is not available.

- •

<!-- image -->