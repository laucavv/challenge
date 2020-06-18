#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int HippoFinder(int codes[], int NumberToFind, int size)
{
	int index;

	for (index = 0; index < size; index++)
		if (codes[index] == NumberToFind)
		{
			return (index);
		}
	return (-1);
}

int HeroFinder(int codes[], int NumberToFind, int size)
{
	int mit = 0,  ret = 0;
	mit = (size / 2);
	if (codes[0] == NumberToFind)
	{
		return (0);
	}
	if (codes[mit] == NumberToFind)
	{
		return (mit);
	}
	if (codes[mit] > NumberToFind)
	{
		ret = HeroFinder(codes, NumberToFind, (size - mit)) - mit;
	}
	else
	{
		ret = HeroFinder((codes + mit), NumberToFind, (size - mit));
	}
	return (mit + ret);
}
int main(void)
{
	int codes[] ={-89, -86, -77, -70, -65, -59, -46, -38, -33, -31, -15, -7, -3, 2, 46, 70, 76, 82, 95, 112, 122,
	126, 128, 135, 148, 152, 164, 169, 170, 173, 176, 201, 203, 208, 210, 222, 223, 225, 240, 262, 290, 292, 300,
	318, 327, 335, 337, 343, 355, 358, 359, 360, 365, 379, 380, 393, 402, 409, 410, 434, 436, 464, 477, 481, 493,
	498, 504, 506, 515, 529, 537, 538, 544, 566, 588, 601, 621, 626, 627, 629, 648, 653, 659, 664, 666, 667, 684,
	688, 703, 708, 709, 721, 746, 765, 790, 793, 813, 833, 844, 870, 881, 895, 925, 928, 937, 949, 953, 980, 990,
	997, 1031, 1038, 1042, 1048, 1076, 1080, 1091, 1092, 1102, 1109, 1110, 1112, 1127, 1130, 1134, 1137, 1144,
	1164, 1172, 1175, 1176, 1193, 1216, 1220, 1240, 1247, 1261, 1288, 1291, 1293, 1309, 1321, 1332, 1333, 1336,
	1340, 1349, 1351, 1353, 1355, 1359, 1373, 1380, 1382, 1389, 1393, 1395, 1399, 1403, 1413, 1418, 1422, 1423,
	1424, 1430, 1433, 1446, 1448, 1458, 1465, 1475, 1485, 1504, 1516, 1528, 1531, 1534, 1551, 1570, 1574, 1580,
	1587, 1594, 1605, 1618, 1621, 1641, 1657, 1675, 1694, 1706, 1714, 1718, 1724, 1739, 1760, 1761, 1782, 1810,
	1824, 1825, 1829, 1841, 1842, 1844, 1850, 1868, 1901, 1902, 1927, 1939, 1982, 1985, 1998, 2012, 2037, 2059,
	2067, 2077, 2102, 2122, 2130, 2133, 2148, 2154, 2159, 2162, 2178, 2180, 2190, 2192, 2211, 2234, 2266, 2275,
	2280, 2297, 2298, 2305, 2345, 2362, 2369, 2376, 2383, 2410, 2413, 2415, 2439, 2458, 2476, 2482, 2493, 2494,
	2496, 2497, 2498, 2508, 2540, 2551, 2563, 2586, 2587, 2588, 2612, 2625, 2630, 2638, 2640, 2651, 2654, 2672,
	2675, 2685, 2694, 2709, 2712, 2721, 2727, 2738, 2746, 2754, 2756, 2786, 2790, 2847, 2851, 2858, 2860, 2873,
	2874, 2895, 2899, 2919, 2936, 2943, 2953, 2969, 2979, 2986, 3001, 3017, 3026, 3031, 3040, 3045, 3048, 3049,
	3054, 3059, 3060, 3063, 3071, 3078, 3080, 3084, 3086, 3110, 3111, 3116, 3129, 3137, 3142, 3155, 3169, 3191,
	3200, 3205, 3209, 3212, 3223, 3234, 3246, 3257, 3275, 3287, 3289, 3297, 3306, 3324, 3327, 3343, 3350, 3351,
	3355, 3361, 3365, 3382, 3413, 3423, 3426, 3430, 3439, 3447, 3459, 3477, 3485, 3488, 3491, 3497, 3511, 3513,
	3528, 3545, 3548, 3571, 3617, 3630, 3639, 3642, 3643, 3659, 3668, 3671, 3681, 3684, 3707, 3715, 3719, 3737,
	3738, 3741, 3743, 3794, 3797, 3803, 3832, 3837, 3847, 3855, 3898, 3908, 3920, 3960, 3975, 3993, 3997, 4014,
	4015, 4017, 4037, 4044, 4048, 4069, 4098, 4128, 4135, 4138, 4158, 4159, 4160, 4178, 4186, 4190, 4195, 4201,
	4204, 4208, 4230, 4261, 4263, 4264, 4266, 4278, 4312, 4313, 4314, 4317, 4329, 4332, 4347, 4349, 4361, 4365,
	4387, 4392, 4419, 4427, 4430, 4434, 4473, 4480, 4515, 4524, 4534, 4558, 4560, 4568, 4571, 4589, 4591, 4651,
	4652, 4658, 4666, 4702, 4726, 4728, 4734, 4744, 4748, 4752, 4758, 4760, 4771, 4772, 4792, 4812, 4817, 4821,
	4846, 4856, 4864, 4883, 4886, 4902, 4924, 4930, 4939, 4953, 4957, 4962, 4963, 4974, 4984, 5000, 5007, 5013,
	5036, 5039, 5064, 5084, 5099, 5107, 5110, 5115, 5124, 5127, 5136, 5138, 5139, 5151, 5153, 5164, 5171, 5178,
	5183, 5192, 5193, 5218, 5220, 5229, 5233, 5235, 5241, 5249, 5250, 5262, 5271, 5286, 5287, 5296, 5306, 5314,
	5323, 5329, 5354, 5370, 5374, 5377, 5387, 5390, 5402, 5403, 5409, 5422, 5428, 5431, 5450, 5474, 5497, 5512,
	5516, 5527, 5530, 5541, 5559, 5582, 5592, 5599, 5617, 5627, 5633, 5638, 5640, 5642, 5652, 5653, 5657, 5664,
	5674, 5699, 5738, 5759, 5766, 5768, 5780, 5781, 5792, 5806, 5808, 5818, 5823, 5828, 5829, 5844, 5849, 5850,
	5851, 5879, 5890, 5891, 5895, 5913, 5938, 5940, 5953, 5964, 5973, 5985, 5996, 6001, 6003, 6012, 6025, 6028,
	6029, 6044, 6049, 6051, 6063, 6064, 6077, 6104, 6116, 6131, 6132, 6134, 6147, 6158, 6159, 6166, 6172, 6185,
	6190, 6218, 6220, 6226, 6241, 6242, 6255, 6263, 6266, 6269, 6271, 6280, 6290, 6291, 6299, 6313, 6326, 6353,
	6354, 6369, 6389, 6396, 6423, 6444, 6446, 6457, 6460, 6479, 6481, 6498, 6505, 6516, 6547, 6548, 6551, 6553,
	6598, 6612, 6613, 6614, 6620, 6630, 6634, 6644, 6645, 6695, 6706, 6708, 6711, 6738, 6743, 6758, 6759, 6765,
	6776, 6780, 6799, 6800, 6801, 6803, 6806, 6815, 6829, 6835, 6842, 6846, 6865, 6873, 6874, 6877, 6887, 6890,
	6893, 6902, 6909, 6912, 6915, 6920, 6932, 6950, 6981, 6988, 6991, 6993, 7001, 7031, 7035, 7036, 7048, 7062,
	7083, 7114, 7120, 7127, 7132, 7134, 7140, 7141, 7158, 7172, 7174, 7182, 7185, 7208, 7218, 7223, 7237, 7251,
	7274, 7281, 7318, 7331, 7348, 7352, 7371, 7392, 7410, 7418, 7439, 7452, 7474, 7483, 7488, 7493, 7501, 7511,
	7524, 7526, 7552, 7556, 7562, 7567, 7570, 7571, 7590, 7598, 7615, 7619, 7634, 7635, 7636, 7677, 7684, 7713,
	7720, 7735, 7741, 7755, 7768, 7770, 7771, 7772, 7778, 7780, 7805, 7809, 7831, 7834, 7848, 7858, 7859, 7861,
	7862, 7881, 7893, 7894, 7900, 7902, 7918, 7923, 7931, 7932, 7947, 7969, 7974, 7992, 8016, 8033, 8034, 8037,
	8040, 8056, 8063, 8065, 8076, 8079, 8082, 8090, 8118, 8131, 8142, 8155, 8159, 8170, 8178, 8191, 8193, 8200,
	8215, 8221, 8228, 8233, 8243, 8253, 8258, 8263, 8265, 8269, 8271, 8274, 8284, 8289, 8294, 8295, 8296, 8308,
	8320, 8323, 8326, 8327, 8332, 8334, 8342, 8347, 8352, 8363, 8364, 8367, 8370, 8372, 8385, 8391, 8398, 8413,
	8418, 8467, 8487, 8496, 8510, 8517, 8531, 8558, 8562, 8564, 8567, 8575, 8576, 8587, 8602, 8603, 8606, 8611,
	8614, 8619, 8639, 8644, 8645, 8684, 8697, 8699, 8709, 8716, 8719, 8722, 8736, 8746, 8747, 8750, 8759, 8771,
	8783, 8788, 8794, 8796, 8799, 8802, 8803, 8808, 8811, 8813, 8815, 8834, 8838, 8846, 8856, 8871, 8873, 8877,
	8897, 8899, 8918, 8945, 8947, 8948, 8950, 9001, 9004, 9012, 9019, 9040, 9061, 9101, 9102, 9107, 9108, 9109,
	9160, 9164, 9169, 9183, 9209, 9217, 9225, 9227, 9235, 9239, 9249, 9261, 9263, 9276, 9280, 9288, 9297, 9311,
	9327, 9328, 9330, 9333, 9345, 9383, 9394, 9395, 9399, 9460, 9464, 9476, 9484, 9501, 9510, 9516, 9521, 9526,
	9541, 9542, 9558, 9582, 9593, 9613, 9624, 9634, 9650, 9686, 9714, 9734, 9744, 9753, 9754, 9756, 9768, 9770,
	9772, 9773, 9779, 9782, 9785, 9789, 9791, 9798, 9810, 9811, 9812, 9813, 9822, 9827, 9828, 9857, 9873, 9874,
	9881, 9886, 9890, 9899, 9900, 9908, 9928, 9930, 9947, 9949, 9956, 9965, 9968, 9973, 9982, 9992, 9994, 9995,
	10001, 10015, 10022, 10034, 10037, 10067, 10089, 10104, 10106, 10108, 10110, 10120, 10123, 10125, 10132, 10135,
	10142, 10173, 10180, 10200, 10202, 10210, 10237, 10254, 10261, 10282, 10284, 10300, 10307, 10321, 10325, 10327,
	10340, 10346, 10350, 10352, 10386, 10392, 10400, 10416, 10424, 10431, 10447, 10451, 10459, 10467, 10468, 10474,
	10480, 10487, 10488, 10524, 10529, 10578, 10590, 10593, 10614, 10616, 10620, 10622, 10623, 10636, 10647, 10649,
	10669, 10673, 10675, 10678, 10685, 10692, 10696, 10702, 10733, 10738, 10750, 10753, 10792, 10797, 10799, 10801,
	10809, 10812, 10813, 10814, 10825, 10838, 10854, 10856, 10885, 10893, 10894, 10919, 10938, 10939, 10976, 10981,
	10987, 10988, 10989, 11012, 11022, 11031, 11052, 11067, 11091, 11116, 11121, 11130, 11131, 11134, 11145, 11161,
	11173, 11198, 11199, 11209, 11236, 11242, 11243, 11245, 11256, 11269, 11273, 11280, 11288, 11304, 11309, 11320,
	11334, 11351, 11356, 11367, 11396, 11409, 11458, 11465, 11466, 11494, 11497, 11504, 11506, 11507, 11509, 11531,
	11536, 11537, 11545, 11550, 11551, 11569, 11572, 11588, 11594, 11598, 11618, 11637, 11661, 11670, 11678, 11714,
	11717, 11729, 11736, 11737, 11747, 11751, 11752, 11755, 11802, 11809, 11810, 11820, 11822, 11824, 11826, 11827,
	11848, 11852, 11853, 11875, 11884, 11894, 11906, 11908, 11919, 11924, 11925, 11930, 11942, 11951, 11952, 11955,
	11966, 11980, 11982, 11994, 12015, 12024, 12034, 12037, 12039, 12049, 12082, 12095, 12097, 12109, 12125, 12130,
	12170, 12179, 12187, 12202, 12207, 12219, 12230, 12254, 12262, 12278, 12288, 12290, 12299, 12301, 12319, 12327,
	12329, 12333, 12334, 12356, 12357, 12373, 12392, 12395, 12417, 12427, 12433, 12443, 12446, 12473, 12491, 12515,
	12536, 12571, 12585, 12592, 12615, 12616, 12619, 12624, 12627, 12635, 12636, 12646, 12651, 12655, 12668, 12685,
	12704, 12715, 12725, 12751, 12758, 12764, 12772, 12773, 12789, 12790, 12809, 12812, 12824, 12831, 12851, 12871,
	12873, 12884, 12899, 12925, 12934, 12949, 12950, 12953, 12960, 13015, 13022, 13027, 13059, 13074, 13077, 13088,
	13101, 13112, 13118, 13133, 13150, 13165, 13173, 13188, 13201, 13203, 13212, 13231, 13242, 13243, 13294, 13302,
	13313, 13322, 13336, 13341, 13344, 13347, 13370, 13371, 13372, 13375, 13385, 13402, 13432, 13436, 13441, 13442,
	13460, 13463, 13465, 13478, 13487, 13510, 13513, 13535, 13548, 13552, 13553, 13556, 13558, 13578, 13588, 13602,
	13605, 13611, 13613, 13629, 13639, 13650, 13652, 13675, 13698, 13701, 13717, 13718, 13719, 13734, 13762, 13767,
	13786, 13796, 13797, 13815, 13836, 13840, 13843, 13845, 13853, 13869, 13880, 13882, 13887, 13919, 13923, 13926,
	13929, 13953, 13970, 13978, 13984, 13993, 14002, 14004, 14006, 14022, 14034, 14052, 14058, 14061, 14079, 14113,
	14146, 14147, 14174, 14183, 14189, 14194, 14198, 14205, 14213, 14215, 14230, 14234, 14250, 14268, 14271, 14317,
	14348, 14360, 14364, 14367, 14375, 14395, 14417, 14431, 14432, 14440, 14447, 14470, 14491, 14501, 14504, 14507,
	14512, 14520, 14528, 14533, 14534, 14569, 14592, 14593, 14636, 14640, 14649, 14665, 14677, 14684, 14694, 14701,
	14718, 14719, 14740, 14745, 14766, 14770, 14774, 14779, 14827, 14833, 14849, 14853, 14858, 14866, 14881, 14882,
	14914, 14917, 14927, 14929, 14939, 14964, 14967, 14970, 15020, 15022, 15029, 15030, 15039, 15044, 15054, 15062,
	15092, 15095, 15098, 15103, 15105, 15114, 15141, 15148, 15157, 15167, 15168, 15207, 15230, 15245, 15250, 15253,
	15258, 15270, 15276, 15278, 15285, 15308, 15326, 15345, 15355, 15395, 15402, 15413, 15418, 15419, 15427, 15441,
	15445, 15450, 15472, 15475, 15481, 15491, 15496, 15518, 15520, 15535, 15537, 15538, 15543, 15566, 15570, 15571,
	15583, 15605, 15630, 15643, 15661, 15662, 15670, 15671, 15683, 15685, 15688, 15689, 15706, 15718, 15738, 15739,
	15758, 15760, 15788, 15808, 15815, 15837, 15853, 15854, 15858, 15863, 15872, 15873, 15887, 15896, 15908, 15910,
	15915, 15920, 15921, 15931, 15938, 15940, 15941, 15942, 15957, 15978, 15980, 15991, 16008, 16018, 16033, 16035,
	16043, 16044, 16064, 16070, 16073, 16075, 16085, 16089, 16090, 16100, 16101, 16115, 16117, 16120, 16130, 16136,
	16147, 16154, 16173, 16174, 16184, 16188, 16195, 16212, 16255, 16275, 16288, 16292, 16293, 16301, 16332, 16341,
	16353, 16354, 16356, 16379, 16386, 16415, 16422, 16435, 16439, 16441, 16447, 16449, 16467, 16468, 16469, 16472,
	16475, 16488, 16497, 16517, 16527, 16555, 16559, 16570, 16583, 16587, 16591, 16593, 16601, 16604, 16607, 16637,
	16642, 16648, 16665, 16666, 16685, 16687, 16693, 16709, 16711, 16728, 16734, 16735, 16749, 16774, 16776, 16782,
	16785, 16793, 16804, 16837, 16857, 16865, 16869, 16878, 16883, 16884, 16887, 16894, 16899, 16900, 16911, 16913,
	16920, 16923, 16933, 16956, 16961, 16966, 16975, 16995, 17015, 17019, 17020, 17023, 17027, 17036, 17041, 17055,
	17062, 17066, 17074, 17075, 17079, 17081, 17084, 17100, 17106, 17115, 17119, 17132, 17149, 17157, 17176, 17198,
	17231, 17233, 17247, 17264, 17270, 17274, 17276, 17283, 17299, 17305, 17314, 17320, 17327, 17332, 17356, 17376,
	17404, 17414, 17435, 17466, 17468, 17481, 17499, 17501, 17513, 17514, 17516, 17524, 17556, 17559, 17565, 17573,
	17582, 17589, 17602, 17613, 17618, 17621, 17635, 17639, 17640, 17658, 17663, 17666, 17676, 17678, 17708, 17714,
	17719, 17728, 17732, 17736, 17756, 17758, 17760, 17764, 17768, 17775, 17776, 17782, 17826, 17834, 17839, 17840,
	17846, 17852, 17871, 17876, 17887, 17896, 17904, 17911, 17917, 17949, 17956, 17966, 17974, 17976, 17987, 18001,
	18002, 18003, 18019, 18023, 18039, 18047, 18056, 18073, 18077, 18085, 18101, 18107, 18111, 18118, 18120, 18129,
	18131, 18132, 18155, 18163, 18168, 18181, 18186, 18213, 18216, 18218, 18222, 18230, 18237, 18254, 18286, 18299,
	18311, 18318, 18325, 18333, 18339, 18344, 18348, 18355, 18371, 18374, 18391, 18400, 18408, 18421, 18457, 18458,
	18459, 18483, 18498, 18511, 18512, 18528, 18533, 18540, 18544, 18545, 18565, 18616, 18634, 18640, 18643, 18665,
	18689, 18702, 18716, 18720, 18736, 18740, 18743, 18762, 18767, 18768, 18788, 18792, 18794, 18801, 18815, 18818,
	18827, 18859, 18863, 18871, 18875, 18885, 18898, 18909, 18919, 18921, 18927, 18932, 18935, 18960, 18965, 18985,
	19001, 19003, 19009, 19012, 19017, 19044, 19051, 19054, 19066, 19067, 19079, 19080, 19083, 19088, 19091, 19097,
	19106, 19109, 19116, 19143, 19151, 19166, 19186, 19200, 19203, 19205, 19207, 19229, 19231, 19238, 19240, 19243,
	19248, 19251, 19252, 19254, 19272, 19275, 19324, 19339, 19340, 19341, 19352, 19374, 19377, 19387, 19399, 19409,
	19410, 19419, 19433, 19451, 19465, 19474, 19478, 19485, 19487, 19488, 19494, 19542, 19546, 19548, 19549, 19566,
	19575, 19586, 19587, 19592, 19596, 19598, 19607, 19619, 19639, 19642, 19643, 19646, 19657, 19669, 19687, 19689,
	19712, 19713, 19716, 19743, 19749, 19766, 19770, 19773, 19778, 19793, 19801, 19806, 19817, 19835, 19839, 19842,
	19852, 19857, 19860, 19871, 19874, 19892, 19911, 19920, 19924, 19929, 19930, 19932, 19946, 19950, 19983, 19990,
	19995, 19997, 20001, 20005, 20009, 20016, 20026, 20039, 20043, 20044, 20049, 20051, 20052, 20054, 20058, 20063,
	20064, 20070, 20090, 20100, 20101, 20103, 20114, 20130, 20135, 20159, 20164, 20169, 20175, 20180, 20191, 20192,
	20204, 20205, 20216, 20223, 20229, 20230, 20245, 20277, 20282, 20283, 20288, 20291, 20295, 20325, 20327, 20340,
	20362, 20375, 20403, 20405, 20409, 20417, 20424, 20431, 20439, 20452, 20457, 20465, 20470, 20483, 20537, 20546,
	20548, 20570, 20573, 20587, 20588, 20627, 20628, 20660, 20662, 20670, 20681, 20682, 20683, 20706, 20708, 20710,
	20712, 20718, 20720, 20726, 20735, 20737, 20755, 20757, 20816, 20828, 20834, 20840, 20846, 20854, 20858, 20864,
	20872, 20882, 20896, 20913, 20930, 20933, 20941, 20942, 20993, 21000, 21009, 21025, 21045, 21047, 21074, 21079,
	21081, 21107, 21110, 21116, 21122, 21158, 21159, 21166, 21186, 21187, 21202, 21208, 21232, 21235, 21237, 21241,
	21247, 21276, 21281, 21293, 21300, 21311, 21314, 21318, 21327, 21343, 21349, 21351, 21364, 21368, 21373, 21398,
	21410, 21419, 21429, 21444, 21446, 21453, 21464, 21471, 21482, 21521, 21549, 21554, 21559, 21575, 21583, 21598,
	21605, 21622, 21636, 21667, 21674, 21687, 21697, 21718, 21724, 21732, 21735, 21739, 21745, 21752, 21786, 21787,
	21790, 21791, 21799, 21806, 21809, 21815, 21829, 21842, 21848, 21852, 21879, 21886, 21900, 21910, 21930, 21938,
	21943, 21945, 21949, 21956, 21971, 21978, 21994, 21996, 21997, 22003, 22004, 22020, 22034, 22045, 22047, 22083,
	22089, 22100, 22105, 22108, 22109, 22116, 22129, 22136, 22142, 22161, 22188, 22204, 22205, 22209, 22210, 22211,
	22237, 22247, 22260, 22289, 22303, 22304, 22307, 22316, 22342, 22372, 22379, 22387, 22388, 22392, 22394, 22415,
	22430, 22464, 22467, 22471, 22478, 22479, 22534, 22547, 22561, 22569, 22570, 22579, 22590, 22602, 22612, 22613,
	22624, 22633, 22648, 22655, 22661, 22668, 22697, 22703, 22722, 22727, 22732, 22737, 22743, 22750, 22756, 22759,
	22769, 22770, 22780, 22787, 22791, 22809, 22857, 22864, 22885, 22895, 22917, 22926, 22937, 22938, 22951, 22988,
	22996, 23004, 23006, 23021, 23022, 23025, 23044, 23063, 23069, 23076, 23079, 23087, 23088, 23089, 23114, 23129,
	23141, 23145, 23162, 23183, 23200, 23207, 23219, 23232, 23234, 23236, 23239, 23240, 23251, 23276, 23305, 23312,
	23317, 23319, 23341, 23355, 23373, 23380, 23386, 23399, 23405, 23406, 23410, 23411, 23445, 23453, 23458, 23462,
	23468, 23470, 23477, 23485, 23506, 23509, 23516, 23522, 23525, 23528, 23546, 23549, 23554, 23560, 23568, 23587,
	23603, 23604, 23606, 23614, 23637, 23675, 23686, 23689, 23690, 23699, 23709, 23735, 23740, 23766, 23775, 23782,
	23791, 23799, 23800, 23804, 23808, 23811, 23826, 23833, 23849, 23858, 23869, 23870, 23884, 23887, 23904, 23907,
	23917, 23926, 23942, 23949, 23963, 23984, 24009, 24010, 24012, 24016, 24017, 24034, 24050, 24059, 24063, 24066,
	24068, 24069, 24070, 24073, 24079, 24084, 24095, 24099, 24124, 24131, 24138, 24139, 24141, 24148, 24160, 24168,
	24169, 24171, 24172, 24176, 24179, 24205, 24209, 24210, 24215, 24227, 24246, 24251, 24256, 24270, 24275, 24322,
	24332, 24335, 24336, 24348, 24351, 24356, 24366, 24367, 24398, 24400, 24413, 24414, 24444, 24448, 24464, 24479,
	24488, 24498, 24529, 24532, 24533, 24534, 24545, 24584, 24590, 24592, 24593, 24605, 24606, 24620, 24626, 24641,
	24648, 24650, 24651, 24660, 24665, 24689, 24695, 24699, 24725, 24734, 24749, 24756, 24789, 24803, 24809, 24818,
	24819, 24822, 24827, 24849, 24854, 24860, 24872, 24887, 24895, 24897, 24916, 24917, 24921, 24924, 24926, 24936,
	24943, 24985, 24986, 25002, 25006, 25033, 25051, 25057, 25075, 25089, 25101, 25114, 25133, 25158, 25161, 25170,
	25179, 25209, 25212, 25226, 25228, 25243, 25247, 25261, 25271, 25280, 25299, 25311, 25312, 25341, 25344, 25349,
	25363, 25365, 25366, 25371, 25376, 25383, 25388, 25396, 25400, 25408, 25411, 25416, 25432, 25434, 25437, 25457,
	25464, 25471, 25474, 25500, 25507, 25518, 25533, 25541, 25555, 25591, 25605, 25613, 25627, 25649, 25674, 25677,
	25702, 25720, 25730, 25737, 25742, 25746, 25748, 25754, 25757, 25769, 25778, 25785, 25794, 25797, 25798, 25810,
	25815, 25818, 25842, 25850, 25853, 25861, 25869, 25875, 25883, 25906, 25917, 25922, 25928, 25936, 25940, 25941,
	25950, 25954, 25965, 25970, 25998, 25999, 26006, 26009, 26014, 26025, 26033, 26038, 26064, 26103, 26117, 26138,
	26192, 26198, 26215, 26217, 26235, 26243, 26256, 26278, 26287, 26288, 26291, 26292, 26301, 26303, 26314, 26317,
	26322, 26349, 26371, 26378, 26386, 26405, 26417, 26418, 26419, 26424, 26445, 26456, 26457, 26492, 26503, 26507,
	26515, 26526, 26531, 26532, 26541, 26551, 26559, 26560, 26567, 26569, 26599, 26605, 26613, 26621, 26630, 26631,
	26641, 26653, 26666, 26682, 26707, 26720, 26729, 26746, 26752, 26759, 26766, 26778, 26790, 26791, 26795, 26803,
	26829, 26835, 26836, 26846, 26851, 26860, 26861, 26887, 26898, 26906, 26918, 26925, 26930, 26939, 26962, 26964,
	26965, 26967, 26973, 26975, 26978, 26990, 26994, 27005, 27013, 27016, 27021, 27026, 27039, 27047, 27048, 27064,
	27076, 27078, 27088, 27112, 27121, 27133, 27169, 27180, 27184, 27189, 27196, 27201, 27217, 27239, 27246, 27257,
	27258, 27260, 27271, 27273, 27276, 27280, 27282, 27293, 27302, 27321, 27332, 27336, 27379, 27380, 27393, 27396,
	27409, 27431, 27434, 27453, 27471, 27472, 27474, 27482, 27485, 27494, 27497, 27506, 27507, 27517, 27522, 27527,
	27531, 27539, 27542, 27554, 27559, 27572, 27582, 27584, 27594, 27595, 27607, 27610, 27616, 27618, 27643, 27646,
	27660, 27677, 27681, 27703, 27731, 27737, 27739, 27772, 27777, 27783, 27786, 27787, 27799, 27800, 27806, 27809,
	27828, 27858, 27890, 27893, 27896, 27899, 27918, 27932, 27947, 27950, 27953, 27957, 27963, 27967, 27971, 27972,
	27980, 27983, 27999, 28015, 28024, 28027, 28031, 28057, 28089, 28100, 28102, 28115, 28139, 28155, 28159, 28176,
	28185, 28196, 28205, 28242, 28253, 28285, 28286, 28294, 28303, 28316, 28319, 28324, 28342, 28343, 28345, 28349,
	28357, 28369, 28376, 28381, 28398, 28418, 28419, 28453, 28485, 28486, 28491, 28504, 28520, 28522, 28523, 28524,
	28527, 28533, 28535, 28537, 28559, 28572, 28575, 28593, 28602, 28639, 28647, 28658, 28663, 28668, 28674, 28677,
	28682, 28686, 28695, 28709, 28716, 28733, 28735, 28746, 28757, 28762, 28763, 28765, 28767, 28777, 28781, 28796,
	28801, 28802, 28809, 28820, 28827, 28836, 28844, 28851, 28862, 28865, 28881, 28897, 28902, 28904, 28939, 28944,
	28954, 28958, 28959, 28961, 28975, 28985, 28987, 29001, 29011, 29045, 29067, 29077, 29078, 29094, 29109, 29110,
	29113, 29140, 29156, 29162, 29169, 29178, 29222, 29230, 29248, 29251, 29258, 29265, 29266, 29274, 29278, 29281,
	29293, 29294, 29295, 29306, 29307, 29308, 29309, 29317, 29329, 29340, 29343, 29349, 29366, 29373, 29374, 29383,
	29396, 29398, 29401, 29407, 29411, 29418, 29433, 29438, 29459, 29460, 29466, 29476, 29485, 29487, 29513, 29521,
	29527, 29534, 29546, 29548, 29552, 29558, 29563, 29585, 29590, 29599, 29600, 29611, 29616, 29632, 29647, 29653,
	29665, 29668, 29694, 29695, 29706, 29724, 29760, 29768, 29778, 29790, 29811, 29813, 29814, 29836, 29839, 29845,
	29864, 29866, 29879, 29882, 29888, 29892, 29896, 29899, 29902, 29905, 29908, 29923, 29927, 29929, 29933, 29937,
	29952, 29953, 29956, 29962, 29965, 29976, 29981};

	int FirstCode, SecondCode, ThirdCode;
	clock_t tic, toc;
	double HippoTime, HeroTime;
	int HippoIndex1, HippoIndex2, HippoIndex3, HeroIndex1, HeroIndex2, HeroIndex3;
	int size = sizeof(codes)/4;

	srand(time(NULL));
	FirstCode = codes[rand() % 2999];
	SecondCode = codes[rand() % 2999];
	ThirdCode = codes[rand() % 2999];

	tic = clock();

	HippoIndex1 = HippoFinder(codes, FirstCode, size);
	HippoIndex2 = HippoFinder(codes, SecondCode, size);
	HippoIndex3 = HippoFinder(codes, ThirdCode, size);

	toc = clock();

	HippoTime = (double)(toc - tic) / CLOCKS_PER_SEC;
	printf("HippoFinder took: %f\n", HippoTime);

	tic = clock();

	HeroIndex1 = HeroFinder(codes, FirstCode, size);
	HeroIndex2 = HeroFinder(codes, SecondCode, size);
	HeroIndex3 = HeroFinder(codes, ThirdCode, size);

	toc = clock();

	HeroTime = (double)(toc - tic) / CLOCKS_PER_SEC;
	printf("HeroFinder took: %f\n", HeroTime);
	if (codes[HeroIndex1] == FirstCode &&
	codes[HeroIndex2] == SecondCode &&
	codes[HeroIndex3] == ThirdCode &&
	HeroTime <= HippoTime)
		printf("You did it! you defeated your own brain!\n");
}
