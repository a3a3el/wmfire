/* Green MSB flame effect */

static unsigned char flamegreen_msb[256 * 3] =
	"\x00\x07\x0f\x00\x06\x0b\x00\x07\x0b\x00\x07\x0b\x00\x06\x09\x00\x07\x09\x00\x07\x09\x00\x06\x07"
	"\x00\x06\x07\x00\x07\x07\x00\x07\x07\x00\x07\x07\x00\x05\x05\x00\x05\x05\x00\x05\x05\x00\x05\x05"
	"\x00\x05\x05\x00\x05\x05\x00\x03\x02\x00\x03\x02\x00\x03\x02\x00\x03\x02\x00\x03\x02\x00\x03\x02"
	"\x00\x03\x02\x00\x03\x02\x00\x03\x02\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00"
	"\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x03\x00\x00\x05\x00\x00\x05\x00"
	"\x00\x07\x00\x00\x09\x00\x00\x0b\x01\x00\x0d\x01\x00\x0f\x01\x00\x11\x02\x00\x13\x02\x00\x17\x03"
	"\x01\x18\x03\x01\x1a\x04\x01\x1e\x04\x01\x22\x05\x02\x25\x07\x02\x27\x07\x02\x2b\x08\x02\x2f\x0a"
	"\x03\x32\x0b\x03\x36\x0c\x04\x39\x0c\x04\x3d\x0f\x04\x41\x10\x05\x44\x11\x05\x48\x13\x06\x4b\x14"
	"\x06\x4f\x16\x06\x53\x16\x04\x5b\x18\x03\x60\x19\x01\x66\x19\x00\x6b\x1c\x00\x71\x1d\x00\x75\x21"
	"\x00\x79\x22\x00\x7d\x26\x00\x80\x27\x00\x86\x2c\x00\x8a\x2e\x00\x8e\x32\x00\x92\x34\x00\x96\x39"
	"\x00\x9a\x3a\x00\x9c\x3f\x00\xa0\x40\x00\xa4\x46\x00\xa8\x48\x00\xac\x49\x00\xae\x4e\x00\xb2\x50"
	"\x00\xb4\x55\x00\xb6\x56\x00\xba\x58\x00\xbc\x5d\x00\xbe\x5e\x00\xc0\x5f\x00\xc2\x60\x00\xc4\x66"
	"\x00\xc4\x66\x00\xc6\x67\x00\xc6\x67\x00\xc8\x68\x00\xc8\x68\x00\xc8\x68\x00\xc8\x68\x00\xc8\x68"
	"\x00\xca\x6e\x00\xc8\x6d\x00\xca\x6e\x00\xca\x6e\x00\xca\x6e\x00\xcc\x74\x00\xcc\x74\x00\xcc\x74"
	"\x00\xcc\x74\x00\xcc\x79\x00\xce\x7a\x00\xce\x7a\x00\xce\x7f\x00\xd0\x80\x00\xd0\x80\x00\xd0\x80"
	"\x00\xd2\x85\x00\xd2\x85\x00\xd2\x85\x00\xd4\x8b\x00\xd4\x8b\x00\xd6\x8d\x00\xd6\x92\x00\xd6\x92"
	"\x00\xd8\x98\x00\xd8\x98\x00\xda\x99\x00\xda\x9f\x00\xdc\xa0\x00\xdc\xa0\x00\xdc\xa5\x00\xde\xa7"
	"\x00\xde\xac\x00\xde\xac\x00\xe0\xad\x00\xe0\xb3\x00\xe2\xb4\x00\xe2\xb4\x00\xe4\xbb\x00\xe4\xbb"
	"\x00\xe6\xbd\x00\xe6\xc2\x00\xe8\xc4\x00\xe8\xca\x00\xea\xcb\x00\xea\xcb\x00\xec\xd3\x00\xec\xd3"
	"\x00\xee\xd4\x00\xee\xda\x00\xf0\xdc\x00\xf0\xdc\x00\xf2\xe3\x00\xf4\xe6\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec"
	"\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec\x00\xf5\xec";
