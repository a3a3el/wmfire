/* Green flame effect */

static unsigned char flamegreen1[256 * 3] =
	"\x0f\x07\x00\x0b\x06\x00\x0b\x07\x00\x0b\x07\x00\x09\x06\x00\x09\x07\x00\x09\x07\x00\x07\x06\x00"
	"\x07\x06\x00\x07\x07\x00\x07\x07\x00\x07\x07\x00\x05\x05\x00\x05\x05\x00\x05\x05\x00\x05\x05\x00"
	"\x05\x05\x00\x05\x05\x00\x02\x03\x00\x02\x03\x00\x02\x03\x00\x02\x03\x00\x02\x03\x00\x02\x03\x00"
	"\x02\x03\x00\x02\x03\x00\x02\x03\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00"
	"\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
	"\x00\x00\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x01\x00\x00\x03\x00\x00\x05\x00\x00\x05\x00"
	"\x00\x07\x00\x00\x09\x00\x01\x0b\x00\x01\x0d\x00\x01\x0f\x00\x02\x11\x00\x02\x13\x00\x03\x17\x00"
	"\x03\x18\x01\x04\x1a\x01\x04\x1e\x01\x05\x22\x01\x07\x25\x02\x07\x27\x02\x08\x2b\x02\x0a\x2f\x02"
	"\x0b\x32\x03\x0c\x36\x03\x0c\x39\x04\x0f\x3d\x04\x10\x41\x04\x11\x44\x05\x13\x48\x05\x14\x4b\x06"
	"\x16\x4f\x06\x16\x53\x06\x18\x5b\x04\x19\x60\x03\x19\x66\x01\x1c\x6b\x00\x1d\x71\x00\x21\x75\x00"
	"\x22\x79\x00\x26\x7d\x00\x27\x80\x00\x2c\x86\x00\x2e\x8a\x00\x32\x8e\x00\x34\x92\x00\x39\x96\x00"
	"\x3a\x9a\x00\x3f\x9c\x00\x40\xa0\x00\x46\xa4\x00\x48\xa8\x00\x49\xac\x00\x4e\xae\x00\x50\xb2\x00"
	"\x55\xb4\x00\x56\xb6\x00\x58\xba\x00\x5d\xbc\x00\x5e\xbe\x00\x5f\xc0\x00\x60\xc2\x00\x66\xc4\x00"
	"\x66\xc4\x00\x67\xc6\x00\x67\xc6\x00\x68\xc8\x00\x68\xc8\x00\x68\xc8\x00\x68\xc8\x00\x68\xc8\x00"
	"\x6e\xca\x00\x6d\xc8\x00\x6e\xca\x00\x6e\xca\x00\x6e\xca\x00\x74\xcc\x00\x74\xcc\x00\x74\xcc\x00"
	"\x74\xcc\x00\x79\xcc\x00\x7a\xce\x00\x7a\xce\x00\x7f\xce\x00\x80\xd0\x00\x80\xd0\x00\x80\xd0\x00"
	"\x85\xd2\x00\x85\xd2\x00\x85\xd2\x00\x8b\xd4\x00\x8b\xd4\x00\x8d\xd6\x00\x92\xd6\x00\x92\xd6\x00"
	"\x98\xd8\x00\x98\xd8\x00\x99\xda\x00\x9f\xda\x00\xa0\xdc\x00\xa0\xdc\x00\xa5\xdc\x00\xa7\xde\x00"
	"\xac\xde\x00\xac\xde\x00\xad\xe0\x00\xb3\xe0\x00\xb4\xe2\x00\xb4\xe2\x00\xbb\xe4\x00\xbb\xe4\x00"
	"\xbd\xe6\x00\xc2\xe6\x00\xc4\xe8\x00\xca\xe8\x00\xcb\xea\x00\xcb\xea\x00\xd3\xec\x00\xd3\xec\x00"
	"\xd4\xee\x00\xda\xee\x00\xdc\xf0\x00\xdc\xf0\x00\xe3\xf2\x00\xe6\xf4\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00"
	"\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00\xec\xf5\x00";