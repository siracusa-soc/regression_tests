// #define STIM_Y_SIZE 2048
// // outfeat [8 x 8 x 32]
// L2_DATA uint8_t ne16_outfeat_stride2[] = {
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x7f,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x7f,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x80,
//   0x7f,
//   0x80,
//   0x80
// };

