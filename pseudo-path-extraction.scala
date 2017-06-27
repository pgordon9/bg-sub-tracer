val mat = ... // Mat from vid/image
val matPath = Array.ofDim[Int](1000,1000)

val i = ... // x location of user selected ball
val j = ... // y location of user selected ball
val szH = 10 // Height of strike zone
val szW = 20 // Width of strike zone

def isFG(p: Pixel) = ... // is foreground pixel
def inValidPath(p: Pixel) = ... // is within valid path location of other fg pixels

for(x <- (i - szW) to 9; y <- (j -szW) to 999) {
  val p = mat(x)(y)
  if (isFG(p)) {
    if(inValidPath(p)) {

    }
  }
}
