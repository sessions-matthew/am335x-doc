## 13.4.7 Precedence Order for Determining Frame Buffer Type

The precedence order for determining frame buffer type is specified as follows:

```
If (cfg_lcdtft == 1) // active matrix If (cfg_tft24 == 1) // 24 bpp If (cfg_tft24_unpacked == 1) 4 pixels in 4 words else 4 pixels in 3 words else // 1/2/4/8/12/16 bpp if (bpp[2] == 1) 12/16 bpp data else if (bpp == 0) 1 bpp data else if (bpp == 1) 2 bpp data else if (bpp == 2) 4 bpp data else // if (bpp == 3) 8 bpp data else // passive matrix if (bpp[2] == 1) 12/16 bpp data else if (bpp == 0) 1 bpp data else if (bpp == 1) 2 bpp data else if (bpp == 2) 4 bpp data else // if (bpp == 3) 8 bpp data
```

<!-- image -->