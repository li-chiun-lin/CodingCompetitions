# Problem

Typical computer images are matrices of pixels, with each pixel being a small square of a specific color. Drawing lines that are not perfectly parallel to the axes of the pixel matrix results in imperfections. Drawing circles is an extreme example where those imperfections arise.

Suppose we have a picture consisting of 2R+1
by 2R+1 pixels, and we number the rows and columns of pixels between −R and R, such that the center pixel is at row 0 and column 0. Initially, all pixels are white. Then, a circle of radius R and centered in the picture can be drawn in black by the following pseudocode, where set_pixel_to_black(x, y) makes the pixel at row x and column y be colored black.

```txt
draw_circle_perimeter(R):
  for x between -R and R, inclusive {
    y = round(sqrt(R * R - x * x))   # round to nearest integer, breaking ties towards zero
    set_pixel_to_black(x, y)
    set_pixel_to_black(x, -y)
    set_pixel_to_black(y, x)
    set_pixel_to_black(-y, x)
  }
```

Notice that some pixels may be set to black more than once by the code, but the operation is idempotent (that is, calling set_pixel_to_black on a pixel that is already black changes nothing).

The following is pseudocode for a function to draw a filled circle (starting from an all-white picture).

```txt
draw_circle_filled(R):
  for x between -R and R, inclusive {
    for y between -R and R, inclusive {
      if round(sqrt(x * x + y * y)) <= R:
        set_pixel_to_black(x, y)
    }
  }
```

And finally, the following is pseudocode to incorrectly draw a filled circle:

```txt
draw_circle_filled_wrong(R):
  for r between 0 and R, inclusive {
    draw_circle_perimeter(r)
  }
```

Given R, calculate the number of pixels that would have different colors between a picture in which draw_circle_filled(R) is called and another one in which draw_circle_filled_wrong(R) is called.
