#include "mindustry/content/Blocks.h"
#include "mindustry/world/blocks/ConstructBlock.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/legacy/LegacyUnitFactory.h"
#include "mindustry/world/blocks/environment/TreeBlock.h"
#include "mindustry/world/Block.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/environment/OverlayFloor.h"
#include "mindustry/world/blocks/environment/ShallowLiquid.h"
#include "mindustry/world/blocks/environment/StaticTree.h"
#include "mindustry/world/blocks/environment/AirBlock.h"
#include "mindustry/world/blocks/environment/SpawnBlock.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/content/Blocks_4.h"
#include "mindustry/content/Blocks_5.h"
#include "mindustry/content/Blocks_6.h"
#include "mindustry/content/Blocks_7.h"
#include "mindustry/content/Blocks_8.h"
#include "mindustry/content/Blocks_9.h"
#include "mindustry/content/Blocks_1.h"
#include "mindustry/content/Blocks_2.h"
#include "mindustry/content/Blocks_3.h"
#include "mindustry/content/Blocks_78.h"
#include "mindustry/content/Blocks_131.h"
#include "mindustry/content/Blocks_252.h"
#include "mindustry/content/Blocks_373.h"
#include "mindustry/content/Blocks_77.h"
#include "mindustry/content/Blocks_130.h"
#include "mindustry/content/Blocks_251.h"
#include "mindustry/content/Blocks_372.h"
#include "mindustry/content/Blocks_250.h"
#include "mindustry/content/Blocks_371.h"
#include "mindustry/content/Blocks_79.h"
#include "mindustry/content/Blocks_370.h"
#include "mindustry/content/Blocks_74.h"
#include "mindustry/content/Blocks_135.h"
#include "mindustry/content/Blocks_256.h"
#include "mindustry/content/Blocks_377.h"
#include "mindustry/content/Blocks_73.h"
#include "mindustry/content/Blocks_134.h"
#include "mindustry/content/Blocks_255.h"
#include "mindustry/content/Blocks_376.h"
#include "mindustry/content/Blocks_76.h"
#include "mindustry/content/Blocks_133.h"
#include "mindustry/content/Blocks_254.h"
#include "mindustry/content/Blocks_375.h"
#include "mindustry/content/Blocks_75.h"
#include "mindustry/content/Blocks_132.h"
#include "mindustry/content/Blocks_253.h"
#include "mindustry/content/Blocks_374.h"
#include "mindustry/content/Blocks_81.h"
#include "mindustry/content/Blocks_139.h"
#include "mindustry/content/Blocks_80.h"
#include "mindustry/content/Blocks_138.h"
#include "mindustry/content/Blocks_259.h"
#include "mindustry/content/Blocks_83.h"
#include "mindustry/content/Blocks_137.h"
#include "mindustry/content/Blocks_258.h"
#include "mindustry/content/Blocks_379.h"
#include "mindustry/content/Blocks_82.h"
#include "mindustry/content/Blocks_136.h"
#include "mindustry/content/Blocks_257.h"
#include "mindustry/content/Blocks_378.h"
#include "mindustry/content/Blocks_89.h"
#include "mindustry/content/Blocks_120.h"
#include "mindustry/content/Blocks_241.h"
#include "mindustry/content/Blocks_362.h"
#include "mindustry/content/Blocks_88.h"
#include "mindustry/content/Blocks_240.h"
#include "mindustry/content/Blocks_361.h"
#include "mindustry/content/Blocks_360.h"
#include "mindustry/content/Blocks_85.h"
#include "mindustry/content/Blocks_124.h"
#include "mindustry/content/Blocks_245.h"
#include "mindustry/content/Blocks_366.h"
#include "mindustry/content/Blocks_84.h"
#include "mindustry/content/Blocks_123.h"
#include "mindustry/content/Blocks_244.h"
#include "mindustry/content/Blocks_365.h"
#include "mindustry/content/Blocks_87.h"
#include "mindustry/content/Blocks_122.h"
#include "mindustry/content/Blocks_243.h"
#include "mindustry/content/Blocks_364.h"
#include "mindustry/content/Blocks_86.h"
#include "mindustry/content/Blocks_121.h"
#include "mindustry/content/Blocks_242.h"
#include "mindustry/content/Blocks_363.h"
#include "mindustry/content/Blocks_92.h"
#include "mindustry/content/Blocks_128.h"
#include "mindustry/content/Blocks_249.h"
#include "mindustry/content/Blocks_91.h"
#include "mindustry/content/Blocks_127.h"
#include "mindustry/content/Blocks_248.h"
#include "mindustry/content/Blocks_369.h"
#include "java/lang/Object.h"
#include "mindustry/content/Blocks_94.h"
#include "mindustry/content/Blocks_126.h"
#include "mindustry/content/Blocks_247.h"
#include "mindustry/content/Blocks_368.h"
#include "mindustry/content/Blocks_93.h"
#include "mindustry/content/Blocks_125.h"
#include "mindustry/content/Blocks_246.h"
#include "mindustry/content/Blocks_367.h"
#include "mindustry/content/Blocks_90.h"
#include "mindustry/content/Blocks_129.h"
#include "mindustry/content/Blocks_59.h"
#include "mindustry/content/Blocks_56.h"
#include "mindustry/content/Blocks_230.h"
#include "mindustry/content/Blocks_351.h"
#include "mindustry/content/Blocks_55.h"
#include "mindustry/content/Blocks_350.h"
#include "mindustry/content/Blocks_58.h"
#include "mindustry/content/Blocks_57.h"
#include "mindustry/content/Blocks_52.h"
#include "mindustry/content/Blocks_113.h"
#include "mindustry/content/Blocks_234.h"
#include "mindustry/content/Blocks_355.h"
#include "mindustry/content/Blocks_51.h"
#include "mindustry/content/Blocks_112.h"
#include "mindustry/content/Blocks_233.h"
#include "mindustry/content/Blocks_354.h"
#include "mindustry/content/Blocks_54.h"
#include "mindustry/content/Blocks_111.h"
#include "mindustry/content/Blocks_232.h"
#include "mindustry/content/Blocks_353.h"
#include "mindustry/content/Blocks_53.h"
#include "mindustry/content/Blocks_110.h"
#include "mindustry/content/Blocks_231.h"
#include "mindustry/content/Blocks_352.h"
#include "arc/func/Cons.h"
#include "mindustry/content/Blocks_117.h"
#include "mindustry/content/Blocks_238.h"
#include "mindustry/content/Blocks_359.h"
#include "mindustry/content/Blocks_116.h"
#include "mindustry/content/Blocks_237.h"
#include "mindustry/content/Blocks_358.h"
#include "mindustry/content/Blocks_61.h"
#include "mindustry/content/Blocks_115.h"
#include "mindustry/content/Blocks_236.h"
#include "mindustry/content/Blocks_357.h"
#include "mindustry/content/Blocks_60.h"
#include "mindustry/content/Blocks_114.h"
#include "mindustry/content/Blocks_235.h"
#include "mindustry/content/Blocks_356.h"
#include "mindustry/content/Blocks_119.h"
#include "mindustry/content/Blocks_118.h"
#include "mindustry/content/Blocks_239.h"
#include "mindustry/content/Blocks_67.h"
#include "mindustry/content/Blocks_340.h"
#include "mindustry/content/Blocks_66.h"
#include "mindustry/content/Blocks_69.h"
#include "mindustry/content/Blocks_68.h"
#include "mindustry/content/Blocks_63.h"
#include "mindustry/content/Blocks_102.h"
#include "mindustry/content/Blocks_223.h"
#include "mindustry/content/Blocks_344.h"
#include "mindustry/content/Blocks_62.h"
#include "mindustry/content/Blocks_101.h"
#include "mindustry/content/Blocks_222.h"
#include "mindustry/content/Blocks_343.h"
#include "mindustry/content/Blocks_65.h"
#include "mindustry/content/Blocks_100.h"
#include "mindustry/content/Blocks_221.h"
#include "mindustry/content/Blocks_342.h"
#include "mindustry/content/Blocks_64.h"
#include "mindustry/content/Blocks_220.h"
#include "mindustry/content/Blocks_341.h"
#include "mindustry/content/Blocks_70.h"
#include "mindustry/content/Blocks_106.h"
#include "mindustry/content/Blocks_227.h"
#include "mindustry/content/Blocks_348.h"
#include "mindustry/content/Blocks_105.h"
#include "mindustry/content/Blocks_226.h"
#include "mindustry/content/Blocks_347.h"
#include "mindustry/content/Blocks_72.h"
#include "mindustry/content/Blocks_104.h"
#include "mindustry/content/Blocks_225.h"
#include "mindustry/content/Blocks_346.h"
#include "mindustry/content/Blocks_71.h"
#include "mindustry/content/Blocks_103.h"
#include "mindustry/content/Blocks_224.h"
#include "mindustry/content/Blocks_345.h"
#include "mindustry/content/Blocks_109.h"
#include "mindustry/content/Blocks_108.h"
#include "mindustry/content/Blocks_229.h"
#include "mindustry/content/Blocks_107.h"
#include "mindustry/content/Blocks_228.h"
#include "mindustry/content/Blocks_349.h"
#include "mindustry/content/Blocks_38.h"
#include "mindustry/content/Blocks_37.h"
#include "mindustry/content/Blocks_39.h"
#include "mindustry/content/Blocks_34.h"
#include "mindustry/content/Blocks_33.h"
#include "mindustry/content/Blocks_36.h"
#include "mindustry/content/Blocks_35.h"
#include "mindustry/content/Blocks_30.h"
#include "mindustry/content/Blocks_212.h"
#include "mindustry/content/Blocks_333.h"
#include "mindustry/content/Blocks_211.h"
#include "mindustry/content/Blocks_332.h"
#include "mindustry/content/Blocks_32.h"
#include "mindustry/content/Blocks_210.h"
#include "mindustry/content/Blocks_331.h"
#include "mindustry/content/Blocks_31.h"
#include "mindustry/world/blocks/environment/RuneOverlay.h"
#include "mindustry/content/Blocks_330.h"
#include "mindustry/content/Blocks_216.h"
#include "mindustry/content/Blocks_337.h"
#include "mindustry/content/Blocks_215.h"
#include "mindustry/content/Blocks_336.h"
#include "mindustry/content/Blocks_214.h"
#include "mindustry/content/Blocks_335.h"
#include "mindustry/content/Blocks_213.h"
#include "mindustry/content/Blocks_334.h"
#include "mindustry/content/Blocks_219.h"
#include "mindustry/content/Blocks_218.h"
#include "mindustry/content/Blocks_339.h"
#include "mindustry/content/Blocks_217.h"
#include "mindustry/content/Blocks_338.h"
#include "mindustry/content/Blocks_49.h"
#include "mindustry/content/Blocks_48.h"
#include "mindustry/content/Blocks_45.h"
#include "mindustry/content/Blocks_44.h"
#include "mindustry/content/Blocks_47.h"
#include "mindustry/content/Blocks_46.h"
#include "mindustry/content/Blocks_41.h"
#include "mindustry/content/Blocks_201.h"
#include "mindustry/content/Blocks_322.h"
#include "mindustry/content/Blocks_40.h"
#include "mindustry/content/Items.h"
#include "mindustry/content/Blocks_200.h"
#include "mindustry/content/Blocks_321.h"
#include "mindustry/content/Blocks_43.h"
#include "mindustry/content/Blocks_320.h"
#include "mindustry/content/Blocks_42.h"
#include "mindustry/content/Blocks_205.h"
#include "mindustry/content/Blocks_326.h"
#include "mindustry/content/Blocks_204.h"
#include "mindustry/content/Blocks_325.h"
#include "mindustry/content/Blocks_50.h"
#include "mindustry/content/Blocks_203.h"
#include "mindustry/content/Blocks_324.h"
#include "mindustry/content/Blocks_202.h"
#include "mindustry/content/Blocks_323.h"
#include "mindustry/content/Blocks_209.h"
#include "mindustry/content/Blocks_208.h"
#include "mindustry/content/Blocks_329.h"
#include "mindustry/content/Blocks_207.h"
#include "mindustry/content/Blocks_328.h"
#include "mindustry/content/Blocks_206.h"
#include "mindustry/content/Blocks_327.h"
#include "mindustry/world/blocks/environment/StaticWall.h"
#include "mindustry/content/Blocks_19.h"
#include "mindustry/content/Blocks_16.h"
#include "mindustry/content/Blocks_15.h"
#include "mindustry/content/Blocks_18.h"
#include "mindustry/content/Blocks_17.h"
#include "mindustry/content/Blocks_12.h"
#include "mindustry/content/Blocks_11.h"
#include "mindustry/content/Blocks_14.h"
#include "mindustry/content/Blocks_13.h"
#include "mindustry/content/Blocks_311.h"
#include "mindustry/content/Blocks_310.h"
#include "mindustry/content/Blocks_10.h"
#include "mindustry/content/Blocks_315.h"
#include "mindustry/content/Blocks_314.h"
#include "mindustry/content/Blocks_313.h"
#include "mindustry/content/Blocks_312.h"
#include "mindustry/content/Blocks_319.h"
#include "mindustry/content/Blocks_318.h"
#include "mindustry/content/Blocks_317.h"
#include "mindustry/content/Blocks_316.h"
#include "mindustry/content/Blocks_27.h"
#include "mindustry/content/Blocks_26.h"
#include "mindustry/content/Blocks_29.h"
#include "mindustry/content/Blocks_28.h"
#include "mindustry/content/Blocks_23.h"
#include "mindustry/content/Blocks_22.h"
#include "mindustry/content/Blocks_25.h"
#include "mindustry/content/Blocks_24.h"
#include "mindustry/content/Blocks_300.h"
#include "mindustry/content/Blocks_21.h"
#include "mindustry/content/Blocks_20.h"
#include "mindustry/content/Blocks_304.h"
#include "mindustry/content/Blocks_303.h"
#include "mindustry/content/Blocks_302.h"
#include "mindustry/content/Blocks_301.h"
#include "mindustry/content/Blocks_308.h"
#include "mindustry/content/Blocks_307.h"
#include "mindustry/content/Blocks_306.h"
#include "mindustry/content/Blocks_305.h"
#include "mindustry/content/Blocks_309.h"
#include "arc/struct/Seq.h"
#include "mindustry/content/Blocks_invoke_arc_func_Cons_1.h"
#include "mindustry/world/blocks/environment/EmptyFloor.h"
#include "mindustry/world/blocks/legacy/LegacyMechPad.h"
#include "mindustry/content/Blocks_193.h"
#include "mindustry/content/Blocks_192.h"
#include "mindustry/content/Blocks_191.h"
#include "mindustry/content/Blocks_190.h"
#include "mindustry/content/Blocks_197.h"
#include "mindustry/content/Blocks_196.h"
#include "mindustry/content/Blocks_195.h"
#include "mindustry/content/Blocks_194.h"
#include "mindustry/content/Blocks_199.h"
#include "mindustry/content/Blocks_198.h"
#include "mindustry/world/blocks/environment/RemoveOre.h"
#include "mindustry/content/Blocks_182.h"
#include "mindustry/content/Blocks_181.h"
#include "mindustry/content/Blocks_180.h"
#include "mindustry/content/Blocks_186.h"
#include "mindustry/content/Blocks_185.h"
#include "mindustry/content/Blocks_184.h"
#include "mindustry/content/Blocks_183.h"
#include "mindustry/content/Blocks_189.h"
#include "mindustry/content/Blocks_188.h"
#include "mindustry/content/Blocks_187.h"
#include "mindustry/content/Blocks_171.h"
#include "mindustry/content/Blocks_292.h"
#include "mindustry/content/Blocks_170.h"
#include "mindustry/content/Blocks_291.h"
#include "mindustry/content/Blocks_290.h"
#include "mindustry/content/Blocks_175.h"
#include "mindustry/content/Blocks_296.h"
#include "mindustry/content/Blocks_174.h"
#include "mindustry/content/Blocks_295.h"
#include "mindustry/content/Blocks_173.h"
#include "mindustry/content/Blocks_294.h"
#include "mindustry/content/Blocks_172.h"
#include "mindustry/content/Blocks_293.h"
#include "mindustry/content/Blocks_179.h"
#include "mindustry/content/Blocks_178.h"
#include "mindustry/content/Blocks_299.h"
#include "mindustry/content/Blocks_177.h"
#include "mindustry/content/Blocks_298.h"
#include "mindustry/content/Blocks_176.h"
#include "mindustry/content/Blocks_297.h"
#include "mindustry/world/blocks/environment/RemoveWall.h"
#include "mindustry/content/Blocks_160.h"
#include "mindustry/content/Blocks_281.h"
#include "mindustry/content/Blocks_280.h"
#include "mindustry/content/Blocks_164.h"
#include "mindustry/content/Blocks_285.h"
#include "mindustry/content/Blocks_163.h"
#include "mindustry/content/Blocks_284.h"
#include "mindustry/content/Blocks_162.h"
#include "mindustry/content/Blocks_283.h"
#include "mindustry/content/Blocks_161.h"
#include "mindustry/content/Blocks_282.h"
#include "mindustry/content/Blocks_168.h"
#include "mindustry/content/Blocks_289.h"
#include "mindustry/content/Blocks_167.h"
#include "mindustry/content/Blocks_288.h"
#include "mindustry/content/Blocks_166.h"
#include "mindustry/content/Blocks_287.h"
#include "mindustry/content/Blocks_165.h"
#include "mindustry/content/Blocks_286.h"
#include "mindustry/content/Blocks_169.h"
#include "mindustry/content/Blocks_270.h"
#include "mindustry/content/Blocks_153.h"
#include "mindustry/content/Blocks_274.h"
#include "mindustry/content/Blocks_99.h"
#include "mindustry/content/Blocks_152.h"
#include "mindustry/content/Blocks_273.h"
#include "mindustry/content/Blocks_151.h"
#include "mindustry/content/Blocks_272.h"
#include "mindustry/content/Blocks_150.h"
#include "mindustry/content/Blocks_271.h"
#include "mindustry/content/Blocks_96.h"
#include "mindustry/content/Blocks_157.h"
#include "mindustry/content/Blocks_278.h"
#include "mindustry/content/Blocks_95.h"
#include "mindustry/content/Blocks_156.h"
#include "mindustry/content/Blocks_277.h"
#include "mindustry/content/Blocks_98.h"
#include "mindustry/content/Blocks_155.h"
#include "mindustry/content/Blocks_276.h"
#include "mindustry/content/Blocks_97.h"
#include "mindustry/content/Blocks_154.h"
#include "mindustry/content/Blocks_275.h"
#include "mindustry/content/Blocks_159.h"
#include "mindustry/content/Blocks_158.h"
#include "mindustry/content/Blocks_279.h"
#include "mindustry/content/Blocks_380.h"
#include "mindustry/content/Blocks_142.h"
#include "mindustry/content/Blocks_263.h"
#include "mindustry/content/Blocks_384.h"
#include "mindustry/content/Blocks_141.h"
#include "mindustry/content/Blocks_262.h"
#include "mindustry/content/Blocks_383.h"
#include "mindustry/content/Blocks_140.h"
#include "mindustry/content/Blocks_261.h"
#include "mindustry/content/Blocks_382.h"
#include "mindustry/content/Blocks_260.h"
#include "mindustry/content/Blocks_381.h"
#include "mindustry/content/Blocks_146.h"
#include "mindustry/content/Blocks_267.h"
#include "mindustry/content/Blocks_388.h"
#include "mindustry/content/Blocks_145.h"
#include "mindustry/content/Blocks_266.h"
#include "mindustry/content/Blocks_387.h"
#include "mindustry/content/Blocks_144.h"
#include "mindustry/content/Blocks_265.h"
#include "mindustry/content/Blocks_386.h"
#include "mindustry/content/Blocks_143.h"
#include "mindustry/content/Blocks_264.h"
#include "mindustry/content/Blocks_385.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/content/Blocks_149.h"
#include "mindustry/content/Blocks_148.h"
#include "mindustry/content/Blocks_269.h"
#include "mindustry/content/Blocks_147.h"
#include "mindustry/content/Blocks_268.h"
#include "mindustry/content/Blocks_389.h"

extern "C" {

jobject SF_mindustry_content_Blocks_air;
jobject SF_mindustry_content_Blocks_spawn;
jobject SF_mindustry_content_Blocks_removeWall;
jobject SF_mindustry_content_Blocks_removeOre;
jobject SF_mindustry_content_Blocks_cliff;
jobject SF_mindustry_content_Blocks_deepwater;
jobject SF_mindustry_content_Blocks_water;
jobject SF_mindustry_content_Blocks_taintedWater;
jobject SF_mindustry_content_Blocks_deepTaintedWater;
jobject SF_mindustry_content_Blocks_tar;
jobject SF_mindustry_content_Blocks_slag;
jobject SF_mindustry_content_Blocks_cryofluid;
jobject SF_mindustry_content_Blocks_stone;
jobject SF_mindustry_content_Blocks_craters;
jobject SF_mindustry_content_Blocks_charr;
jobject SF_mindustry_content_Blocks_sand;
jobject SF_mindustry_content_Blocks_darksand;
jobject SF_mindustry_content_Blocks_dirt;
jobject SF_mindustry_content_Blocks_mud;
jobject SF_mindustry_content_Blocks_ice;
jobject SF_mindustry_content_Blocks_snow;
jobject SF_mindustry_content_Blocks_darksandTaintedWater;
jobject SF_mindustry_content_Blocks_space;
jobject SF_mindustry_content_Blocks_empty;
jobject SF_mindustry_content_Blocks_dacite;
jobject SF_mindustry_content_Blocks_rhyolite;
jobject SF_mindustry_content_Blocks_rhyoliteCrater;
jobject SF_mindustry_content_Blocks_roughRhyolite;
jobject SF_mindustry_content_Blocks_regolith;
jobject SF_mindustry_content_Blocks_yellowStone;
jobject SF_mindustry_content_Blocks_redIce;
jobject SF_mindustry_content_Blocks_redStone;
jobject SF_mindustry_content_Blocks_denseRedStone;
jobject SF_mindustry_content_Blocks_arkyciteFloor;
jobject SF_mindustry_content_Blocks_arkyicStone;
jobject SF_mindustry_content_Blocks_redmat;
jobject SF_mindustry_content_Blocks_bluemat;
jobject SF_mindustry_content_Blocks_stoneWall;
jobject SF_mindustry_content_Blocks_dirtWall;
jobject SF_mindustry_content_Blocks_sporeWall;
jobject SF_mindustry_content_Blocks_iceWall;
jobject SF_mindustry_content_Blocks_daciteWall;
jobject SF_mindustry_content_Blocks_sporePine;
jobject SF_mindustry_content_Blocks_snowPine;
jobject SF_mindustry_content_Blocks_pine;
jobject SF_mindustry_content_Blocks_shrubs;
jobject SF_mindustry_content_Blocks_whiteTree;
jobject SF_mindustry_content_Blocks_whiteTreeDead;
jobject SF_mindustry_content_Blocks_sporeCluster;
jobject SF_mindustry_content_Blocks_redweed;
jobject SF_mindustry_content_Blocks_purbush;
jobject SF_mindustry_content_Blocks_yellowCoral;
jobject SF_mindustry_content_Blocks_rhyoliteVent;
jobject SF_mindustry_content_Blocks_carbonVent;
jobject SF_mindustry_content_Blocks_arkyicVent;
jobject SF_mindustry_content_Blocks_yellowStoneVent;
jobject SF_mindustry_content_Blocks_redStoneVent;
jobject SF_mindustry_content_Blocks_crystallineVent;
jobject SF_mindustry_content_Blocks_stoneVent;
jobject SF_mindustry_content_Blocks_basaltVent;
jobject SF_mindustry_content_Blocks_regolithWall;
jobject SF_mindustry_content_Blocks_yellowStoneWall;
jobject SF_mindustry_content_Blocks_rhyoliteWall;
jobject SF_mindustry_content_Blocks_carbonWall;
jobject SF_mindustry_content_Blocks_redIceWall;
jobject SF_mindustry_content_Blocks_ferricStoneWall;
jobject SF_mindustry_content_Blocks_beryllicStoneWall;
jobject SF_mindustry_content_Blocks_arkyicWall;
jobject SF_mindustry_content_Blocks_crystallineStoneWall;
jobject SF_mindustry_content_Blocks_redStoneWall;
jobject SF_mindustry_content_Blocks_redDiamondWall;
jobject SF_mindustry_content_Blocks_ferricStone;
jobject SF_mindustry_content_Blocks_ferricCraters;
jobject SF_mindustry_content_Blocks_carbonStone;
jobject SF_mindustry_content_Blocks_beryllicStone;
jobject SF_mindustry_content_Blocks_crystallineStone;
jobject SF_mindustry_content_Blocks_crystalFloor;
jobject SF_mindustry_content_Blocks_yellowStonePlates;
jobject SF_mindustry_content_Blocks_iceSnow;
jobject SF_mindustry_content_Blocks_sandWater;
jobject SF_mindustry_content_Blocks_darksandWater;
jobject SF_mindustry_content_Blocks_duneWall;
jobject SF_mindustry_content_Blocks_sandWall;
jobject SF_mindustry_content_Blocks_moss;
jobject SF_mindustry_content_Blocks_sporeMoss;
jobject SF_mindustry_content_Blocks_shale;
jobject SF_mindustry_content_Blocks_shaleWall;
jobject SF_mindustry_content_Blocks_grass;
jobject SF_mindustry_content_Blocks_salt;
jobject SF_mindustry_content_Blocks_coreZone;
jobject SF_mindustry_content_Blocks_shaleBoulder;
jobject SF_mindustry_content_Blocks_sandBoulder;
jobject SF_mindustry_content_Blocks_daciteBoulder;
jobject SF_mindustry_content_Blocks_boulder;
jobject SF_mindustry_content_Blocks_snowBoulder;
jobject SF_mindustry_content_Blocks_basaltBoulder;
jobject SF_mindustry_content_Blocks_carbonBoulder;
jobject SF_mindustry_content_Blocks_ferricBoulder;
jobject SF_mindustry_content_Blocks_beryllicBoulder;
jobject SF_mindustry_content_Blocks_yellowStoneBoulder;
jobject SF_mindustry_content_Blocks_arkyicBoulder;
jobject SF_mindustry_content_Blocks_crystalCluster;
jobject SF_mindustry_content_Blocks_vibrantCrystalCluster;
jobject SF_mindustry_content_Blocks_crystalBlocks;
jobject SF_mindustry_content_Blocks_crystalOrbs;
jobject SF_mindustry_content_Blocks_crystallineBoulder;
jobject SF_mindustry_content_Blocks_redIceBoulder;
jobject SF_mindustry_content_Blocks_rhyoliteBoulder;
jobject SF_mindustry_content_Blocks_redStoneBoulder;
jobject SF_mindustry_content_Blocks_metalFloor;
jobject SF_mindustry_content_Blocks_metalFloorDamaged;
jobject SF_mindustry_content_Blocks_metalFloor2;
jobject SF_mindustry_content_Blocks_metalFloor3;
jobject SF_mindustry_content_Blocks_metalFloor4;
jobject SF_mindustry_content_Blocks_metalFloor5;
jobject SF_mindustry_content_Blocks_basalt;
jobject SF_mindustry_content_Blocks_magmarock;
jobject SF_mindustry_content_Blocks_hotrock;
jobject SF_mindustry_content_Blocks_snowWall;
jobject SF_mindustry_content_Blocks_saltWall;
jobject SF_mindustry_content_Blocks_darkPanel1;
jobject SF_mindustry_content_Blocks_darkPanel2;
jobject SF_mindustry_content_Blocks_darkPanel3;
jobject SF_mindustry_content_Blocks_darkPanel4;
jobject SF_mindustry_content_Blocks_darkPanel5;
jobject SF_mindustry_content_Blocks_darkPanel6;
jobject SF_mindustry_content_Blocks_darkMetal;
jobject SF_mindustry_content_Blocks_metalTiles1;
jobject SF_mindustry_content_Blocks_metalTiles2;
jobject SF_mindustry_content_Blocks_metalTiles3;
jobject SF_mindustry_content_Blocks_metalTiles4;
jobject SF_mindustry_content_Blocks_metalTiles5;
jobject SF_mindustry_content_Blocks_metalTiles6;
jobject SF_mindustry_content_Blocks_metalTiles7;
jobject SF_mindustry_content_Blocks_metalTiles8;
jobject SF_mindustry_content_Blocks_metalTiles9;
jobject SF_mindustry_content_Blocks_metalTiles10;
jobject SF_mindustry_content_Blocks_metalTiles11;
jobject SF_mindustry_content_Blocks_metalTiles12;
jobject SF_mindustry_content_Blocks_metalTiles13;
jobject SF_mindustry_content_Blocks_metalWall1;
jobject SF_mindustry_content_Blocks_metalWall2;
jobject SF_mindustry_content_Blocks_metalWall3;
jobject SF_mindustry_content_Blocks_coloredFloor;
jobject SF_mindustry_content_Blocks_coloredWall;
jobject SF_mindustry_content_Blocks_characterOverlayGray;
jobject SF_mindustry_content_Blocks_characterOverlayWhite;
jobject SF_mindustry_content_Blocks_runeOverlay;
jobject SF_mindustry_content_Blocks_cruxRuneOverlay;
jobject SF_mindustry_content_Blocks_pebbles;
jobject SF_mindustry_content_Blocks_tendrils;
jobject SF_mindustry_content_Blocks_oreCopper;
jobject SF_mindustry_content_Blocks_oreLead;
jobject SF_mindustry_content_Blocks_oreScrap;
jobject SF_mindustry_content_Blocks_oreCoal;
jobject SF_mindustry_content_Blocks_oreTitanium;
jobject SF_mindustry_content_Blocks_oreThorium;
jobject SF_mindustry_content_Blocks_oreBeryllium;
jobject SF_mindustry_content_Blocks_oreTungsten;
jobject SF_mindustry_content_Blocks_oreCrystalThorium;
jobject SF_mindustry_content_Blocks_wallOreThorium;
jobject SF_mindustry_content_Blocks_wallOreBeryllium;
jobject SF_mindustry_content_Blocks_graphiticWall;
jobject SF_mindustry_content_Blocks_wallOreGraphite;
jobject SF_mindustry_content_Blocks_wallOreTungsten;
jobject SF_mindustry_content_Blocks_siliconSmelter;
jobject SF_mindustry_content_Blocks_siliconCrucible;
jobject SF_mindustry_content_Blocks_kiln;
jobject SF_mindustry_content_Blocks_graphitePress;
jobject SF_mindustry_content_Blocks_plastaniumCompressor;
jobject SF_mindustry_content_Blocks_multiPress;
jobject SF_mindustry_content_Blocks_phaseWeaver;
jobject SF_mindustry_content_Blocks_surgeSmelter;
jobject SF_mindustry_content_Blocks_pyratiteMixer;
jobject SF_mindustry_content_Blocks_blastMixer;
jobject SF_mindustry_content_Blocks_cryofluidMixer;
jobject SF_mindustry_content_Blocks_melter;
jobject SF_mindustry_content_Blocks_separator;
jobject SF_mindustry_content_Blocks_disassembler;
jobject SF_mindustry_content_Blocks_sporePress;
jobject SF_mindustry_content_Blocks_pulverizer;
jobject SF_mindustry_content_Blocks_incinerator;
jobject SF_mindustry_content_Blocks_coalCentrifuge;
jobject SF_mindustry_content_Blocks_siliconArcFurnace;
jobject SF_mindustry_content_Blocks_electrolyzer;
jobject SF_mindustry_content_Blocks_oxidationChamber;
jobject SF_mindustry_content_Blocks_atmosphericConcentrator;
jobject SF_mindustry_content_Blocks_electricHeater;
jobject SF_mindustry_content_Blocks_slagHeater;
jobject SF_mindustry_content_Blocks_phaseHeater;
jobject SF_mindustry_content_Blocks_heatRedirector;
jobject SF_mindustry_content_Blocks_smallHeatRedirector;
jobject SF_mindustry_content_Blocks_heatRouter;
jobject SF_mindustry_content_Blocks_slagIncinerator;
jobject SF_mindustry_content_Blocks_carbideCrucible;
jobject SF_mindustry_content_Blocks_slagCentrifuge;
jobject SF_mindustry_content_Blocks_surgeCrucible;
jobject SF_mindustry_content_Blocks_cyanogenSynthesizer;
jobject SF_mindustry_content_Blocks_phaseSynthesizer;
jobject SF_mindustry_content_Blocks_heatReactor;
jobject SF_mindustry_content_Blocks_powerSource;
jobject SF_mindustry_content_Blocks_powerVoid;
jobject SF_mindustry_content_Blocks_itemSource;
jobject SF_mindustry_content_Blocks_itemVoid;
jobject SF_mindustry_content_Blocks_liquidSource;
jobject SF_mindustry_content_Blocks_liquidVoid;
jobject SF_mindustry_content_Blocks_payloadSource;
jobject SF_mindustry_content_Blocks_payloadVoid;
jobject SF_mindustry_content_Blocks_illuminator;
jobject SF_mindustry_content_Blocks_heatSource;
jobject SF_mindustry_content_Blocks_copperWall;
jobject SF_mindustry_content_Blocks_copperWallLarge;
jobject SF_mindustry_content_Blocks_titaniumWall;
jobject SF_mindustry_content_Blocks_titaniumWallLarge;
jobject SF_mindustry_content_Blocks_plastaniumWall;
jobject SF_mindustry_content_Blocks_plastaniumWallLarge;
jobject SF_mindustry_content_Blocks_thoriumWall;
jobject SF_mindustry_content_Blocks_thoriumWallLarge;
jobject SF_mindustry_content_Blocks_door;
jobject SF_mindustry_content_Blocks_doorLarge;
jobject SF_mindustry_content_Blocks_phaseWall;
jobject SF_mindustry_content_Blocks_phaseWallLarge;
jobject SF_mindustry_content_Blocks_surgeWall;
jobject SF_mindustry_content_Blocks_surgeWallLarge;
jobject SF_mindustry_content_Blocks_scrapWall;
jobject SF_mindustry_content_Blocks_scrapWallLarge;
jobject SF_mindustry_content_Blocks_scrapWallHuge;
jobject SF_mindustry_content_Blocks_scrapWallGigantic;
jobject SF_mindustry_content_Blocks_thruster;
jobject SF_mindustry_content_Blocks_berylliumWall;
jobject SF_mindustry_content_Blocks_berylliumWallLarge;
jobject SF_mindustry_content_Blocks_tungstenWall;
jobject SF_mindustry_content_Blocks_tungstenWallLarge;
jobject SF_mindustry_content_Blocks_blastDoor;
jobject SF_mindustry_content_Blocks_reinforcedSurgeWall;
jobject SF_mindustry_content_Blocks_reinforcedSurgeWallLarge;
jobject SF_mindustry_content_Blocks_carbideWall;
jobject SF_mindustry_content_Blocks_carbideWallLarge;
jobject SF_mindustry_content_Blocks_shieldedWall;
jobject SF_mindustry_content_Blocks_mender;
jobject SF_mindustry_content_Blocks_mendProjector;
jobject SF_mindustry_content_Blocks_overdriveProjector;
jobject SF_mindustry_content_Blocks_overdriveDome;
jobject SF_mindustry_content_Blocks_forceProjector;
jobject SF_mindustry_content_Blocks_shockMine;
jobject SF_mindustry_content_Blocks_targetDummy;
jobject SF_mindustry_content_Blocks_radar;
jobject SF_mindustry_content_Blocks_buildTower;
jobject SF_mindustry_content_Blocks_regenProjector;
jobject SF_mindustry_content_Blocks_shockwaveTower;
jobject SF_mindustry_content_Blocks_shieldProjector;
jobject SF_mindustry_content_Blocks_largeShieldProjector;
jobject SF_mindustry_content_Blocks_shieldBreaker;
jobject SF_mindustry_content_Blocks_conveyor;
jobject SF_mindustry_content_Blocks_titaniumConveyor;
jobject SF_mindustry_content_Blocks_plastaniumConveyor;
jobject SF_mindustry_content_Blocks_armoredConveyor;
jobject SF_mindustry_content_Blocks_distributor;
jobject SF_mindustry_content_Blocks_junction;
jobject SF_mindustry_content_Blocks_itemBridge;
jobject SF_mindustry_content_Blocks_phaseConveyor;
jobject SF_mindustry_content_Blocks_sorter;
jobject SF_mindustry_content_Blocks_invertedSorter;
jobject SF_mindustry_content_Blocks_router;
jobject SF_mindustry_content_Blocks_overflowGate;
jobject SF_mindustry_content_Blocks_underflowGate;
jobject SF_mindustry_content_Blocks_unloader;
jobject SF_mindustry_content_Blocks_massDriver;
jobject SF_mindustry_content_Blocks_duct;
jobject SF_mindustry_content_Blocks_armoredDuct;
jobject SF_mindustry_content_Blocks_ductRouter;
jobject SF_mindustry_content_Blocks_overflowDuct;
jobject SF_mindustry_content_Blocks_underflowDuct;
jobject SF_mindustry_content_Blocks_ductBridge;
jobject SF_mindustry_content_Blocks_ductUnloader;
jobject SF_mindustry_content_Blocks_surgeConveyor;
jobject SF_mindustry_content_Blocks_surgeRouter;
jobject SF_mindustry_content_Blocks_unitCargoLoader;
jobject SF_mindustry_content_Blocks_unitCargoUnloadPoint;
jobject SF_mindustry_content_Blocks_mechanicalPump;
jobject SF_mindustry_content_Blocks_rotaryPump;
jobject SF_mindustry_content_Blocks_impulsePump;
jobject SF_mindustry_content_Blocks_conduit;
jobject SF_mindustry_content_Blocks_pulseConduit;
jobject SF_mindustry_content_Blocks_platedConduit;
jobject SF_mindustry_content_Blocks_liquidRouter;
jobject SF_mindustry_content_Blocks_liquidContainer;
jobject SF_mindustry_content_Blocks_liquidTank;
jobject SF_mindustry_content_Blocks_liquidJunction;
jobject SF_mindustry_content_Blocks_bridgeConduit;
jobject SF_mindustry_content_Blocks_phaseConduit;
jobject SF_mindustry_content_Blocks_reinforcedPump;
jobject SF_mindustry_content_Blocks_reinforcedConduit;
jobject SF_mindustry_content_Blocks_reinforcedLiquidJunction;
jobject SF_mindustry_content_Blocks_reinforcedBridgeConduit;
jobject SF_mindustry_content_Blocks_reinforcedLiquidRouter;
jobject SF_mindustry_content_Blocks_reinforcedLiquidContainer;
jobject SF_mindustry_content_Blocks_reinforcedLiquidTank;
jobject SF_mindustry_content_Blocks_combustionGenerator;
jobject SF_mindustry_content_Blocks_thermalGenerator;
jobject SF_mindustry_content_Blocks_steamGenerator;
jobject SF_mindustry_content_Blocks_differentialGenerator;
jobject SF_mindustry_content_Blocks_rtgGenerator;
jobject SF_mindustry_content_Blocks_solarPanel;
jobject SF_mindustry_content_Blocks_largeSolarPanel;
jobject SF_mindustry_content_Blocks_thoriumReactor;
jobject SF_mindustry_content_Blocks_impactReactor;
jobject SF_mindustry_content_Blocks_battery;
jobject SF_mindustry_content_Blocks_batteryLarge;
jobject SF_mindustry_content_Blocks_powerNode;
jobject SF_mindustry_content_Blocks_powerNodeLarge;
jobject SF_mindustry_content_Blocks_surgeTower;
jobject SF_mindustry_content_Blocks_diode;
jobject SF_mindustry_content_Blocks_turbineCondenser;
jobject SF_mindustry_content_Blocks_ventCondenser;
jobject SF_mindustry_content_Blocks_chemicalCombustionChamber;
jobject SF_mindustry_content_Blocks_pyrolysisGenerator;
jobject SF_mindustry_content_Blocks_fluxReactor;
jobject SF_mindustry_content_Blocks_neoplasiaReactor;
jobject SF_mindustry_content_Blocks_beamNode;
jobject SF_mindustry_content_Blocks_beamTower;
jobject SF_mindustry_content_Blocks_beamLink;
jobject SF_mindustry_content_Blocks_mechanicalDrill;
jobject SF_mindustry_content_Blocks_pneumaticDrill;
jobject SF_mindustry_content_Blocks_laserDrill;
jobject SF_mindustry_content_Blocks_blastDrill;
jobject SF_mindustry_content_Blocks_waterExtractor;
jobject SF_mindustry_content_Blocks_oilExtractor;
jobject SF_mindustry_content_Blocks_cultivator;
jobject SF_mindustry_content_Blocks_cliffCrusher;
jobject SF_mindustry_content_Blocks_largeCliffCrusher;
jobject SF_mindustry_content_Blocks_plasmaBore;
jobject SF_mindustry_content_Blocks_largePlasmaBore;
jobject SF_mindustry_content_Blocks_impactDrill;
jobject SF_mindustry_content_Blocks_eruptionDrill;
jobject SF_mindustry_content_Blocks_coreShard;
jobject SF_mindustry_content_Blocks_coreFoundation;
jobject SF_mindustry_content_Blocks_coreNucleus;
jobject SF_mindustry_content_Blocks_vault;
jobject SF_mindustry_content_Blocks_container;
jobject SF_mindustry_content_Blocks_coreBastion;
jobject SF_mindustry_content_Blocks_coreCitadel;
jobject SF_mindustry_content_Blocks_coreAcropolis;
jobject SF_mindustry_content_Blocks_reinforcedContainer;
jobject SF_mindustry_content_Blocks_reinforcedVault;
jobject SF_mindustry_content_Blocks_duo;
jobject SF_mindustry_content_Blocks_scatter;
jobject SF_mindustry_content_Blocks_scorch;
jobject SF_mindustry_content_Blocks_hail;
jobject SF_mindustry_content_Blocks_arc;
jobject SF_mindustry_content_Blocks_wave;
jobject SF_mindustry_content_Blocks_lancer;
jobject SF_mindustry_content_Blocks_swarmer;
jobject SF_mindustry_content_Blocks_salvo;
jobject SF_mindustry_content_Blocks_fuse;
jobject SF_mindustry_content_Blocks_ripple;
jobject SF_mindustry_content_Blocks_cyclone;
jobject SF_mindustry_content_Blocks_foreshadow;
jobject SF_mindustry_content_Blocks_spectre;
jobject SF_mindustry_content_Blocks_meltdown;
jobject SF_mindustry_content_Blocks_segment;
jobject SF_mindustry_content_Blocks_parallax;
jobject SF_mindustry_content_Blocks_tsunami;
jobject SF_mindustry_content_Blocks_breach;
jobject SF_mindustry_content_Blocks_diffuse;
jobject SF_mindustry_content_Blocks_sublimate;
jobject SF_mindustry_content_Blocks_titan;
jobject SF_mindustry_content_Blocks_disperse;
jobject SF_mindustry_content_Blocks_afflict;
jobject SF_mindustry_content_Blocks_lustre;
jobject SF_mindustry_content_Blocks_scathe;
jobject SF_mindustry_content_Blocks_smite;
jobject SF_mindustry_content_Blocks_malign;
jobject SF_mindustry_content_Blocks_groundFactory;
jobject SF_mindustry_content_Blocks_airFactory;
jobject SF_mindustry_content_Blocks_navalFactory;
jobject SF_mindustry_content_Blocks_additiveReconstructor;
jobject SF_mindustry_content_Blocks_multiplicativeReconstructor;
jobject SF_mindustry_content_Blocks_exponentialReconstructor;
jobject SF_mindustry_content_Blocks_tetrativeReconstructor;
jobject SF_mindustry_content_Blocks_repairPoint;
jobject SF_mindustry_content_Blocks_repairTurret;
jobject SF_mindustry_content_Blocks_tankFabricator;
jobject SF_mindustry_content_Blocks_shipFabricator;
jobject SF_mindustry_content_Blocks_mechFabricator;
jobject SF_mindustry_content_Blocks_tankRefabricator;
jobject SF_mindustry_content_Blocks_shipRefabricator;
jobject SF_mindustry_content_Blocks_mechRefabricator;
jobject SF_mindustry_content_Blocks_primeRefabricator;
jobject SF_mindustry_content_Blocks_tankAssembler;
jobject SF_mindustry_content_Blocks_shipAssembler;
jobject SF_mindustry_content_Blocks_mechAssembler;
jobject SF_mindustry_content_Blocks_basicAssemblerModule;
jobject SF_mindustry_content_Blocks_unitRepairTower;
jobject SF_mindustry_content_Blocks_payloadConveyor;
jobject SF_mindustry_content_Blocks_payloadRouter;
jobject SF_mindustry_content_Blocks_reinforcedPayloadConveyor;
jobject SF_mindustry_content_Blocks_reinforcedPayloadRouter;
jobject SF_mindustry_content_Blocks_payloadMassDriver;
jobject SF_mindustry_content_Blocks_largePayloadMassDriver;
jobject SF_mindustry_content_Blocks_smallDeconstructor;
jobject SF_mindustry_content_Blocks_deconstructor;
jobject SF_mindustry_content_Blocks_constructor;
jobject SF_mindustry_content_Blocks_largeConstructor;
jobject SF_mindustry_content_Blocks_payloadLoader;
jobject SF_mindustry_content_Blocks_payloadUnloader;
jobject SF_mindustry_content_Blocks_message;
jobject SF_mindustry_content_Blocks_switchBlock;
jobject SF_mindustry_content_Blocks_microProcessor;
jobject SF_mindustry_content_Blocks_logicProcessor;
jobject SF_mindustry_content_Blocks_hyperProcessor;
jobject SF_mindustry_content_Blocks_largeLogicDisplay;
jobject SF_mindustry_content_Blocks_logicDisplay;
jobject SF_mindustry_content_Blocks_tileLogicDisplay;
jobject SF_mindustry_content_Blocks_memoryCell;
jobject SF_mindustry_content_Blocks_memoryBank;
jobject SF_mindustry_content_Blocks_canvas;
jobject SF_mindustry_content_Blocks_largeCanvas;
jobject SF_mindustry_content_Blocks_reinforcedMessage;
jobject SF_mindustry_content_Blocks_worldProcessor;
jobject SF_mindustry_content_Blocks_worldCell;
jobject SF_mindustry_content_Blocks_worldMessage;
jobject SF_mindustry_content_Blocks_worldSwitch;
jobject SF_mindustry_content_Blocks_launchPad;
jobject SF_mindustry_content_Blocks_advancedLaunchPad;
jobject SF_mindustry_content_Blocks_landingPad;
jobject SF_mindustry_content_Blocks_interplanetaryAccelerator;

void mark_mindustry_content_Blocks(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Blocks_air)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_air)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_air, mark, depth + 1);
		if (SF_mindustry_content_Blocks_spawn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_spawn)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_spawn, mark, depth + 1);
		if (SF_mindustry_content_Blocks_removeWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_removeWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_removeWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_removeOre)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_removeOre)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_removeOre, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cliff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cliff)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cliff, mark, depth + 1);
		if (SF_mindustry_content_Blocks_deepwater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_deepwater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_deepwater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_water)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_water)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_water, mark, depth + 1);
		if (SF_mindustry_content_Blocks_taintedWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_taintedWater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_taintedWater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_deepTaintedWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_deepTaintedWater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_deepTaintedWater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tar)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tar, mark, depth + 1);
		if (SF_mindustry_content_Blocks_slag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_slag)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_slag, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cryofluid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cryofluid)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cryofluid, mark, depth + 1);
		if (SF_mindustry_content_Blocks_stone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_stone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_stone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_craters)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_craters)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_craters, mark, depth + 1);
		if (SF_mindustry_content_Blocks_charr)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_charr)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_charr, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sand)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sand, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darksand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darksand)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darksand, mark, depth + 1);
		if (SF_mindustry_content_Blocks_dirt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_dirt)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_dirt, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mud)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mud, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ice)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ice)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ice, mark, depth + 1);
		if (SF_mindustry_content_Blocks_snow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_snow)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_snow, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darksandTaintedWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darksandTaintedWater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darksandTaintedWater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_space)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_space)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_space, mark, depth + 1);
		if (SF_mindustry_content_Blocks_empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_empty)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_empty, mark, depth + 1);
		if (SF_mindustry_content_Blocks_dacite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_dacite)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_dacite, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rhyolite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rhyolite)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rhyolite, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rhyoliteCrater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rhyoliteCrater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rhyoliteCrater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_roughRhyolite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_roughRhyolite)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_roughRhyolite, mark, depth + 1);
		if (SF_mindustry_content_Blocks_regolith)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_regolith)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_regolith, mark, depth + 1);
		if (SF_mindustry_content_Blocks_yellowStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_yellowStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_yellowStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redIce)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redIce)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redIce, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_denseRedStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_denseRedStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_denseRedStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_arkyciteFloor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_arkyciteFloor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_arkyciteFloor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_arkyicStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_arkyicStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_arkyicStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redmat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redmat)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redmat, mark, depth + 1);
		if (SF_mindustry_content_Blocks_bluemat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_bluemat)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_bluemat, mark, depth + 1);
		if (SF_mindustry_content_Blocks_stoneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_stoneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_stoneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_dirtWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_dirtWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_dirtWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sporeWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sporeWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sporeWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_iceWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_iceWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_iceWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_daciteWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_daciteWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_daciteWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sporePine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sporePine)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sporePine, mark, depth + 1);
		if (SF_mindustry_content_Blocks_snowPine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_snowPine)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_snowPine, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pine)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pine, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shrubs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shrubs)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shrubs, mark, depth + 1);
		if (SF_mindustry_content_Blocks_whiteTree)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_whiteTree)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_whiteTree, mark, depth + 1);
		if (SF_mindustry_content_Blocks_whiteTreeDead)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_whiteTreeDead)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_whiteTreeDead, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sporeCluster)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sporeCluster)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sporeCluster, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redweed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redweed)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redweed, mark, depth + 1);
		if (SF_mindustry_content_Blocks_purbush)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_purbush)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_purbush, mark, depth + 1);
		if (SF_mindustry_content_Blocks_yellowCoral)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_yellowCoral)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_yellowCoral, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rhyoliteVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rhyoliteVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rhyoliteVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbonVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbonVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbonVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_arkyicVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_arkyicVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_arkyicVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_yellowStoneVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_yellowStoneVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_yellowStoneVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redStoneVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redStoneVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redStoneVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystallineVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystallineVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystallineVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_stoneVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_stoneVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_stoneVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_basaltVent)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_basaltVent)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_basaltVent, mark, depth + 1);
		if (SF_mindustry_content_Blocks_regolithWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_regolithWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_regolithWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_yellowStoneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_yellowStoneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_yellowStoneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rhyoliteWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rhyoliteWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rhyoliteWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbonWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbonWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbonWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redIceWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redIceWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redIceWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ferricStoneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ferricStoneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ferricStoneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_beryllicStoneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_beryllicStoneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_beryllicStoneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_arkyicWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_arkyicWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_arkyicWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystallineStoneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystallineStoneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystallineStoneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redStoneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redStoneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redStoneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redDiamondWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redDiamondWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redDiamondWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ferricStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ferricStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ferricStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ferricCraters)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ferricCraters)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ferricCraters, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbonStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbonStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbonStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_beryllicStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_beryllicStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_beryllicStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystallineStone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystallineStone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystallineStone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystalFloor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystalFloor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystalFloor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_yellowStonePlates)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_yellowStonePlates)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_yellowStonePlates, mark, depth + 1);
		if (SF_mindustry_content_Blocks_iceSnow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_iceSnow)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_iceSnow, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sandWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sandWater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sandWater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darksandWater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darksandWater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darksandWater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_duneWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_duneWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_duneWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sandWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sandWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sandWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_moss)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_moss)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_moss, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sporeMoss)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sporeMoss)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sporeMoss, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shale)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shale)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shale, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shaleWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shaleWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shaleWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_grass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_grass)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_grass, mark, depth + 1);
		if (SF_mindustry_content_Blocks_salt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_salt)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_salt, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreZone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreZone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreZone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shaleBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shaleBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shaleBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sandBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sandBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sandBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_daciteBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_daciteBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_daciteBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_boulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_boulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_boulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_snowBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_snowBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_snowBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_basaltBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_basaltBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_basaltBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbonBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbonBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbonBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ferricBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ferricBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ferricBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_beryllicBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_beryllicBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_beryllicBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_yellowStoneBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_yellowStoneBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_yellowStoneBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_arkyicBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_arkyicBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_arkyicBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystalCluster)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystalCluster)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystalCluster, mark, depth + 1);
		if (SF_mindustry_content_Blocks_vibrantCrystalCluster)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_vibrantCrystalCluster)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_vibrantCrystalCluster, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystalBlocks)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystalBlocks)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystalBlocks, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystalOrbs)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystalOrbs)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystalOrbs, mark, depth + 1);
		if (SF_mindustry_content_Blocks_crystallineBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_crystallineBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_crystallineBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redIceBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redIceBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redIceBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rhyoliteBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rhyoliteBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rhyoliteBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_redStoneBoulder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_redStoneBoulder)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_redStoneBoulder, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalFloor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalFloor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalFloor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalFloorDamaged)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalFloorDamaged)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalFloorDamaged, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalFloor2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalFloor2)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalFloor2, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalFloor3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalFloor3)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalFloor3, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalFloor4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalFloor4)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalFloor4, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalFloor5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalFloor5)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalFloor5, mark, depth + 1);
		if (SF_mindustry_content_Blocks_basalt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_basalt)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_basalt, mark, depth + 1);
		if (SF_mindustry_content_Blocks_magmarock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_magmarock)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_magmarock, mark, depth + 1);
		if (SF_mindustry_content_Blocks_hotrock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_hotrock)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_hotrock, mark, depth + 1);
		if (SF_mindustry_content_Blocks_snowWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_snowWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_snowWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_saltWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_saltWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_saltWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkPanel1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkPanel1)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkPanel1, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkPanel2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkPanel2)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkPanel2, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkPanel3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkPanel3)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkPanel3, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkPanel4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkPanel4)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkPanel4, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkPanel5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkPanel5)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkPanel5, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkPanel6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkPanel6)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkPanel6, mark, depth + 1);
		if (SF_mindustry_content_Blocks_darkMetal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_darkMetal)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_darkMetal, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles1)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles1, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles2)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles2, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles3)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles3, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles4)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles4, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles5)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles5, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles6)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles6, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles7)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles7)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles7, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles8)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles8, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles9)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles9)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles9, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles10)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles10)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles10, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles11)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles11)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles11, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles12)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles12)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles12, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalTiles13)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalTiles13)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalTiles13, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalWall1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalWall1)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalWall1, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalWall2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalWall2)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalWall2, mark, depth + 1);
		if (SF_mindustry_content_Blocks_metalWall3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_metalWall3)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_metalWall3, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coloredFloor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coloredFloor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coloredFloor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coloredWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coloredWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coloredWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_characterOverlayGray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_characterOverlayGray)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_characterOverlayGray, mark, depth + 1);
		if (SF_mindustry_content_Blocks_characterOverlayWhite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_characterOverlayWhite)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_characterOverlayWhite, mark, depth + 1);
		if (SF_mindustry_content_Blocks_runeOverlay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_runeOverlay)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_runeOverlay, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cruxRuneOverlay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cruxRuneOverlay)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cruxRuneOverlay, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pebbles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pebbles)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pebbles, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tendrils)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tendrils)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tendrils, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreCopper)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreCopper)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreCopper, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreLead)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreLead)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreLead, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreScrap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreScrap)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreScrap, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreCoal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreCoal)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreCoal, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreTitanium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreTitanium)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreTitanium, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreThorium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreThorium)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreThorium, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreBeryllium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreBeryllium)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreBeryllium, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreTungsten)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreTungsten)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreTungsten, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oreCrystalThorium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oreCrystalThorium)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oreCrystalThorium, mark, depth + 1);
		if (SF_mindustry_content_Blocks_wallOreThorium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_wallOreThorium)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_wallOreThorium, mark, depth + 1);
		if (SF_mindustry_content_Blocks_wallOreBeryllium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_wallOreBeryllium)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_wallOreBeryllium, mark, depth + 1);
		if (SF_mindustry_content_Blocks_graphiticWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_graphiticWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_graphiticWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_wallOreGraphite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_wallOreGraphite)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_wallOreGraphite, mark, depth + 1);
		if (SF_mindustry_content_Blocks_wallOreTungsten)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_wallOreTungsten)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_wallOreTungsten, mark, depth + 1);
		if (SF_mindustry_content_Blocks_siliconSmelter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_siliconSmelter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_siliconSmelter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_siliconCrucible)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_siliconCrucible)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_siliconCrucible, mark, depth + 1);
		if (SF_mindustry_content_Blocks_kiln)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_kiln)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_kiln, mark, depth + 1);
		if (SF_mindustry_content_Blocks_graphitePress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_graphitePress)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_graphitePress, mark, depth + 1);
		if (SF_mindustry_content_Blocks_plastaniumCompressor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_plastaniumCompressor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_plastaniumCompressor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_multiPress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_multiPress)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_multiPress, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseWeaver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseWeaver)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseWeaver, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeSmelter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeSmelter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeSmelter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pyratiteMixer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pyratiteMixer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pyratiteMixer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_blastMixer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_blastMixer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_blastMixer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cryofluidMixer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cryofluidMixer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cryofluidMixer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_melter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_melter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_melter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_separator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_separator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_separator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_disassembler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_disassembler)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_disassembler, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sporePress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sporePress)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sporePress, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pulverizer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pulverizer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pulverizer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_incinerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_incinerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_incinerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coalCentrifuge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coalCentrifuge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coalCentrifuge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_siliconArcFurnace)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_siliconArcFurnace)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_siliconArcFurnace, mark, depth + 1);
		if (SF_mindustry_content_Blocks_electrolyzer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_electrolyzer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_electrolyzer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oxidationChamber)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oxidationChamber)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oxidationChamber, mark, depth + 1);
		if (SF_mindustry_content_Blocks_atmosphericConcentrator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_atmosphericConcentrator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_atmosphericConcentrator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_electricHeater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_electricHeater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_electricHeater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_slagHeater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_slagHeater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_slagHeater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseHeater)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseHeater)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseHeater, mark, depth + 1);
		if (SF_mindustry_content_Blocks_heatRedirector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_heatRedirector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_heatRedirector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_smallHeatRedirector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_smallHeatRedirector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_smallHeatRedirector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_heatRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_heatRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_heatRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_slagIncinerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_slagIncinerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_slagIncinerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbideCrucible)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbideCrucible)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbideCrucible, mark, depth + 1);
		if (SF_mindustry_content_Blocks_slagCentrifuge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_slagCentrifuge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_slagCentrifuge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeCrucible)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeCrucible)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeCrucible, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cyanogenSynthesizer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cyanogenSynthesizer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cyanogenSynthesizer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseSynthesizer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseSynthesizer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseSynthesizer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_heatReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_heatReactor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_heatReactor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_powerSource)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_powerSource)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_powerSource, mark, depth + 1);
		if (SF_mindustry_content_Blocks_powerVoid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_powerVoid)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_powerVoid, mark, depth + 1);
		if (SF_mindustry_content_Blocks_itemSource)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_itemSource)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_itemSource, mark, depth + 1);
		if (SF_mindustry_content_Blocks_itemVoid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_itemVoid)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_itemVoid, mark, depth + 1);
		if (SF_mindustry_content_Blocks_liquidSource)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_liquidSource)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_liquidSource, mark, depth + 1);
		if (SF_mindustry_content_Blocks_liquidVoid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_liquidVoid)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_liquidVoid, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadSource)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadSource)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadSource, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadVoid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadVoid)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadVoid, mark, depth + 1);
		if (SF_mindustry_content_Blocks_illuminator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_illuminator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_illuminator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_heatSource)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_heatSource)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_heatSource, mark, depth + 1);
		if (SF_mindustry_content_Blocks_copperWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_copperWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_copperWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_copperWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_copperWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_copperWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_titaniumWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_titaniumWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_titaniumWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_titaniumWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_titaniumWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_titaniumWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_plastaniumWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_plastaniumWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_plastaniumWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_plastaniumWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_plastaniumWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_plastaniumWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_thoriumWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_thoriumWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_thoriumWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_thoriumWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_thoriumWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_thoriumWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_door)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_door)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_door, mark, depth + 1);
		if (SF_mindustry_content_Blocks_doorLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_doorLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_doorLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scrapWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scrapWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scrapWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scrapWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scrapWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scrapWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scrapWallHuge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scrapWallHuge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scrapWallHuge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scrapWallGigantic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scrapWallGigantic)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scrapWallGigantic, mark, depth + 1);
		if (SF_mindustry_content_Blocks_thruster)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_thruster)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_thruster, mark, depth + 1);
		if (SF_mindustry_content_Blocks_berylliumWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_berylliumWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_berylliumWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_berylliumWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_berylliumWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_berylliumWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tungstenWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tungstenWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tungstenWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tungstenWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tungstenWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tungstenWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_blastDoor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_blastDoor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_blastDoor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedSurgeWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedSurgeWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedSurgeWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedSurgeWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedSurgeWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedSurgeWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbideWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbideWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbideWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_carbideWallLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_carbideWallLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_carbideWallLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shieldedWall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shieldedWall)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shieldedWall, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mender)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mender)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mender, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mendProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mendProjector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mendProjector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_overdriveProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_overdriveProjector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_overdriveProjector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_overdriveDome)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_overdriveDome)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_overdriveDome, mark, depth + 1);
		if (SF_mindustry_content_Blocks_forceProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_forceProjector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_forceProjector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shockMine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shockMine)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shockMine, mark, depth + 1);
		if (SF_mindustry_content_Blocks_targetDummy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_targetDummy)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_targetDummy, mark, depth + 1);
		if (SF_mindustry_content_Blocks_radar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_radar)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_radar, mark, depth + 1);
		if (SF_mindustry_content_Blocks_buildTower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_buildTower)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_buildTower, mark, depth + 1);
		if (SF_mindustry_content_Blocks_regenProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_regenProjector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_regenProjector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shockwaveTower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shockwaveTower)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shockwaveTower, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shieldProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shieldProjector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shieldProjector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largeShieldProjector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largeShieldProjector)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largeShieldProjector, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shieldBreaker)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shieldBreaker)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shieldBreaker, mark, depth + 1);
		if (SF_mindustry_content_Blocks_conveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_conveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_conveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_titaniumConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_titaniumConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_titaniumConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_plastaniumConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_plastaniumConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_plastaniumConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_armoredConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_armoredConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_armoredConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_distributor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_distributor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_distributor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_junction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_junction)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_junction, mark, depth + 1);
		if (SF_mindustry_content_Blocks_itemBridge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_itemBridge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_itemBridge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sorter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sorter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sorter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_invertedSorter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_invertedSorter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_invertedSorter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_router)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_router)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_router, mark, depth + 1);
		if (SF_mindustry_content_Blocks_overflowGate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_overflowGate)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_overflowGate, mark, depth + 1);
		if (SF_mindustry_content_Blocks_underflowGate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_underflowGate)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_underflowGate, mark, depth + 1);
		if (SF_mindustry_content_Blocks_unloader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_unloader)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_unloader, mark, depth + 1);
		if (SF_mindustry_content_Blocks_massDriver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_massDriver)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_massDriver, mark, depth + 1);
		if (SF_mindustry_content_Blocks_duct)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_duct)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_duct, mark, depth + 1);
		if (SF_mindustry_content_Blocks_armoredDuct)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_armoredDuct)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_armoredDuct, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ductRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ductRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ductRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_overflowDuct)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_overflowDuct)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_overflowDuct, mark, depth + 1);
		if (SF_mindustry_content_Blocks_underflowDuct)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_underflowDuct)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_underflowDuct, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ductBridge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ductBridge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ductBridge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ductUnloader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ductUnloader)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ductUnloader, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_unitCargoLoader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_unitCargoLoader)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_unitCargoLoader, mark, depth + 1);
		if (SF_mindustry_content_Blocks_unitCargoUnloadPoint)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_unitCargoUnloadPoint)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_unitCargoUnloadPoint, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mechanicalPump)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mechanicalPump)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mechanicalPump, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rotaryPump)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rotaryPump)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rotaryPump, mark, depth + 1);
		if (SF_mindustry_content_Blocks_impulsePump)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_impulsePump)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_impulsePump, mark, depth + 1);
		if (SF_mindustry_content_Blocks_conduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_conduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_conduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pulseConduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pulseConduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pulseConduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_platedConduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_platedConduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_platedConduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_liquidRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_liquidRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_liquidRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_liquidContainer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_liquidContainer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_liquidContainer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_liquidTank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_liquidTank)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_liquidTank, mark, depth + 1);
		if (SF_mindustry_content_Blocks_liquidJunction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_liquidJunction)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_liquidJunction, mark, depth + 1);
		if (SF_mindustry_content_Blocks_bridgeConduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_bridgeConduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_bridgeConduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_phaseConduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_phaseConduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_phaseConduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedPump)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedPump)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedPump, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedConduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedConduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedConduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedLiquidJunction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedLiquidJunction)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedLiquidJunction, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedBridgeConduit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedBridgeConduit)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedBridgeConduit, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedLiquidRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedLiquidRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedLiquidRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedLiquidContainer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedLiquidContainer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedLiquidContainer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedLiquidTank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedLiquidTank)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedLiquidTank, mark, depth + 1);
		if (SF_mindustry_content_Blocks_combustionGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_combustionGenerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_combustionGenerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_thermalGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_thermalGenerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_thermalGenerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_steamGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_steamGenerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_steamGenerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_differentialGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_differentialGenerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_differentialGenerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_rtgGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_rtgGenerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_rtgGenerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_solarPanel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_solarPanel)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_solarPanel, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largeSolarPanel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largeSolarPanel)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largeSolarPanel, mark, depth + 1);
		if (SF_mindustry_content_Blocks_thoriumReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_thoriumReactor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_thoriumReactor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_impactReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_impactReactor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_impactReactor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_battery)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_battery)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_battery, mark, depth + 1);
		if (SF_mindustry_content_Blocks_batteryLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_batteryLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_batteryLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_powerNode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_powerNode)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_powerNode, mark, depth + 1);
		if (SF_mindustry_content_Blocks_powerNodeLarge)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_powerNodeLarge)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_powerNodeLarge, mark, depth + 1);
		if (SF_mindustry_content_Blocks_surgeTower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_surgeTower)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_surgeTower, mark, depth + 1);
		if (SF_mindustry_content_Blocks_diode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_diode)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_diode, mark, depth + 1);
		if (SF_mindustry_content_Blocks_turbineCondenser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_turbineCondenser)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_turbineCondenser, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ventCondenser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ventCondenser)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ventCondenser, mark, depth + 1);
		if (SF_mindustry_content_Blocks_chemicalCombustionChamber)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_chemicalCombustionChamber)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_chemicalCombustionChamber, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pyrolysisGenerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pyrolysisGenerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pyrolysisGenerator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_fluxReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_fluxReactor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_fluxReactor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_neoplasiaReactor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_neoplasiaReactor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_neoplasiaReactor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_beamNode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_beamNode)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_beamNode, mark, depth + 1);
		if (SF_mindustry_content_Blocks_beamTower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_beamTower)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_beamTower, mark, depth + 1);
		if (SF_mindustry_content_Blocks_beamLink)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_beamLink)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_beamLink, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mechanicalDrill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mechanicalDrill)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mechanicalDrill, mark, depth + 1);
		if (SF_mindustry_content_Blocks_pneumaticDrill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_pneumaticDrill)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_pneumaticDrill, mark, depth + 1);
		if (SF_mindustry_content_Blocks_laserDrill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_laserDrill)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_laserDrill, mark, depth + 1);
		if (SF_mindustry_content_Blocks_blastDrill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_blastDrill)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_blastDrill, mark, depth + 1);
		if (SF_mindustry_content_Blocks_waterExtractor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_waterExtractor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_waterExtractor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_oilExtractor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_oilExtractor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_oilExtractor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cultivator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cultivator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cultivator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cliffCrusher)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cliffCrusher)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cliffCrusher, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largeCliffCrusher)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largeCliffCrusher)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largeCliffCrusher, mark, depth + 1);
		if (SF_mindustry_content_Blocks_plasmaBore)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_plasmaBore)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_plasmaBore, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largePlasmaBore)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largePlasmaBore)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largePlasmaBore, mark, depth + 1);
		if (SF_mindustry_content_Blocks_impactDrill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_impactDrill)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_impactDrill, mark, depth + 1);
		if (SF_mindustry_content_Blocks_eruptionDrill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_eruptionDrill)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_eruptionDrill, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreShard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreShard)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreShard, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreFoundation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreFoundation)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreFoundation, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreNucleus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreNucleus)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreNucleus, mark, depth + 1);
		if (SF_mindustry_content_Blocks_vault)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_vault)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_vault, mark, depth + 1);
		if (SF_mindustry_content_Blocks_container)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_container)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_container, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreBastion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreBastion)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreBastion, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreCitadel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreCitadel)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreCitadel, mark, depth + 1);
		if (SF_mindustry_content_Blocks_coreAcropolis)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_coreAcropolis)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_coreAcropolis, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedContainer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedContainer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedContainer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedVault)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedVault)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedVault, mark, depth + 1);
		if (SF_mindustry_content_Blocks_duo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_duo)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_duo, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scatter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scatter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scatter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scorch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scorch)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scorch, mark, depth + 1);
		if (SF_mindustry_content_Blocks_hail)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_hail)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_hail, mark, depth + 1);
		if (SF_mindustry_content_Blocks_arc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_arc)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_arc, mark, depth + 1);
		if (SF_mindustry_content_Blocks_wave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_wave)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_wave, mark, depth + 1);
		if (SF_mindustry_content_Blocks_lancer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_lancer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_lancer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_swarmer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_swarmer)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_swarmer, mark, depth + 1);
		if (SF_mindustry_content_Blocks_salvo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_salvo)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_salvo, mark, depth + 1);
		if (SF_mindustry_content_Blocks_fuse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_fuse)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_fuse, mark, depth + 1);
		if (SF_mindustry_content_Blocks_ripple)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_ripple)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_ripple, mark, depth + 1);
		if (SF_mindustry_content_Blocks_cyclone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_cyclone)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_cyclone, mark, depth + 1);
		if (SF_mindustry_content_Blocks_foreshadow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_foreshadow)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_foreshadow, mark, depth + 1);
		if (SF_mindustry_content_Blocks_spectre)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_spectre)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_spectre, mark, depth + 1);
		if (SF_mindustry_content_Blocks_meltdown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_meltdown)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_meltdown, mark, depth + 1);
		if (SF_mindustry_content_Blocks_segment)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_segment)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_segment, mark, depth + 1);
		if (SF_mindustry_content_Blocks_parallax)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_parallax)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_parallax, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tsunami)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tsunami)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tsunami, mark, depth + 1);
		if (SF_mindustry_content_Blocks_breach)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_breach)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_breach, mark, depth + 1);
		if (SF_mindustry_content_Blocks_diffuse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_diffuse)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_diffuse, mark, depth + 1);
		if (SF_mindustry_content_Blocks_sublimate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_sublimate)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_sublimate, mark, depth + 1);
		if (SF_mindustry_content_Blocks_titan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_titan)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_titan, mark, depth + 1);
		if (SF_mindustry_content_Blocks_disperse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_disperse)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_disperse, mark, depth + 1);
		if (SF_mindustry_content_Blocks_afflict)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_afflict)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_afflict, mark, depth + 1);
		if (SF_mindustry_content_Blocks_lustre)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_lustre)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_lustre, mark, depth + 1);
		if (SF_mindustry_content_Blocks_scathe)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_scathe)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_scathe, mark, depth + 1);
		if (SF_mindustry_content_Blocks_smite)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_smite)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_smite, mark, depth + 1);
		if (SF_mindustry_content_Blocks_malign)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_malign)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_malign, mark, depth + 1);
		if (SF_mindustry_content_Blocks_groundFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_groundFactory)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_groundFactory, mark, depth + 1);
		if (SF_mindustry_content_Blocks_airFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_airFactory)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_airFactory, mark, depth + 1);
		if (SF_mindustry_content_Blocks_navalFactory)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_navalFactory)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_navalFactory, mark, depth + 1);
		if (SF_mindustry_content_Blocks_additiveReconstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_additiveReconstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_additiveReconstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_multiplicativeReconstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_multiplicativeReconstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_multiplicativeReconstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_exponentialReconstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_exponentialReconstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_exponentialReconstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tetrativeReconstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tetrativeReconstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tetrativeReconstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_repairPoint)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_repairPoint)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_repairPoint, mark, depth + 1);
		if (SF_mindustry_content_Blocks_repairTurret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_repairTurret)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_repairTurret, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tankFabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tankFabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tankFabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shipFabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shipFabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shipFabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mechFabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mechFabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mechFabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tankRefabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tankRefabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tankRefabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shipRefabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shipRefabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shipRefabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mechRefabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mechRefabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mechRefabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_primeRefabricator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_primeRefabricator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_primeRefabricator, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tankAssembler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tankAssembler)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tankAssembler, mark, depth + 1);
		if (SF_mindustry_content_Blocks_shipAssembler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_shipAssembler)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_shipAssembler, mark, depth + 1);
		if (SF_mindustry_content_Blocks_mechAssembler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_mechAssembler)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_mechAssembler, mark, depth + 1);
		if (SF_mindustry_content_Blocks_basicAssemblerModule)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_basicAssemblerModule)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_basicAssemblerModule, mark, depth + 1);
		if (SF_mindustry_content_Blocks_unitRepairTower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_unitRepairTower)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_unitRepairTower, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedPayloadConveyor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedPayloadConveyor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedPayloadConveyor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedPayloadRouter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedPayloadRouter)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedPayloadRouter, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadMassDriver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadMassDriver)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadMassDriver, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largePayloadMassDriver)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largePayloadMassDriver)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largePayloadMassDriver, mark, depth + 1);
		if (SF_mindustry_content_Blocks_smallDeconstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_smallDeconstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_smallDeconstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_deconstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_deconstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_deconstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_constructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_constructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_constructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largeConstructor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largeConstructor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largeConstructor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadLoader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadLoader)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadLoader, mark, depth + 1);
		if (SF_mindustry_content_Blocks_payloadUnloader)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_payloadUnloader)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_payloadUnloader, mark, depth + 1);
		if (SF_mindustry_content_Blocks_message)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_message)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_message, mark, depth + 1);
		if (SF_mindustry_content_Blocks_switchBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_switchBlock)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_switchBlock, mark, depth + 1);
		if (SF_mindustry_content_Blocks_microProcessor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_microProcessor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_microProcessor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_logicProcessor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_logicProcessor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_logicProcessor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_hyperProcessor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_hyperProcessor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_hyperProcessor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largeLogicDisplay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largeLogicDisplay)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largeLogicDisplay, mark, depth + 1);
		if (SF_mindustry_content_Blocks_logicDisplay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_logicDisplay)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_logicDisplay, mark, depth + 1);
		if (SF_mindustry_content_Blocks_tileLogicDisplay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_tileLogicDisplay)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_tileLogicDisplay, mark, depth + 1);
		if (SF_mindustry_content_Blocks_memoryCell)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_memoryCell)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_memoryCell, mark, depth + 1);
		if (SF_mindustry_content_Blocks_memoryBank)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_memoryBank)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_memoryBank, mark, depth + 1);
		if (SF_mindustry_content_Blocks_canvas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_canvas)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_canvas, mark, depth + 1);
		if (SF_mindustry_content_Blocks_largeCanvas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_largeCanvas)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_largeCanvas, mark, depth + 1);
		if (SF_mindustry_content_Blocks_reinforcedMessage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_reinforcedMessage)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_reinforcedMessage, mark, depth + 1);
		if (SF_mindustry_content_Blocks_worldProcessor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_worldProcessor)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_worldProcessor, mark, depth + 1);
		if (SF_mindustry_content_Blocks_worldCell)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_worldCell)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_worldCell, mark, depth + 1);
		if (SF_mindustry_content_Blocks_worldMessage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_worldMessage)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_worldMessage, mark, depth + 1);
		if (SF_mindustry_content_Blocks_worldSwitch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_worldSwitch)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_worldSwitch, mark, depth + 1);
		if (SF_mindustry_content_Blocks_launchPad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_launchPad)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_launchPad, mark, depth + 1);
		if (SF_mindustry_content_Blocks_advancedLaunchPad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_advancedLaunchPad)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_advancedLaunchPad, mark, depth + 1);
		if (SF_mindustry_content_Blocks_landingPad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_landingPad)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_landingPad, mark, depth + 1);
		if (SF_mindustry_content_Blocks_interplanetaryAccelerator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Blocks_interplanetaryAccelerator)->clazz)->markFunction)((jobject) SF_mindustry_content_Blocks_interplanetaryAccelerator, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks *) object;
}

void clinit_mindustry_content_Blocks(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_Blocks(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Blocks_load(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks:load", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks(ctx);
	if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		jobject exc = clearCurrentException(frameRef);
		popExceptionFrames(frameRef, 1);
		const char* cname = (exc && exc->clazz && ((jclass)exc->clazz)->nativeName) ? (const char*)((jclass)exc->clazz)->nativeName : "Throwable";
		printf("[Blocks] EXCEPTION in Blocks:load: %s\n", cname);
		fflush(stdout);
		if (exc) {
			((func_java_lang_Throwable_printStackTrace) ((void **) nullCheck(ctx, exc)->vtable)[VTABLE_java_lang_Throwable_printStackTrace])(ctx, exc);
		}
		popStackFrame(ctx);
		return;
	}
	{
	LINE_NUMBER(191);
	clinit_mindustry_world_blocks_environment_AirBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_AirBlock);
	init_mindustry_world_blocks_environment_AirBlock_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"air"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_air = sp[0].o;
	LINE_NUMBER(193);
	clinit_mindustry_world_blocks_environment_SpawnBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_SpawnBlock);
	init_mindustry_world_blocks_environment_SpawnBlock_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spawn"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_spawn = sp[0].o;
	LINE_NUMBER(195);
	clinit_mindustry_world_blocks_environment_RemoveWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_RemoveWall);
	init_mindustry_world_blocks_environment_RemoveWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"remove-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_removeWall = sp[0].o;
	LINE_NUMBER(197);
	clinit_mindustry_world_blocks_environment_RemoveOre(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_RemoveOre);
	init_mindustry_world_blocks_environment_RemoveOre_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"remove-ore"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_removeOre = sp[0].o;
	LINE_NUMBER(199);
	clinit_mindustry_content_Blocks$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$1);
	init_mindustry_content_Blocks$1_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cliff"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cliff = sp[0].o;
	LINE_NUMBER(206);
	frame[0].i = (jint(1));
	}
label_6:;
	{
	if ((frame[0].i) > (16)) goto label_7;
	}
	{
	LINE_NUMBER(207);
	clinit_mindustry_world_blocks_ConstructBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_ConstructBlock);
	init_mindustry_world_blocks_ConstructBlock_int(ctx, sp[0].o, (frame[0].i));
	LINE_NUMBER(206);
	INST_IINC(0, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(210);
	clinit_mindustry_content_Blocks$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$2);
	init_mindustry_content_Blocks$2_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"deep-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_deepwater = sp[0].o;
	LINE_NUMBER(224);
	clinit_mindustry_content_Blocks$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$3);
	init_mindustry_content_Blocks$3_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shallow-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_water = sp[0].o;
	LINE_NUMBER(236);
	clinit_mindustry_content_Blocks$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$4);
	init_mindustry_content_Blocks$4_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tainted-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_taintedWater = sp[0].o;
	LINE_NUMBER(249);
	clinit_mindustry_content_Blocks$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$5);
	init_mindustry_content_Blocks$5_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"deep-tainted-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_deepTaintedWater = sp[0].o;
	LINE_NUMBER(264);
	clinit_mindustry_content_Blocks$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$6);
	init_mindustry_content_Blocks$6_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"darksand-tainted-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darksandTaintedWater = sp[0].o;
	LINE_NUMBER(272);
	clinit_mindustry_content_Blocks$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$7);
	init_mindustry_content_Blocks$7_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sand-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sandWater = sp[0].o;
	LINE_NUMBER(279);
	clinit_mindustry_content_Blocks$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$8);
	init_mindustry_content_Blocks$8_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"darksand-water"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darksandWater = sp[0].o;
	LINE_NUMBER(286);
	clinit_mindustry_content_Blocks$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$9);
	init_mindustry_content_Blocks$9_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tar"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tar = sp[0].o;
	LINE_NUMBER(298);
	clinit_mindustry_content_Blocks$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$10);
	init_mindustry_content_Blocks$10_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pooled-cryofluid"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cryofluid = sp[0].o;
	LINE_NUMBER(318);
	clinit_mindustry_content_Blocks$11(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$11);
	init_mindustry_content_Blocks$11_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"molten-slag"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_slag = sp[0].o;
	LINE_NUMBER(336);
	clinit_mindustry_content_Blocks$12(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$12);
	init_mindustry_content_Blocks$12_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"space"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_space = sp[0].o;
	LINE_NUMBER(346);
	clinit_mindustry_world_blocks_environment_EmptyFloor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_EmptyFloor);
	init_mindustry_world_blocks_environment_EmptyFloor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"empty"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_empty = sp[0].o;
	LINE_NUMBER(348);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_stone = sp[0].o;
	LINE_NUMBER(350);
	clinit_mindustry_content_Blocks$13(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$13);
	init_mindustry_content_Blocks$13_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crater-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_craters = sp[0].o;
	LINE_NUMBER(355);
	clinit_mindustry_content_Blocks$14(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$14);
	init_mindustry_content_Blocks$14_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"char"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_charr = sp[0].o;
	LINE_NUMBER(360);
	clinit_mindustry_content_Blocks$15(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$15);
	init_mindustry_content_Blocks$15_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"basalt"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_basalt = sp[0].o;
	LINE_NUMBER(364);
	clinit_mindustry_content_Blocks$16(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$16);
	init_mindustry_content_Blocks$16_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hotrock"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_hotrock = sp[0].o;
	LINE_NUMBER(374);
	clinit_mindustry_content_Blocks$17(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$17);
	init_mindustry_content_Blocks$17_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"magmarock"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_magmarock = sp[0].o;
	LINE_NUMBER(384);
	clinit_mindustry_content_Blocks$18(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$18);
	init_mindustry_content_Blocks$18_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sand-floor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sand = sp[0].o;
	LINE_NUMBER(390);
	clinit_mindustry_content_Blocks$19(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$19);
	init_mindustry_content_Blocks$19_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"darksand"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darksand = sp[0].o;
	LINE_NUMBER(396);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dirt"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_dirt = sp[0].o;
	LINE_NUMBER(398);
	clinit_mindustry_content_Blocks$20(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$20);
	init_mindustry_content_Blocks$20_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mud"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mud = sp[0].o;
	LINE_NUMBER(411);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_darksandTaintedWater;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_ShallowLiquid, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_taintedWater;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_darksand;
	((func_mindustry_world_blocks_environment_ShallowLiquid_set_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_ShallowLiquid_set_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(412);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_sandWater;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_ShallowLiquid, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_water;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_sand;
	((func_mindustry_world_blocks_environment_ShallowLiquid_set_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_ShallowLiquid_set_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(413);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_darksandWater;
	sp[0].o = checkCast(ctx, &class_mindustry_world_blocks_environment_ShallowLiquid, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_water;
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_darksand;
	((func_mindustry_world_blocks_environment_ShallowLiquid_set_mindustry_world_Block_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_environment_ShallowLiquid_set_mindustry_world_Block_mindustry_world_Block])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(415);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dacite"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_dacite = sp[0].o;
	LINE_NUMBER(417);
	clinit_mindustry_content_Blocks$21(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$21);
	init_mindustry_content_Blocks$21_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rhyolite"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rhyolite = sp[0].o;
	LINE_NUMBER(421);
	clinit_mindustry_content_Blocks$22(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$22);
	init_mindustry_content_Blocks$22_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rhyolite-crater"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rhyoliteCrater = sp[0].o;
	LINE_NUMBER(426);
	clinit_mindustry_content_Blocks$23(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$23);
	init_mindustry_content_Blocks$23_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rough-rhyolite"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_roughRhyolite = sp[0].o;
	LINE_NUMBER(431);
	clinit_mindustry_content_Blocks$24(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$24);
	init_mindustry_content_Blocks$24_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"regolith"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_regolith = sp[0].o;
	LINE_NUMBER(435);
	clinit_mindustry_content_Blocks$25(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$25);
	init_mindustry_content_Blocks$25_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yellow-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_yellowStone = sp[0].o;
	LINE_NUMBER(439);
	clinit_mindustry_content_Blocks$26(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$26);
	init_mindustry_content_Blocks$26_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbon-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbonStone = sp[0].o;
	LINE_NUMBER(444);
	clinit_mindustry_content_Blocks$27(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$27);
	init_mindustry_content_Blocks$27_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ferric-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ferricStone = sp[0].o;
	LINE_NUMBER(448);
	clinit_mindustry_content_Blocks$28(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$28);
	init_mindustry_content_Blocks$28_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ferric-craters"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ferricCraters = sp[0].o;
	LINE_NUMBER(454);
	clinit_mindustry_content_Blocks$29(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$29);
	init_mindustry_content_Blocks$29_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beryllic-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_beryllicStone = sp[0].o;
	LINE_NUMBER(458);
	clinit_mindustry_content_Blocks$30(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$30);
	init_mindustry_content_Blocks$30_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystalline-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystallineStone = sp[0].o;
	LINE_NUMBER(462);
	clinit_mindustry_content_Blocks$31(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$31);
	init_mindustry_content_Blocks$31_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystal-floor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystalFloor = sp[0].o;
	LINE_NUMBER(466);
	clinit_mindustry_content_Blocks$32(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$32);
	init_mindustry_content_Blocks$32_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yellow-stone-plates"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_yellowStonePlates = sp[0].o;
	LINE_NUMBER(470);
	clinit_mindustry_content_Blocks$33(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$33);
	init_mindustry_content_Blocks$33_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redStone = sp[0].o;
	LINE_NUMBER(475);
	clinit_mindustry_content_Blocks$34(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$34);
	init_mindustry_content_Blocks$34_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dense-red-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_denseRedStone = sp[0].o;
	LINE_NUMBER(480);
	clinit_mindustry_content_Blocks$35(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$35);
	init_mindustry_content_Blocks$35_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-ice"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redIce = sp[0].o;
	LINE_NUMBER(486);
	clinit_mindustry_content_Blocks$36(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$36);
	init_mindustry_content_Blocks$36_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arkycite-floor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_arkyciteFloor = sp[0].o;
	LINE_NUMBER(500);
	clinit_mindustry_content_Blocks$37(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$37);
	init_mindustry_content_Blocks$37_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arkyic-stone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_arkyicStone = sp[0].o;
	LINE_NUMBER(504);
	clinit_mindustry_content_Blocks$38(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$38);
	init_mindustry_content_Blocks$38_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rhyolite-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rhyoliteVent = sp[0].o;
	LINE_NUMBER(509);
	clinit_mindustry_content_Blocks$39(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$39);
	init_mindustry_content_Blocks$39_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbon-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbonVent = sp[0].o;
	LINE_NUMBER(514);
	clinit_mindustry_content_Blocks$40(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$40);
	init_mindustry_content_Blocks$40_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arkyic-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_arkyicVent = sp[0].o;
	LINE_NUMBER(519);
	clinit_mindustry_content_Blocks$41(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$41);
	init_mindustry_content_Blocks$41_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yellow-stone-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_yellowStoneVent = sp[0].o;
	LINE_NUMBER(524);
	clinit_mindustry_content_Blocks$42(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$42);
	init_mindustry_content_Blocks$42_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-stone-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redStoneVent = sp[0].o;
	LINE_NUMBER(529);
	clinit_mindustry_content_Blocks$43(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$43);
	init_mindustry_content_Blocks$43_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystalline-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystallineVent = sp[0].o;
	LINE_NUMBER(534);
	clinit_mindustry_content_Blocks$44(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$44);
	init_mindustry_content_Blocks$44_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stone-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_stoneVent = sp[0].o;
	LINE_NUMBER(539);
	clinit_mindustry_content_Blocks$45(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$45);
	init_mindustry_content_Blocks$45_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"basalt-vent"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_basaltVent = sp[0].o;
	LINE_NUMBER(544);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"redmat"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redmat = sp[0].o;
	LINE_NUMBER(545);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bluemat"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_bluemat = sp[0].o;
	LINE_NUMBER(547);
	clinit_mindustry_content_Blocks$46(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$46);
	init_mindustry_content_Blocks$46_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"grass"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_grass = sp[0].o;
	LINE_NUMBER(552);
	clinit_mindustry_content_Blocks$47(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$47);
	init_mindustry_content_Blocks$47_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"salt"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_salt = sp[0].o;
	LINE_NUMBER(558);
	clinit_mindustry_content_Blocks$48(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$48);
	init_mindustry_content_Blocks$48_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"snow"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_snow = sp[0].o;
	LINE_NUMBER(563);
	clinit_mindustry_content_Blocks$49(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$49);
	init_mindustry_content_Blocks$49_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ice"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ice = sp[0].o;
	LINE_NUMBER(570);
	clinit_mindustry_content_Blocks$50(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$50);
	init_mindustry_content_Blocks$50_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ice-snow"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_iceSnow = sp[0].o;
	LINE_NUMBER(577);
	clinit_mindustry_content_Blocks$51(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$51);
	init_mindustry_content_Blocks$51_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shale"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shale = sp[0].o;
	LINE_NUMBER(582);
	clinit_mindustry_content_Blocks$52(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$52);
	init_mindustry_content_Blocks$52_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"moss"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_moss = sp[0].o;
	LINE_NUMBER(587);
	clinit_mindustry_content_Blocks$53(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$53);
	init_mindustry_content_Blocks$53_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-zone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreZone = sp[0].o;
	LINE_NUMBER(592);
	clinit_mindustry_content_Blocks$54(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$54);
	init_mindustry_content_Blocks$54_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore-moss"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sporeMoss = sp[0].o;
	LINE_NUMBER(597);
	clinit_mindustry_content_Blocks$55(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$55);
	init_mindustry_content_Blocks$55_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stone-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_stoneWall = sp[0].o;
	LINE_NUMBER(601);
	clinit_mindustry_content_Blocks$56(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$56);
	init_mindustry_content_Blocks$56_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sporeWall = sp[0].o;
	LINE_NUMBER(605);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dirt-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_dirtWall = sp[0].o;
	LINE_NUMBER(607);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dacite-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_daciteWall = sp[0].o;
	LINE_NUMBER(609);
	clinit_mindustry_content_Blocks$57(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$57);
	init_mindustry_content_Blocks$57_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ice-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_iceWall = sp[0].o;
	LINE_NUMBER(614);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"snow-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_snowWall = sp[0].o;
	LINE_NUMBER(616);
	clinit_mindustry_content_Blocks$58(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$58);
	init_mindustry_content_Blocks$58_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dune-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_duneWall = sp[0].o;
	LINE_NUMBER(621);
	clinit_mindustry_content_Blocks$59(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$59);
	init_mindustry_content_Blocks$59_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"regolith-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_regolithWall = sp[0].o;
	LINE_NUMBER(626);
	clinit_mindustry_content_Blocks$60(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$60);
	init_mindustry_content_Blocks$60_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yellow-stone-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_yellowStoneWall = sp[0].o;
	LINE_NUMBER(631);
	clinit_mindustry_content_Blocks$61(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$61);
	init_mindustry_content_Blocks$61_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rhyolite-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rhyoliteWall = sp[0].o;
	LINE_NUMBER(636);
	clinit_mindustry_content_Blocks$62(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$62);
	init_mindustry_content_Blocks$62_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbon-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbonWall = sp[0].o;
	LINE_NUMBER(641);
	clinit_mindustry_content_Blocks$63(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$63);
	init_mindustry_content_Blocks$63_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ferric-stone-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ferricStoneWall = sp[0].o;
	LINE_NUMBER(646);
	clinit_mindustry_content_Blocks$64(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$64);
	init_mindustry_content_Blocks$64_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beryllic-stone-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_beryllicStoneWall = sp[0].o;
	LINE_NUMBER(651);
	clinit_mindustry_content_Blocks$65(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$65);
	init_mindustry_content_Blocks$65_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arkyic-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_arkyicWall = sp[0].o;
	LINE_NUMBER(656);
	clinit_mindustry_content_Blocks$66(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$66);
	init_mindustry_content_Blocks$66_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystalline-stone-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystallineStoneWall = sp[0].o;
	LINE_NUMBER(661);
	clinit_mindustry_content_Blocks$67(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$67);
	init_mindustry_content_Blocks$67_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-ice-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redIceWall = sp[0].o;
	LINE_NUMBER(665);
	clinit_mindustry_content_Blocks$68(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$68);
	init_mindustry_content_Blocks$68_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-stone-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redStoneWall = sp[0].o;
	LINE_NUMBER(670);
	clinit_mindustry_content_Blocks$69(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$69);
	init_mindustry_content_Blocks$69_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-diamond-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redDiamondWall = sp[0].o;
	LINE_NUMBER(674);
	clinit_mindustry_content_Blocks$70(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$70);
	init_mindustry_content_Blocks$70_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sand-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sandWall = sp[0].o;
	LINE_NUMBER(679);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"salt-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_saltWall = sp[0].o;
	LINE_NUMBER(681);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shrubs"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shrubs = sp[0].o;
	LINE_NUMBER(683);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shale-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shaleWall = sp[0].o;
	LINE_NUMBER(685);
	clinit_mindustry_content_Blocks$71(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$71);
	init_mindustry_content_Blocks$71_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore-pine"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sporePine = sp[0].o;
	LINE_NUMBER(689);
	clinit_mindustry_world_blocks_environment_StaticTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticTree);
	init_mindustry_world_blocks_environment_StaticTree_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"snow-pine"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_snowPine = sp[0].o;
	LINE_NUMBER(691);
	clinit_mindustry_world_blocks_environment_StaticTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticTree);
	init_mindustry_world_blocks_environment_StaticTree_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pine"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pine = sp[0].o;
	LINE_NUMBER(693);
	clinit_mindustry_world_blocks_environment_TreeBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_TreeBlock);
	init_mindustry_world_blocks_environment_TreeBlock_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"white-tree-dead"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_whiteTreeDead = sp[0].o;
	LINE_NUMBER(695);
	clinit_mindustry_world_blocks_environment_TreeBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_TreeBlock);
	init_mindustry_world_blocks_environment_TreeBlock_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"white-tree"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_whiteTree = sp[0].o;
	LINE_NUMBER(697);
	clinit_mindustry_content_Blocks$72(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$72);
	init_mindustry_content_Blocks$72_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore-cluster"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sporeCluster = sp[0].o;
	LINE_NUMBER(703);
	clinit_mindustry_content_Blocks$73(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$73);
	init_mindustry_content_Blocks$73_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"redweed"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redweed = sp[0].o;
	LINE_NUMBER(708);
	clinit_mindustry_content_Blocks$74(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$74);
	init_mindustry_content_Blocks$74_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pur-bush"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_purbush = sp[0].o;
	LINE_NUMBER(712);
	clinit_mindustry_content_Blocks$75(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$75);
	init_mindustry_content_Blocks$75_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yellowcoral"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_yellowCoral = sp[0].o;
	LINE_NUMBER(723);
	clinit_mindustry_content_Blocks$76(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$76);
	init_mindustry_content_Blocks$76_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_boulder = sp[0].o;
	LINE_NUMBER(728);
	clinit_mindustry_content_Blocks$77(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$77);
	init_mindustry_content_Blocks$77_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"snow-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_snowBoulder = sp[0].o;
	LINE_NUMBER(733);
	clinit_mindustry_content_Blocks$78(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$78);
	init_mindustry_content_Blocks$78_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shale-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shaleBoulder = sp[0].o;
	LINE_NUMBER(738);
	clinit_mindustry_content_Blocks$79(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$79);
	init_mindustry_content_Blocks$79_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sand-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sandBoulder = sp[0].o;
	LINE_NUMBER(743);
	clinit_mindustry_content_Blocks$80(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$80);
	init_mindustry_content_Blocks$80_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dacite-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_daciteBoulder = sp[0].o;
	LINE_NUMBER(748);
	clinit_mindustry_content_Blocks$81(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$81);
	init_mindustry_content_Blocks$81_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"basalt-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_basaltBoulder = sp[0].o;
	LINE_NUMBER(753);
	clinit_mindustry_content_Blocks$82(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$82);
	init_mindustry_content_Blocks$82_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbon-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbonBoulder = sp[0].o;
	LINE_NUMBER(758);
	clinit_mindustry_content_Blocks$83(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$83);
	init_mindustry_content_Blocks$83_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ferric-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ferricBoulder = sp[0].o;
	LINE_NUMBER(763);
	clinit_mindustry_content_Blocks$84(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$84);
	init_mindustry_content_Blocks$84_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beryllic-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_beryllicBoulder = sp[0].o;
	LINE_NUMBER(768);
	clinit_mindustry_content_Blocks$85(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$85);
	init_mindustry_content_Blocks$85_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"yellow-stone-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_yellowStoneBoulder = sp[0].o;
	LINE_NUMBER(774);
	clinit_mindustry_content_Blocks$86(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$86);
	init_mindustry_content_Blocks$86_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arkyic-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_arkyicBoulder = sp[0].o;
	LINE_NUMBER(781);
	clinit_mindustry_content_Blocks$87(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$87);
	init_mindustry_content_Blocks$87_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystal-cluster"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystalCluster = sp[0].o;
	LINE_NUMBER(786);
	clinit_mindustry_content_Blocks$88(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$88);
	init_mindustry_content_Blocks$88_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vibrant-crystal-cluster"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_vibrantCrystalCluster = sp[0].o;
	LINE_NUMBER(791);
	clinit_mindustry_content_Blocks$89(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$89);
	init_mindustry_content_Blocks$89_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystal-blocks"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystalBlocks = sp[0].o;
	LINE_NUMBER(798);
	clinit_mindustry_content_Blocks$90(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$90);
	init_mindustry_content_Blocks$90_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystal-orbs"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystalOrbs = sp[0].o;
	LINE_NUMBER(805);
	clinit_mindustry_content_Blocks$91(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$91);
	init_mindustry_content_Blocks$91_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"crystalline-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_crystallineBoulder = sp[0].o;
	LINE_NUMBER(810);
	clinit_mindustry_content_Blocks$92(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$92);
	init_mindustry_content_Blocks$92_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-ice-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redIceBoulder = sp[0].o;
	LINE_NUMBER(815);
	clinit_mindustry_content_Blocks$93(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$93);
	init_mindustry_content_Blocks$93_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rhyolite-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rhyoliteBoulder = sp[0].o;
	LINE_NUMBER(820);
	clinit_mindustry_content_Blocks$94(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$94);
	init_mindustry_content_Blocks$94_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"red-stone-boulder"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_redStoneBoulder = sp[0].o;
	LINE_NUMBER(825);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-floor"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalFloor = sp[0].o;
	LINE_NUMBER(826);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-floor-damaged"_j))), (jint(3)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalFloorDamaged = sp[0].o;
	LINE_NUMBER(828);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-floor-2"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalFloor2 = sp[0].o;
	LINE_NUMBER(829);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-floor-3"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalFloor3 = sp[0].o;
	LINE_NUMBER(830);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-floor-4"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalFloor4 = sp[0].o;
	LINE_NUMBER(831);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-floor-5"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalFloor5 = sp[0].o;
	LINE_NUMBER(833);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-panel-1"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkPanel1 = sp[0].o;
	LINE_NUMBER(834);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-panel-2"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkPanel2 = sp[0].o;
	LINE_NUMBER(835);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-panel-3"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkPanel3 = sp[0].o;
	LINE_NUMBER(836);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-panel-4"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkPanel4 = sp[0].o;
	LINE_NUMBER(837);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-panel-5"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkPanel5 = sp[0].o;
	LINE_NUMBER(838);
	clinit_mindustry_world_blocks_environment_Floor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_Floor);
	init_mindustry_world_blocks_environment_Floor_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-panel-6"_j))), (jint(0)));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkPanel6 = sp[0].o;
	LINE_NUMBER(840);
	clinit_mindustry_world_blocks_environment_StaticWall(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_StaticWall);
	init_mindustry_world_blocks_environment_StaticWall_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"dark-metal"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_darkMetal = sp[0].o;
	LINE_NUMBER(842);
	clinit_mindustry_content_Blocks$95(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$95);
	init_mindustry_content_Blocks$95_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-1"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles1 = sp[0].o;
	LINE_NUMBER(848);
	clinit_mindustry_content_Blocks$96(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$96);
	init_mindustry_content_Blocks$96_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-2"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles2 = sp[0].o;
	LINE_NUMBER(854);
	clinit_mindustry_content_Blocks$97(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$97);
	init_mindustry_content_Blocks$97_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-3"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles3 = sp[0].o;
	LINE_NUMBER(860);
	clinit_mindustry_content_Blocks$98(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$98);
	init_mindustry_content_Blocks$98_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-4"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles4 = sp[0].o;
	LINE_NUMBER(866);
	clinit_mindustry_content_Blocks$99(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$99);
	init_mindustry_content_Blocks$99_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-5"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles5 = sp[0].o;
	LINE_NUMBER(872);
	clinit_mindustry_content_Blocks$100(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$100);
	init_mindustry_content_Blocks$100_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-6"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles6 = sp[0].o;
	LINE_NUMBER(882);
	clinit_mindustry_content_Blocks$101(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$101);
	init_mindustry_content_Blocks$101_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-7"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles7 = sp[0].o;
	LINE_NUMBER(889);
	clinit_mindustry_content_Blocks$102(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$102);
	init_mindustry_content_Blocks$102_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-8"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles8 = sp[0].o;
	LINE_NUMBER(896);
	clinit_mindustry_content_Blocks$103(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$103);
	init_mindustry_content_Blocks$103_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-9"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles9 = sp[0].o;
	LINE_NUMBER(902);
	clinit_mindustry_content_Blocks$104(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$104);
	init_mindustry_content_Blocks$104_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-10"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles10 = sp[0].o;
	LINE_NUMBER(908);
	clinit_mindustry_content_Blocks$105(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$105);
	init_mindustry_content_Blocks$105_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-11"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles11 = sp[0].o;
	LINE_NUMBER(915);
	clinit_mindustry_content_Blocks$106(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$106);
	init_mindustry_content_Blocks$106_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-12"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles12 = sp[0].o;
	LINE_NUMBER(925);
	clinit_mindustry_content_Blocks$107(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$107);
	init_mindustry_content_Blocks$107_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-tiles-13"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalTiles13 = sp[0].o;
	LINE_NUMBER(932);
	clinit_mindustry_content_Blocks$108(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$108);
	init_mindustry_content_Blocks$108_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-wall-1"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalWall1 = sp[0].o;
	LINE_NUMBER(936);
	clinit_mindustry_content_Blocks$109(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$109);
	init_mindustry_content_Blocks$109_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-wall-2"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalWall2 = sp[0].o;
	LINE_NUMBER(941);
	clinit_mindustry_content_Blocks$110(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$110);
	init_mindustry_content_Blocks$110_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"metal-wall-3"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_metalWall3 = sp[0].o;
	LINE_NUMBER(945);
	clinit_mindustry_content_Blocks$111(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$111);
	init_mindustry_content_Blocks$111_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"colored-floor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coloredFloor = sp[0].o;
	LINE_NUMBER(951);
	clinit_mindustry_content_Blocks$112(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$112);
	init_mindustry_content_Blocks$112_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"colored-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coloredWall = sp[0].o;
	LINE_NUMBER(955);
	clinit_mindustry_content_Blocks$113(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$113);
	init_mindustry_content_Blocks$113_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"character-overlay"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_characterOverlayGray = sp[0].o;
	LINE_NUMBER(959);
	clinit_mindustry_content_Blocks$114(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$114);
	init_mindustry_content_Blocks$114_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"character-overlay-white"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_characterOverlayWhite = sp[0].o;
	LINE_NUMBER(963);
	clinit_mindustry_content_Blocks$115(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$115);
	init_mindustry_content_Blocks$115_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rune-overlay"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_runeOverlay = sp[0].o;
	LINE_NUMBER(967);
	clinit_mindustry_world_blocks_environment_RuneOverlay(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_RuneOverlay);
	init_mindustry_world_blocks_environment_RuneOverlay_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rune-overlay-crux"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cruxRuneOverlay = sp[0].o;
	LINE_NUMBER(969);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_Block, (12));
	jint temp0 = jint(0);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloor;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloorDamaged;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloor2;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloor3;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloor4;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_metalFloor5;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel1;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel2;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel3;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel4;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel5;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkPanel6;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_Blocks_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_content_Blocks_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_content_Blocks_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(970);
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(972);
	clinit_mindustry_world_blocks_environment_OverlayFloor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_OverlayFloor);
	init_mindustry_world_blocks_environment_OverlayFloor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pebbles"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pebbles = sp[0].o;
	LINE_NUMBER(974);
	clinit_mindustry_world_blocks_environment_OverlayFloor(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_OverlayFloor);
	init_mindustry_world_blocks_environment_OverlayFloor_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tendrils"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tendrils = sp[0].o;
	LINE_NUMBER(979);
	clinit_mindustry_content_Blocks$116(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$116);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	init_mindustry_content_Blocks$116_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreCopper = sp[0].o;
	LINE_NUMBER(985);
	clinit_mindustry_content_Blocks$117(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$117);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_lead;
	init_mindustry_content_Blocks$117_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreLead = sp[0].o;
	LINE_NUMBER(991);
	clinit_mindustry_world_blocks_environment_OreBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_OreBlock);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_scrap;
	init_mindustry_world_blocks_environment_OreBlock_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreScrap = sp[0].o;
	LINE_NUMBER(993);
	clinit_mindustry_content_Blocks$118(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$118);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_coal;
	init_mindustry_content_Blocks$118_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreCoal = sp[0].o;
	LINE_NUMBER(999);
	clinit_mindustry_content_Blocks$119(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$119);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_titanium;
	init_mindustry_content_Blocks$119_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreTitanium = sp[0].o;
	LINE_NUMBER(1005);
	clinit_mindustry_content_Blocks$120(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$120);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_thorium;
	init_mindustry_content_Blocks$120_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreThorium = sp[0].o;
	LINE_NUMBER(1011);
	clinit_mindustry_world_blocks_environment_OreBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_OreBlock);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_beryllium;
	init_mindustry_world_blocks_environment_OreBlock_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreBeryllium = sp[0].o;
	LINE_NUMBER(1013);
	clinit_mindustry_world_blocks_environment_OreBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_OreBlock);
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_tungsten;
	init_mindustry_world_blocks_environment_OreBlock_mindustry_type_Item(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreTungsten = sp[0].o;
	LINE_NUMBER(1015);
	clinit_mindustry_world_blocks_environment_OreBlock(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_environment_OreBlock);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ore-crystal-thorium"_j));
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_thorium;
	init_mindustry_world_blocks_environment_OreBlock_java_lang_String_mindustry_type_Item(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oreCrystalThorium = sp[0].o;
	LINE_NUMBER(1017);
	clinit_mindustry_content_Blocks$121(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$121);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ore-wall-thorium"_j));
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_thorium;
	init_mindustry_content_Blocks$121_java_lang_String_mindustry_type_Item(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_wallOreThorium = sp[0].o;
	LINE_NUMBER(1021);
	clinit_mindustry_content_Blocks$122(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$122);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ore-wall-beryllium"_j));
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_beryllium;
	init_mindustry_content_Blocks$122_java_lang_String_mindustry_type_Item(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_wallOreBeryllium = sp[0].o;
	LINE_NUMBER(1025);
	clinit_mindustry_content_Blocks$123(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$123);
	init_mindustry_content_Blocks$123_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"graphitic-wall"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_graphiticWall = sp[0].o;
	LINE_NUMBER(1030);
	clinit_mindustry_content_Blocks$124(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$124);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ore-wall-graphite"_j));
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_graphite;
	init_mindustry_content_Blocks$124_java_lang_String_mindustry_type_Item(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_wallOreGraphite = sp[0].o;
	LINE_NUMBER(1034);
	clinit_mindustry_content_Blocks$125(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$125);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ore-wall-tungsten"_j));
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_tungsten;
	init_mindustry_content_Blocks$125_java_lang_String_mindustry_type_Item(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_wallOreTungsten = sp[0].o;
	LINE_NUMBER(1041);
	clinit_mindustry_content_Blocks$126(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$126);
	init_mindustry_content_Blocks$126_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"graphite-press"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_graphitePress = sp[0].o;
	LINE_NUMBER(1053);
	clinit_mindustry_content_Blocks$127(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$127);
	init_mindustry_content_Blocks$127_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"multi-press"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_multiPress = sp[0].o;
	LINE_NUMBER(1070);
	clinit_mindustry_content_Blocks$128(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$128);
	init_mindustry_content_Blocks$128_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"silicon-smelter"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_siliconSmelter = sp[0].o;
	LINE_NUMBER(1086);
	clinit_mindustry_content_Blocks$129(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$129);
	init_mindustry_content_Blocks$129_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"silicon-crucible"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_siliconCrucible = sp[0].o;
	LINE_NUMBER(1105);
	clinit_mindustry_content_Blocks$130(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$130);
	init_mindustry_content_Blocks$130_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"kiln"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_kiln = sp[0].o;
	LINE_NUMBER(1120);
	clinit_mindustry_content_Blocks$131(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$131);
	init_mindustry_content_Blocks$131_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plastanium-compressor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_plastaniumCompressor = sp[0].o;
	LINE_NUMBER(1138);
	clinit_mindustry_content_Blocks$132(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$132);
	init_mindustry_content_Blocks$132_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-weaver"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseWeaver = sp[0].o;
	LINE_NUMBER(1156);
	clinit_mindustry_content_Blocks$133(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$133);
	init_mindustry_content_Blocks$133_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-smelter"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeSmelter = sp[0].o;
	LINE_NUMBER(1170);
	clinit_mindustry_content_Blocks$134(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$134);
	init_mindustry_content_Blocks$134_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cryofluid-mixer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cryofluidMixer = sp[0].o;
	LINE_NUMBER(1191);
	clinit_mindustry_content_Blocks$135(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$135);
	init_mindustry_content_Blocks$135_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pyratite-mixer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pyratiteMixer = sp[0].o;
	LINE_NUMBER(1206);
	clinit_mindustry_content_Blocks$136(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$136);
	init_mindustry_content_Blocks$136_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blast-mixer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_blastMixer = sp[0].o;
	LINE_NUMBER(1220);
	clinit_mindustry_content_Blocks$137(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$137);
	init_mindustry_content_Blocks$137_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"melter"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_melter = sp[0].o;
	LINE_NUMBER(1233);
	clinit_mindustry_content_Blocks$138(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$138);
	init_mindustry_content_Blocks$138_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"separator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_separator = sp[0].o;
	LINE_NUMBER(1251);
	clinit_mindustry_content_Blocks$139(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$139);
	init_mindustry_content_Blocks$139_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"disassembler"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_disassembler = sp[0].o;
	LINE_NUMBER(1271);
	clinit_mindustry_content_Blocks$140(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$140);
	init_mindustry_content_Blocks$140_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spore-press"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sporePress = sp[0].o;
	LINE_NUMBER(1295);
	clinit_mindustry_content_Blocks$141(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$141);
	init_mindustry_content_Blocks$141_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pulverizer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pulverizer = sp[0].o;
	LINE_NUMBER(1313);
	clinit_mindustry_content_Blocks$142(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$142);
	init_mindustry_content_Blocks$142_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"coal-centrifuge"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coalCentrifuge = sp[0].o;
	LINE_NUMBER(1326);
	clinit_mindustry_content_Blocks$143(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$143);
	init_mindustry_content_Blocks$143_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"incinerator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_incinerator = sp[0].o;
	LINE_NUMBER(1335);
	clinit_mindustry_content_Blocks$144(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$144);
	init_mindustry_content_Blocks$144_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"silicon-arc-furnace"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_siliconArcFurnace = sp[0].o;
	LINE_NUMBER(1356);
	clinit_mindustry_content_Blocks$145(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$145);
	init_mindustry_content_Blocks$145_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"electrolyzer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_electrolyzer = sp[0].o;
	LINE_NUMBER(1400);
	clinit_mindustry_content_Blocks$146(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$146);
	init_mindustry_content_Blocks$146_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"atmospheric-concentrator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_atmosphericConcentrator = sp[0].o;
	LINE_NUMBER(1429);
	clinit_mindustry_content_Blocks$147(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$147);
	init_mindustry_content_Blocks$147_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"oxidation-chamber"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oxidationChamber = sp[0].o;
	LINE_NUMBER(1452);
	clinit_mindustry_content_Blocks$148(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$148);
	init_mindustry_content_Blocks$148_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"electric-heater"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_electricHeater = sp[0].o;
	LINE_NUMBER(1467);
	clinit_mindustry_content_Blocks$149(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$149);
	init_mindustry_content_Blocks$149_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slag-heater"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_slagHeater = sp[0].o;
	LINE_NUMBER(1485);
	clinit_mindustry_content_Blocks$150(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$150);
	init_mindustry_content_Blocks$150_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-heater"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseHeater = sp[0].o;
	LINE_NUMBER(1496);
	clinit_mindustry_content_Blocks$151(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$151);
	init_mindustry_content_Blocks$151_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heat-redirector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_heatRedirector = sp[0].o;
	LINE_NUMBER(1507);
	clinit_mindustry_content_Blocks$152(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$152);
	init_mindustry_content_Blocks$152_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"small-heat-redirector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_smallHeatRedirector = sp[0].o;
	LINE_NUMBER(1519);
	clinit_mindustry_content_Blocks$153(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$153);
	init_mindustry_content_Blocks$153_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heat-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_heatRouter = sp[0].o;
	LINE_NUMBER(1531);
	clinit_mindustry_content_Blocks$154(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$154);
	init_mindustry_content_Blocks$154_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slag-incinerator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_slagIncinerator = sp[0].o;
	LINE_NUMBER(1537);
	clinit_mindustry_content_Blocks$155(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$155);
	init_mindustry_content_Blocks$155_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbide-crucible"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbideCrucible = sp[0].o;
	LINE_NUMBER(1556);
	clinit_mindustry_content_Blocks$156(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$156);
	init_mindustry_content_Blocks$156_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slag-centrifuge"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_slagCentrifuge = sp[0].o;
	LINE_NUMBER(1587);
	clinit_mindustry_content_Blocks$157(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$157);
	init_mindustry_content_Blocks$157_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-crucible"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeCrucible = sp[0].o;
	LINE_NUMBER(1623);
	clinit_mindustry_content_Blocks$158(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$158);
	init_mindustry_content_Blocks$158_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cyanogen-synthesizer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cyanogenSynthesizer = sp[0].o;
	LINE_NUMBER(1655);
	clinit_mindustry_content_Blocks$159(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$159);
	init_mindustry_content_Blocks$159_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-synthesizer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseSynthesizer = sp[0].o;
	LINE_NUMBER(1689);
	clinit_mindustry_content_Blocks$160(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$160);
	init_mindustry_content_Blocks$160_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heat-reactor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_heatReactor = sp[0].o;
	LINE_NUMBER(1706);
	frame[0].i = (jint(4));
	LINE_NUMBER(1708);
	clinit_mindustry_content_Blocks$161(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$161);
	init_mindustry_content_Blocks$161_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"copper-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_copperWall = sp[0].o;
	LINE_NUMBER(1714);
	clinit_mindustry_content_Blocks$162(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$162);
	init_mindustry_content_Blocks$162_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"copper-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_copperWallLarge = sp[0].o;
	LINE_NUMBER(1720);
	clinit_mindustry_content_Blocks$163(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$163);
	init_mindustry_content_Blocks$163_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"titanium-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_titaniumWall = sp[0].o;
	LINE_NUMBER(1725);
	clinit_mindustry_content_Blocks$164(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$164);
	init_mindustry_content_Blocks$164_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"titanium-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_titaniumWallLarge = sp[0].o;
	LINE_NUMBER(1731);
	clinit_mindustry_content_Blocks$165(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$165);
	init_mindustry_content_Blocks$165_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plastanium-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_plastaniumWall = sp[0].o;
	LINE_NUMBER(1739);
	clinit_mindustry_content_Blocks$166(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$166);
	init_mindustry_content_Blocks$166_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plastanium-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_plastaniumWallLarge = sp[0].o;
	LINE_NUMBER(1748);
	clinit_mindustry_content_Blocks$167(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$167);
	init_mindustry_content_Blocks$167_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"thorium-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_thoriumWall = sp[0].o;
	LINE_NUMBER(1753);
	clinit_mindustry_content_Blocks$168(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$168);
	init_mindustry_content_Blocks$168_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"thorium-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_thoriumWallLarge = sp[0].o;
	LINE_NUMBER(1759);
	clinit_mindustry_content_Blocks$169(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$169);
	init_mindustry_content_Blocks$169_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseWall = sp[0].o;
	LINE_NUMBER(1766);
	clinit_mindustry_content_Blocks$170(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$170);
	init_mindustry_content_Blocks$170_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseWallLarge = sp[0].o;
	LINE_NUMBER(1774);
	clinit_mindustry_content_Blocks$171(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$171);
	init_mindustry_content_Blocks$171_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeWall = sp[0].o;
	LINE_NUMBER(1780);
	clinit_mindustry_content_Blocks$172(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$172);
	init_mindustry_content_Blocks$172_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeWallLarge = sp[0].o;
	LINE_NUMBER(1787);
	clinit_mindustry_content_Blocks$173(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$173);
	init_mindustry_content_Blocks$173_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"door"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_door = sp[0].o;
	LINE_NUMBER(1792);
	clinit_mindustry_content_Blocks$174(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$174);
	init_mindustry_content_Blocks$174_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"door-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_doorLarge = sp[0].o;
	LINE_NUMBER(1800);
	clinit_mindustry_content_Blocks$175(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$175);
	init_mindustry_content_Blocks$175_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scrap-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scrapWall = sp[0].o;
	LINE_NUMBER(1807);
	clinit_mindustry_content_Blocks$176(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$176);
	init_mindustry_content_Blocks$176_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scrap-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scrapWallLarge = sp[0].o;
	LINE_NUMBER(1815);
	clinit_mindustry_content_Blocks$177(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$177);
	init_mindustry_content_Blocks$177_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scrap-wall-huge"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scrapWallHuge = sp[0].o;
	LINE_NUMBER(1823);
	clinit_mindustry_content_Blocks$178(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$178);
	init_mindustry_content_Blocks$178_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scrap-wall-gigantic"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scrapWallGigantic = sp[0].o;
	LINE_NUMBER(1830);
	clinit_mindustry_content_Blocks$179(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$179);
	init_mindustry_content_Blocks$179_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"thruster"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_thruster = sp[0].o;
	LINE_NUMBER(1836);
	clinit_mindustry_content_Blocks$180(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$180);
	init_mindustry_content_Blocks$180_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beryllium-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_berylliumWall = sp[0].o;
	LINE_NUMBER(1843);
	clinit_mindustry_content_Blocks$181(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$181);
	init_mindustry_content_Blocks$181_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beryllium-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_berylliumWallLarge = sp[0].o;
	LINE_NUMBER(1851);
	clinit_mindustry_content_Blocks$182(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$182);
	init_mindustry_content_Blocks$182_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tungsten-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tungstenWall = sp[0].o;
	LINE_NUMBER(1858);
	clinit_mindustry_content_Blocks$183(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$183);
	init_mindustry_content_Blocks$183_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tungsten-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tungstenWallLarge = sp[0].o;
	LINE_NUMBER(1866);
	clinit_mindustry_content_Blocks$184(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$184);
	init_mindustry_content_Blocks$184_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blast-door"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_blastDoor = sp[0].o;
	LINE_NUMBER(1873);
	clinit_mindustry_content_Blocks$185(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$185);
	init_mindustry_content_Blocks$185_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-surge-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedSurgeWall = sp[0].o;
	LINE_NUMBER(1882);
	clinit_mindustry_content_Blocks$186(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$186);
	init_mindustry_content_Blocks$186_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-surge-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedSurgeWallLarge = sp[0].o;
	LINE_NUMBER(1892);
	clinit_mindustry_content_Blocks$187(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$187);
	init_mindustry_content_Blocks$187_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbide-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbideWall = sp[0].o;
	LINE_NUMBER(1898);
	clinit_mindustry_content_Blocks$188(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$188);
	init_mindustry_content_Blocks$188_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"carbide-wall-large"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_carbideWallLarge = sp[0].o;
	LINE_NUMBER(1905);
	clinit_mindustry_content_Blocks$189(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$189);
	init_mindustry_content_Blocks$189_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shielded-wall"_j))), (frame[0].i));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shieldedWall = sp[0].o;
	LINE_NUMBER(1921);
	clinit_mindustry_content_Blocks$190(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$190);
	init_mindustry_content_Blocks$190_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mender"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mender = sp[0].o;
	LINE_NUMBER(1934);
	clinit_mindustry_content_Blocks$191(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$191);
	init_mindustry_content_Blocks$191_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mend-projector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mendProjector = sp[0].o;
	LINE_NUMBER(1946);
	clinit_mindustry_content_Blocks$192(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$192);
	init_mindustry_content_Blocks$192_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"overdrive-projector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_overdriveProjector = sp[0].o;
	LINE_NUMBER(1954);
	clinit_mindustry_content_Blocks$193(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$193);
	init_mindustry_content_Blocks$193_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"overdrive-dome"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_overdriveDome = sp[0].o;
	LINE_NUMBER(1966);
	clinit_mindustry_content_Blocks$194(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$194);
	init_mindustry_content_Blocks$194_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"force-projector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_forceProjector = sp[0].o;
	LINE_NUMBER(1980);
	clinit_mindustry_content_Blocks$195(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$195);
	init_mindustry_content_Blocks$195_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shock-mine"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shockMine = sp[0].o;
	LINE_NUMBER(1990);
	clinit_mindustry_content_Blocks$196(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$196);
	init_mindustry_content_Blocks$196_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"radar"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_radar = sp[0].o;
	LINE_NUMBER(1999);
	clinit_mindustry_content_Blocks$197(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$197);
	init_mindustry_content_Blocks$197_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"build-tower"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_buildTower = sp[0].o;
	LINE_NUMBER(2011);
	clinit_mindustry_content_Blocks$198(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$198);
	init_mindustry_content_Blocks$198_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"regen-projector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_regenProjector = sp[0].o;
	LINE_NUMBER(2040);
	clinit_mindustry_content_Blocks$199(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$199);
	init_mindustry_content_Blocks$199_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shockwave-tower"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shockwaveTower = sp[0].o;
	LINE_NUMBER(2050);
	clinit_mindustry_content_Blocks$200(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$200);
	init_mindustry_content_Blocks$200_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shield-projector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shieldProjector = sp[0].o;
	LINE_NUMBER(2058);
	clinit_mindustry_content_Blocks$201(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$201);
	init_mindustry_content_Blocks$201_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-shield-projector"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largeShieldProjector = sp[0].o;
	LINE_NUMBER(2070);
	clinit_mindustry_content_Blocks$202(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$202);
	init_mindustry_content_Blocks$202_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_conveyor = sp[0].o;
	LINE_NUMBER(2078);
	clinit_mindustry_content_Blocks$203(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$203);
	init_mindustry_content_Blocks$203_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"titanium-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_titaniumConveyor = sp[0].o;
	LINE_NUMBER(2085);
	clinit_mindustry_content_Blocks$204(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$204);
	init_mindustry_content_Blocks$204_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plastanium-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_plastaniumConveyor = sp[0].o;
	LINE_NUMBER(2092);
	clinit_mindustry_content_Blocks$205(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$205);
	init_mindustry_content_Blocks$205_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"armored-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_armoredConveyor = sp[0].o;
	LINE_NUMBER(2099);
	clinit_mindustry_content_Blocks$206(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$206);
	init_mindustry_content_Blocks$206_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"junction"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_junction = sp[0].o;
	LINE_NUMBER(2107);
	clinit_mindustry_content_Blocks$207(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$207);
	init_mindustry_content_Blocks$207_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bridge-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_itemBridge = sp[0].o;
	LINE_NUMBER(2117);
	clinit_mindustry_content_Blocks$208(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$208);
	init_mindustry_content_Blocks$208_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseConveyor = sp[0].o;
	LINE_NUMBER(2129);
	clinit_mindustry_content_Blocks$209(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$209);
	init_mindustry_content_Blocks$209_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sorter"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sorter = sp[0].o;
	LINE_NUMBER(2134);
	clinit_mindustry_content_Blocks$210(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$210);
	init_mindustry_content_Blocks$210_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"inverted-sorter"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_invertedSorter = sp[0].o;
	LINE_NUMBER(2140);
	clinit_mindustry_content_Blocks$211(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$211);
	init_mindustry_content_Blocks$211_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_router = sp[0].o;
	LINE_NUMBER(2145);
	clinit_mindustry_content_Blocks$212(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$212);
	init_mindustry_content_Blocks$212_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"distributor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_distributor = sp[0].o;
	LINE_NUMBER(2151);
	clinit_mindustry_content_Blocks$213(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$213);
	init_mindustry_content_Blocks$213_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"overflow-gate"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_overflowGate = sp[0].o;
	LINE_NUMBER(2156);
	clinit_mindustry_content_Blocks$214(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$214);
	init_mindustry_content_Blocks$214_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underflow-gate"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_underflowGate = sp[0].o;
	LINE_NUMBER(2162);
	clinit_mindustry_content_Blocks$215(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$215);
	init_mindustry_content_Blocks$215_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unloader"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_unloader = sp[0].o;
	LINE_NUMBER(2168);
	clinit_mindustry_content_Blocks$216(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$216);
	init_mindustry_content_Blocks$216_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mass-driver"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_massDriver = sp[0].o;
	LINE_NUMBER(2179);
	clinit_mindustry_content_Blocks$217(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$217);
	init_mindustry_content_Blocks$217_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"duct"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_duct = sp[0].o;
	LINE_NUMBER(2186);
	clinit_mindustry_content_Blocks$218(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$218);
	init_mindustry_content_Blocks$218_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"armored-duct"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_armoredDuct = sp[0].o;
	LINE_NUMBER(2194);
	clinit_mindustry_content_Blocks$219(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$219);
	init_mindustry_content_Blocks$219_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"duct-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ductRouter = sp[0].o;
	LINE_NUMBER(2203);
	clinit_mindustry_content_Blocks$220(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$220);
	init_mindustry_content_Blocks$220_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"overflow-duct"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_overflowDuct = sp[0].o;
	LINE_NUMBER(2211);
	clinit_mindustry_content_Blocks$221(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$221);
	init_mindustry_content_Blocks$221_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"underflow-duct"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_underflowDuct = sp[0].o;
	LINE_NUMBER(2220);
	clinit_mindustry_content_Blocks$222(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$222);
	init_mindustry_content_Blocks$222_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"duct-bridge"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ductBridge = sp[0].o;
	LINE_NUMBER(2229);
	clinit_mindustry_content_Blocks$223(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$223);
	init_mindustry_content_Blocks$223_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"duct-unloader"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ductUnloader = sp[0].o;
	LINE_NUMBER(2238);
	clinit_mindustry_content_Blocks$224(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$224);
	init_mindustry_content_Blocks$224_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeConveyor = sp[0].o;
	LINE_NUMBER(2256);
	clinit_mindustry_content_Blocks$225(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$225);
	init_mindustry_content_Blocks$225_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeRouter = sp[0].o;
	LINE_NUMBER(2271);
	clinit_mindustry_content_Blocks$226(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$226);
	init_mindustry_content_Blocks$226_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit-cargo-loader"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_unitCargoLoader = sp[0].o;
	LINE_NUMBER(2286);
	clinit_mindustry_content_Blocks$227(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$227);
	init_mindustry_content_Blocks$227_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit-cargo-unload-point"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_unitCargoUnloadPoint = sp[0].o;
	LINE_NUMBER(2299);
	clinit_mindustry_content_Blocks$228(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$228);
	init_mindustry_content_Blocks$228_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mechanical-pump"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mechanicalPump = sp[0].o;
	LINE_NUMBER(2305);
	clinit_mindustry_content_Blocks$229(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$229);
	init_mindustry_content_Blocks$229_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rotary-pump"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rotaryPump = sp[0].o;
	LINE_NUMBER(2314);
	clinit_mindustry_content_Blocks$230(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$230);
	init_mindustry_content_Blocks$230_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"impulse-pump"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_impulsePump = sp[0].o;
	LINE_NUMBER(2323);
	clinit_mindustry_content_Blocks$231(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$231);
	init_mindustry_content_Blocks$231_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_conduit = sp[0].o;
	LINE_NUMBER(2330);
	clinit_mindustry_content_Blocks$232(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$232);
	init_mindustry_content_Blocks$232_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pulse-conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pulseConduit = sp[0].o;
	LINE_NUMBER(2338);
	clinit_mindustry_content_Blocks$233(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$233);
	init_mindustry_content_Blocks$233_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plated-conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_platedConduit = sp[0].o;
	LINE_NUMBER(2346);
	clinit_mindustry_content_Blocks$234(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$234);
	init_mindustry_content_Blocks$234_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_liquidRouter = sp[0].o;
	LINE_NUMBER(2355);
	clinit_mindustry_content_Blocks$235(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$235);
	init_mindustry_content_Blocks$235_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid-container"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_liquidContainer = sp[0].o;
	LINE_NUMBER(2362);
	clinit_mindustry_content_Blocks$236(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$236);
	init_mindustry_content_Blocks$236_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid-tank"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_liquidTank = sp[0].o;
	LINE_NUMBER(2370);
	clinit_mindustry_content_Blocks$237(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$237);
	init_mindustry_content_Blocks$237_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid-junction"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_liquidJunction = sp[0].o;
	LINE_NUMBER(2375);
	clinit_mindustry_content_Blocks$238(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$238);
	init_mindustry_content_Blocks$238_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bridge-conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_bridgeConduit = sp[0].o;
	LINE_NUMBER(2387);
	clinit_mindustry_content_Blocks$239(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$239);
	init_mindustry_content_Blocks$239_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"phase-conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_phaseConduit = sp[0].o;
	LINE_NUMBER(2404);
	clinit_mindustry_content_Blocks$240(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$240);
	init_mindustry_content_Blocks$240_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-pump"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedPump = sp[0].o;
	LINE_NUMBER(2413);
	clinit_mindustry_content_Blocks$241(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$241);
	init_mindustry_content_Blocks$241_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedConduit = sp[0].o;
	LINE_NUMBER(2425);
	clinit_mindustry_content_Blocks$242(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$242);
	init_mindustry_content_Blocks$242_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-liquid-junction"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedLiquidJunction = sp[0].o;
	LINE_NUMBER(2435);
	clinit_mindustry_content_Blocks$243(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$243);
	init_mindustry_content_Blocks$243_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-bridge-conduit"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedBridgeConduit = sp[0].o;
	LINE_NUMBER(2449);
	clinit_mindustry_content_Blocks$244(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$244);
	init_mindustry_content_Blocks$244_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-liquid-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedLiquidRouter = sp[0].o;
	LINE_NUMBER(2461);
	clinit_mindustry_content_Blocks$245(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$245);
	init_mindustry_content_Blocks$245_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-liquid-container"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedLiquidContainer = sp[0].o;
	LINE_NUMBER(2471);
	clinit_mindustry_content_Blocks$246(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$246);
	init_mindustry_content_Blocks$246_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-liquid-tank"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedLiquidTank = sp[0].o;
	LINE_NUMBER(2483);
	clinit_mindustry_content_Blocks$247(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$247);
	init_mindustry_content_Blocks$247_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power-node"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_powerNode = sp[0].o;
	LINE_NUMBER(2491);
	clinit_mindustry_content_Blocks$248(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$248);
	init_mindustry_content_Blocks$248_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power-node-large"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_powerNodeLarge = sp[0].o;
	LINE_NUMBER(2498);
	clinit_mindustry_content_Blocks$249(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$249);
	init_mindustry_content_Blocks$249_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"surge-tower"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_surgeTower = sp[0].o;
	LINE_NUMBER(2506);
	clinit_mindustry_content_Blocks$250(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$250);
	init_mindustry_content_Blocks$250_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"diode"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_diode = sp[0].o;
	LINE_NUMBER(2510);
	clinit_mindustry_content_Blocks$251(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$251);
	init_mindustry_content_Blocks$251_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"battery"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_battery = sp[0].o;
	LINE_NUMBER(2516);
	clinit_mindustry_content_Blocks$252(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$252);
	init_mindustry_content_Blocks$252_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"battery-large"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_batteryLarge = sp[0].o;
	LINE_NUMBER(2523);
	clinit_mindustry_content_Blocks$253(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$253);
	init_mindustry_content_Blocks$253_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"combustion-generator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_combustionGenerator = sp[0].o;
	LINE_NUMBER(2543);
	clinit_mindustry_content_Blocks$254(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$254);
	init_mindustry_content_Blocks$254_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"thermal-generator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_thermalGenerator = sp[0].o;
	LINE_NUMBER(2554);
	clinit_mindustry_content_Blocks$255(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$255);
	init_mindustry_content_Blocks$255_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steam-generator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_steamGenerator = sp[0].o;
	LINE_NUMBER(2589);
	clinit_mindustry_content_Blocks$256(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$256);
	init_mindustry_content_Blocks$256_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"differential-generator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_differentialGenerator = sp[0].o;
	LINE_NUMBER(2606);
	clinit_mindustry_content_Blocks$257(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$257);
	init_mindustry_content_Blocks$257_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rtg-generator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_rtgGenerator = sp[0].o;
	LINE_NUMBER(2619);
	clinit_mindustry_content_Blocks$258(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$258);
	init_mindustry_content_Blocks$258_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"solar-panel"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_solarPanel = sp[0].o;
	LINE_NUMBER(2624);
	clinit_mindustry_content_Blocks$259(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$259);
	init_mindustry_content_Blocks$259_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"solar-panel-large"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largeSolarPanel = sp[0].o;
	LINE_NUMBER(2630);
	clinit_mindustry_content_Blocks$260(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$260);
	init_mindustry_content_Blocks$260_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"thorium-reactor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_thoriumReactor = sp[0].o;
	LINE_NUMBER(2650);
	clinit_mindustry_content_Blocks$261(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$261);
	init_mindustry_content_Blocks$261_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"impact-reactor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_impactReactor = sp[0].o;
	LINE_NUMBER(2667);
	clinit_mindustry_content_Blocks$262(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$262);
	init_mindustry_content_Blocks$262_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beam-node"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_beamNode = sp[0].o;
	LINE_NUMBER(2679);
	clinit_mindustry_content_Blocks$263(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$263);
	init_mindustry_content_Blocks$263_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beam-tower"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_beamTower = sp[0].o;
	LINE_NUMBER(2690);
	clinit_mindustry_content_Blocks$264(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$264);
	init_mindustry_content_Blocks$264_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"beam-link"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_beamLink = sp[0].o;
	LINE_NUMBER(2704);
	clinit_mindustry_content_Blocks$265(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$265);
	init_mindustry_content_Blocks$265_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"turbine-condenser"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_turbineCondenser = sp[0].o;
	LINE_NUMBER(2729);
	clinit_mindustry_content_Blocks$266(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$266);
	init_mindustry_content_Blocks$266_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"chemical-combustion-chamber"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_chemicalCombustionChamber = sp[0].o;
	LINE_NUMBER(2751);
	clinit_mindustry_content_Blocks$267(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$267);
	init_mindustry_content_Blocks$267_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pyrolysis-generator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pyrolysisGenerator = sp[0].o;
	LINE_NUMBER(2781);
	clinit_mindustry_content_Blocks$268(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$268);
	init_mindustry_content_Blocks$268_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"flux-reactor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_fluxReactor = sp[0].o;
	LINE_NUMBER(2817);
	clinit_mindustry_content_Blocks$269(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$269);
	init_mindustry_content_Blocks$269_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"neoplasia-reactor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_neoplasiaReactor = sp[0].o;
	LINE_NUMBER(2884);
	clinit_mindustry_content_Blocks$270(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$270);
	init_mindustry_content_Blocks$270_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mechanical-drill"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mechanicalDrill = sp[0].o;
	LINE_NUMBER(2896);
	clinit_mindustry_content_Blocks$271(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$271);
	init_mindustry_content_Blocks$271_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pneumatic-drill"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_pneumaticDrill = sp[0].o;
	LINE_NUMBER(2905);
	clinit_mindustry_content_Blocks$272(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$272);
	init_mindustry_content_Blocks$272_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"laser-drill"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_laserDrill = sp[0].o;
	LINE_NUMBER(2918);
	clinit_mindustry_content_Blocks$273(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$273);
	init_mindustry_content_Blocks$273_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"blast-drill"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_blastDrill = sp[0].o;
	LINE_NUMBER(2939);
	clinit_mindustry_content_Blocks$274(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$274);
	init_mindustry_content_Blocks$274_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"water-extractor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_waterExtractor = sp[0].o;
	LINE_NUMBER(2952);
	clinit_mindustry_content_Blocks$275(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$275);
	init_mindustry_content_Blocks$275_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cultivator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cultivator = sp[0].o;
	LINE_NUMBER(2983);
	clinit_mindustry_content_Blocks$276(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$276);
	init_mindustry_content_Blocks$276_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"oil-extractor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_oilExtractor = sp[0].o;
	LINE_NUMBER(3000);
	clinit_mindustry_content_Blocks$277(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$277);
	init_mindustry_content_Blocks$277_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vent-condenser"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ventCondenser = sp[0].o;
	LINE_NUMBER(3021);
	clinit_mindustry_content_Blocks$278(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$278);
	init_mindustry_content_Blocks$278_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cliff-crusher"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cliffCrusher = sp[0].o;
	LINE_NUMBER(3035);
	clinit_mindustry_content_Blocks$279(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$279);
	init_mindustry_content_Blocks$279_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-cliff-crusher"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largeCliffCrusher = sp[0].o;
	LINE_NUMBER(3057);
	clinit_mindustry_content_Blocks$280(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$280);
	init_mindustry_content_Blocks$280_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plasma-bore"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_plasmaBore = sp[0].o;
	LINE_NUMBER(3071);
	clinit_mindustry_content_Blocks$281(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$281);
	init_mindustry_content_Blocks$281_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-plasma-bore"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largePlasmaBore = sp[0].o;
	LINE_NUMBER(3089);
	clinit_mindustry_content_Blocks$282(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$282);
	init_mindustry_content_Blocks$282_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"impact-drill"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_impactDrill = sp[0].o;
	LINE_NUMBER(3112);
	clinit_mindustry_content_Blocks$283(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$283);
	init_mindustry_content_Blocks$283_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"eruption-drill"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_eruptionDrill = sp[0].o;
	LINE_NUMBER(3145);
	clinit_mindustry_content_Blocks$284(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$284);
	init_mindustry_content_Blocks$284_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-shard"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreShard = sp[0].o;
	LINE_NUMBER(3159);
	clinit_mindustry_content_Blocks$285(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$285);
	init_mindustry_content_Blocks$285_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-foundation"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreFoundation = sp[0].o;
	LINE_NUMBER(3172);
	clinit_mindustry_content_Blocks$286(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$286);
	init_mindustry_content_Blocks$286_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-nucleus"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreNucleus = sp[0].o;
	LINE_NUMBER(3185);
	clinit_mindustry_content_Blocks$287(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$287);
	init_mindustry_content_Blocks$287_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-bastion"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreBastion = sp[0].o;
	LINE_NUMBER(3207);
	clinit_mindustry_content_Blocks$288(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$288);
	init_mindustry_content_Blocks$288_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-citadel"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreCitadel = sp[0].o;
	LINE_NUMBER(3225);
	clinit_mindustry_content_Blocks$289(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$289);
	init_mindustry_content_Blocks$289_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"core-acropolis"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_coreAcropolis = sp[0].o;
	LINE_NUMBER(3243);
	clinit_mindustry_content_Blocks$290(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$290);
	init_mindustry_content_Blocks$290_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"container"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_container = sp[0].o;
	LINE_NUMBER(3250);
	clinit_mindustry_content_Blocks$291(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$291);
	init_mindustry_content_Blocks$291_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vault"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_vault = sp[0].o;
	LINE_NUMBER(3257);
	clinit_mindustry_content_Blocks$292(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$292);
	init_mindustry_content_Blocks$292_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-container"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedContainer = sp[0].o;
	LINE_NUMBER(3265);
	clinit_mindustry_content_Blocks$293(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$293);
	init_mindustry_content_Blocks$293_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-vault"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedVault = sp[0].o;
	LINE_NUMBER(3276);
	clinit_mindustry_content_Blocks$294(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$294);
	init_mindustry_content_Blocks$294_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"duo"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_duo = sp[0].o;
	LINE_NUMBER(3351);
	clinit_mindustry_content_Blocks$295(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$295);
	init_mindustry_content_Blocks$295_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scatter"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scatter = sp[0].o;
	LINE_NUMBER(3437);
	clinit_mindustry_content_Blocks$296(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$296);
	init_mindustry_content_Blocks$296_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scorch"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scorch = sp[0].o;
	LINE_NUMBER(3481);
	clinit_mindustry_content_Blocks$297(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$297);
	init_mindustry_content_Blocks$297_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hail"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_hail = sp[0].o;
	LINE_NUMBER(3547);
	clinit_mindustry_content_Blocks$298(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$298);
	init_mindustry_content_Blocks$298_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wave"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_wave = sp[0].o;
	LINE_NUMBER(3579);
	clinit_mindustry_content_Blocks$299(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$299);
	init_mindustry_content_Blocks$299_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lancer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_lancer = sp[0].o;
	LINE_NUMBER(3620);
	clinit_mindustry_content_Blocks$300(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$300);
	init_mindustry_content_Blocks$300_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arc"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_arc = sp[0].o;
	LINE_NUMBER(3662);
	clinit_mindustry_content_Blocks$301(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$301);
	init_mindustry_content_Blocks$301_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"parallax"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_parallax = sp[0].o;
	LINE_NUMBER(3677);
	clinit_mindustry_content_Blocks$302(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$302);
	init_mindustry_content_Blocks$302_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"swarmer"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_swarmer = sp[0].o;
	LINE_NUMBER(3753);
	clinit_mindustry_content_Blocks$303(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$303);
	init_mindustry_content_Blocks$303_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"salvo"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_salvo = sp[0].o;
	LINE_NUMBER(3858);
	clinit_mindustry_content_Blocks$304(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$304);
	init_mindustry_content_Blocks$304_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"segment"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_segment = sp[0].o;
	LINE_NUMBER(3872);
	clinit_mindustry_content_Blocks$305(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$305);
	init_mindustry_content_Blocks$305_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tsunami"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tsunami = sp[0].o;
	LINE_NUMBER(3937);
	clinit_mindustry_content_Blocks$306(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$306);
	init_mindustry_content_Blocks$306_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fuse"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_fuse = sp[0].o;
	LINE_NUMBER(3977);
	clinit_mindustry_content_Blocks$307(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$307);
	init_mindustry_content_Blocks$307_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ripple"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_ripple = sp[0].o;
	LINE_NUMBER(4110);
	clinit_mindustry_content_Blocks$308(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$308);
	init_mindustry_content_Blocks$308_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cyclone"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_cyclone = sp[0].o;
	LINE_NUMBER(4228);
	clinit_mindustry_content_Blocks$309(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$309);
	init_mindustry_content_Blocks$309_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"foreshadow"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_foreshadow = sp[0].o;
	LINE_NUMBER(4273);
	clinit_mindustry_content_Blocks$310(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$310);
	init_mindustry_content_Blocks$310_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spectre"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_spectre = sp[0].o;
	LINE_NUMBER(4341);
	clinit_mindustry_content_Blocks$311(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$311);
	init_mindustry_content_Blocks$311_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"meltdown"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_meltdown = sp[0].o;
	LINE_NUMBER(4378);
	clinit_mindustry_content_Blocks$312(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$312);
	init_mindustry_content_Blocks$312_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"breach"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_breach = sp[0].o;
	LINE_NUMBER(4490);
	clinit_mindustry_content_Blocks$313(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$313);
	init_mindustry_content_Blocks$313_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"diffuse"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_diffuse = sp[0].o;
	LINE_NUMBER(4580);
	clinit_mindustry_content_Blocks$314(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$314);
	init_mindustry_content_Blocks$314_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sublimate"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_sublimate = sp[0].o;
	LINE_NUMBER(4666);
	clinit_mindustry_content_Blocks$315(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$315);
	init_mindustry_content_Blocks$315_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"titan"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_titan = sp[0].o;
	LINE_NUMBER(4873);
	clinit_mindustry_content_Blocks$316(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$316);
	init_mindustry_content_Blocks$316_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"disperse"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_disperse = sp[0].o;
	LINE_NUMBER(5057);
	clinit_mindustry_content_Blocks$317(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$317);
	init_mindustry_content_Blocks$317_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"afflict"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_afflict = sp[0].o;
	LINE_NUMBER(5180);
	clinit_mindustry_content_Blocks$318(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$318);
	init_mindustry_content_Blocks$318_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lustre"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_lustre = sp[0].o;
	LINE_NUMBER(5245);
	clinit_mindustry_content_Blocks$319(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$319);
	init_mindustry_content_Blocks$319_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scathe"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_scathe = sp[0].o;
	LINE_NUMBER(5689);
	clinit_mindustry_content_Blocks$320(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$320);
	init_mindustry_content_Blocks$320_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"smite"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_smite = sp[0].o;
	LINE_NUMBER(5959);
	clinit_mindustry_content_Blocks$321(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$321);
	init_mindustry_content_Blocks$321_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"malign"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_malign = sp[0].o;
	LINE_NUMBER(6302);
	clinit_mindustry_content_Blocks$322(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$322);
	init_mindustry_content_Blocks$322_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ground-factory"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_groundFactory = sp[0].o;
	LINE_NUMBER(6314);
	clinit_mindustry_content_Blocks$323(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$323);
	init_mindustry_content_Blocks$323_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"air-factory"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_airFactory = sp[0].o;
	LINE_NUMBER(6325);
	clinit_mindustry_content_Blocks$324(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$324);
	init_mindustry_content_Blocks$324_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"naval-factory"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_navalFactory = sp[0].o;
	LINE_NUMBER(6336);
	clinit_mindustry_content_Blocks$325(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$325);
	init_mindustry_content_Blocks$325_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"additive-reconstructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_additiveReconstructor = sp[0].o;
	LINE_NUMBER(6356);
	clinit_mindustry_content_Blocks$326(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$326);
	init_mindustry_content_Blocks$326_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"multiplicative-reconstructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_multiplicativeReconstructor = sp[0].o;
	LINE_NUMBER(6376);
	clinit_mindustry_content_Blocks$327(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$327);
	init_mindustry_content_Blocks$327_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"exponential-reconstructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_exponentialReconstructor = sp[0].o;
	LINE_NUMBER(6398);
	clinit_mindustry_content_Blocks$328(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$328);
	init_mindustry_content_Blocks$328_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tetrative-reconstructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tetrativeReconstructor = sp[0].o;
	LINE_NUMBER(6420);
	clinit_mindustry_content_Blocks$329(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$329);
	init_mindustry_content_Blocks$329_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"repair-point"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_repairPoint = sp[0].o;
	LINE_NUMBER(6430);
	clinit_mindustry_content_Blocks$330(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$330);
	init_mindustry_content_Blocks$330_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"repair-turret"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_repairTurret = sp[0].o;
	LINE_NUMBER(6448);
	clinit_mindustry_content_Blocks$331(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$331);
	init_mindustry_content_Blocks$331_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tank-fabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tankFabricator = sp[0].o;
	LINE_NUMBER(6459);
	clinit_mindustry_content_Blocks$332(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$332);
	init_mindustry_content_Blocks$332_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ship-fabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shipFabricator = sp[0].o;
	LINE_NUMBER(6471);
	clinit_mindustry_content_Blocks$333(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$333);
	init_mindustry_content_Blocks$333_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mech-fabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mechFabricator = sp[0].o;
	LINE_NUMBER(6482);
	clinit_mindustry_content_Blocks$334(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$334);
	init_mindustry_content_Blocks$334_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tank-refabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tankRefabricator = sp[0].o;
	LINE_NUMBER(6500);
	clinit_mindustry_content_Blocks$335(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$335);
	init_mindustry_content_Blocks$335_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ship-refabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shipRefabricator = sp[0].o;
	LINE_NUMBER(6519);
	clinit_mindustry_content_Blocks$336(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$336);
	init_mindustry_content_Blocks$336_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mech-refabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mechRefabricator = sp[0].o;
	LINE_NUMBER(6537);
	clinit_mindustry_content_Blocks$337(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$337);
	init_mindustry_content_Blocks$337_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prime-refabricator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_primeRefabricator = sp[0].o;
	LINE_NUMBER(6558);
	clinit_mindustry_content_Blocks$338(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$338);
	init_mindustry_content_Blocks$338_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tank-assembler"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tankAssembler = sp[0].o;
	LINE_NUMBER(6573);
	clinit_mindustry_content_Blocks$339(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$339);
	init_mindustry_content_Blocks$339_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ship-assembler"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_shipAssembler = sp[0].o;
	LINE_NUMBER(6587);
	clinit_mindustry_content_Blocks$340(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$340);
	init_mindustry_content_Blocks$340_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mech-assembler"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_mechAssembler = sp[0].o;
	LINE_NUMBER(6603);
	clinit_mindustry_content_Blocks$341(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$341);
	init_mindustry_content_Blocks$341_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"basic-assembler-module"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_basicAssemblerModule = sp[0].o;
	LINE_NUMBER(6612);
	clinit_mindustry_content_Blocks$342(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$342);
	init_mindustry_content_Blocks$342_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unit-repair-tower"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_unitRepairTower = sp[0].o;
	LINE_NUMBER(6626);
	clinit_mindustry_content_Blocks$343(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$343);
	init_mindustry_content_Blocks$343_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadConveyor = sp[0].o;
	LINE_NUMBER(6631);
	clinit_mindustry_content_Blocks$344(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$344);
	init_mindustry_content_Blocks$344_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadRouter = sp[0].o;
	LINE_NUMBER(6636);
	clinit_mindustry_content_Blocks$345(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$345);
	init_mindustry_content_Blocks$345_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-payload-conveyor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedPayloadConveyor = sp[0].o;
	LINE_NUMBER(6645);
	clinit_mindustry_content_Blocks$346(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$346);
	init_mindustry_content_Blocks$346_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-payload-router"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedPayloadRouter = sp[0].o;
	LINE_NUMBER(6654);
	clinit_mindustry_content_Blocks$347(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$347);
	init_mindustry_content_Blocks$347_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-mass-driver"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadMassDriver = sp[0].o;
	LINE_NUMBER(6666);
	clinit_mindustry_content_Blocks$348(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$348);
	init_mindustry_content_Blocks$348_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-payload-mass-driver"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largePayloadMassDriver = sp[0].o;
	LINE_NUMBER(6677);
	clinit_mindustry_content_Blocks$349(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$349);
	init_mindustry_content_Blocks$349_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"small-deconstructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_smallDeconstructor = sp[0].o;
	LINE_NUMBER(6691);
	clinit_mindustry_content_Blocks$350(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$350);
	init_mindustry_content_Blocks$350_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"deconstructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_deconstructor = sp[0].o;
	LINE_NUMBER(6702);
	clinit_mindustry_content_Blocks$351(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$351);
	init_mindustry_content_Blocks$351_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"constructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_constructor = sp[0].o;
	LINE_NUMBER(6714);
	clinit_mindustry_content_Blocks$352(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$352);
	init_mindustry_content_Blocks$352_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-constructor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largeConstructor = sp[0].o;
	LINE_NUMBER(6726);
	clinit_mindustry_content_Blocks$353(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$353);
	init_mindustry_content_Blocks$353_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-loader"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadLoader = sp[0].o;
	LINE_NUMBER(6735);
	clinit_mindustry_content_Blocks$354(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$354);
	init_mindustry_content_Blocks$354_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-unloader"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadUnloader = sp[0].o;
	LINE_NUMBER(6747);
	clinit_mindustry_content_Blocks$355(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$355);
	init_mindustry_content_Blocks$355_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power-source"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_powerSource = sp[0].o;
	LINE_NUMBER(6753);
	clinit_mindustry_content_Blocks$356(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$356);
	init_mindustry_content_Blocks$356_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"power-void"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_powerVoid = sp[0].o;
	LINE_NUMBER(6758);
	clinit_mindustry_content_Blocks$357(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$357);
	init_mindustry_content_Blocks$357_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item-source"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_itemSource = sp[0].o;
	LINE_NUMBER(6763);
	clinit_mindustry_content_Blocks$358(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$358);
	init_mindustry_content_Blocks$358_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item-void"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_itemVoid = sp[0].o;
	LINE_NUMBER(6768);
	clinit_mindustry_content_Blocks$359(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$359);
	init_mindustry_content_Blocks$359_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid-source"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_liquidSource = sp[0].o;
	LINE_NUMBER(6774);
	clinit_mindustry_content_Blocks$360(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$360);
	init_mindustry_content_Blocks$360_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"liquid-void"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_liquidVoid = sp[0].o;
	LINE_NUMBER(6780);
	clinit_mindustry_content_Blocks$361(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$361);
	init_mindustry_content_Blocks$361_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-source"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadSource = sp[0].o;
	LINE_NUMBER(6786);
	clinit_mindustry_content_Blocks$362(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$362);
	init_mindustry_content_Blocks$362_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"payload-void"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_payloadVoid = sp[0].o;
	LINE_NUMBER(6792);
	clinit_mindustry_content_Blocks$363(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$363);
	init_mindustry_content_Blocks$363_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"heat-source"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_heatSource = sp[0].o;
	LINE_NUMBER(6806);
	clinit_mindustry_content_Blocks$364(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$364);
	init_mindustry_content_Blocks$364_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"target-dummy"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_targetDummy = sp[0].o;
	LINE_NUMBER(6813);
	clinit_mindustry_content_Blocks$365(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$365);
	init_mindustry_content_Blocks$365_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"illuminator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_illuminator = sp[0].o;
	LINE_NUMBER(6824);
	clinit_mindustry_world_blocks_legacy_LegacyMechPad(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_legacy_LegacyMechPad);
	init_mindustry_world_blocks_legacy_LegacyMechPad_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"legacy-mech-pad"_j))));
	LINE_NUMBER(6825);
	clinit_mindustry_world_blocks_legacy_LegacyUnitFactory(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_legacy_LegacyUnitFactory);
	init_mindustry_world_blocks_legacy_LegacyUnitFactory_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory"_j))));
	LINE_NUMBER(6826);
	clinit_mindustry_content_Blocks$366(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$366);
	init_mindustry_content_Blocks$366_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory-air"_j))));
	LINE_NUMBER(6829);
	clinit_mindustry_content_Blocks$367(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$367);
	init_mindustry_content_Blocks$367_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"legacy-unit-factory-ground"_j))));
	LINE_NUMBER(6833);
	clinit_mindustry_content_Blocks$368(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$368);
	init_mindustry_content_Blocks$368_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"command-center"_j))));
	LINE_NUMBER(6840);
	clinit_mindustry_content_Blocks$369(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$369);
	init_mindustry_content_Blocks$369_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"launch-pad"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_launchPad = sp[0].o;
	LINE_NUMBER(6850);
	clinit_mindustry_content_Blocks$370(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$370);
	init_mindustry_content_Blocks$370_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"advanced-launch-pad"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_advancedLaunchPad = sp[0].o;
	LINE_NUMBER(6862);
	clinit_mindustry_content_Blocks$371(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$371);
	init_mindustry_content_Blocks$371_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"landing-pad"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_landingPad = sp[0].o;
	LINE_NUMBER(6873);
	clinit_mindustry_content_Blocks$372(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$372);
	init_mindustry_content_Blocks$372_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"interplanetary-accelerator"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_interplanetaryAccelerator = sp[0].o;
	LINE_NUMBER(6887);
	clinit_mindustry_content_Blocks$373(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$373);
	init_mindustry_content_Blocks$373_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"message"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_message = sp[0].o;
	LINE_NUMBER(6891);
	clinit_mindustry_content_Blocks$374(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$374);
	init_mindustry_content_Blocks$374_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"switch"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_switchBlock = sp[0].o;
	LINE_NUMBER(6895);
	clinit_mindustry_content_Blocks$375(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$375);
	init_mindustry_content_Blocks$375_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"micro-processor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_microProcessor = sp[0].o;
	LINE_NUMBER(6902);
	clinit_mindustry_content_Blocks$376(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$376);
	init_mindustry_content_Blocks$376_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logic-processor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_logicProcessor = sp[0].o;
	LINE_NUMBER(6910);
	clinit_mindustry_content_Blocks$377(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$377);
	init_mindustry_content_Blocks$377_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hyper-processor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_hyperProcessor = sp[0].o;
	LINE_NUMBER(6921);
	clinit_mindustry_content_Blocks$378(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$378);
	init_mindustry_content_Blocks$378_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memory-cell"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_memoryCell = sp[0].o;
	LINE_NUMBER(6927);
	clinit_mindustry_content_Blocks$379(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$379);
	init_mindustry_content_Blocks$379_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"memory-bank"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_memoryBank = sp[0].o;
	LINE_NUMBER(6934);
	clinit_mindustry_content_Blocks$380(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$380);
	init_mindustry_content_Blocks$380_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"logic-display"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_logicDisplay = sp[0].o;
	LINE_NUMBER(6942);
	clinit_mindustry_content_Blocks$381(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$381);
	init_mindustry_content_Blocks$381_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-logic-display"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largeLogicDisplay = sp[0].o;
	LINE_NUMBER(6950);
	clinit_mindustry_content_Blocks$382(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$382);
	init_mindustry_content_Blocks$382_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"tile-logic-display"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_tileLogicDisplay = sp[0].o;
	LINE_NUMBER(6954);
	clinit_mindustry_content_Blocks$383(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$383);
	init_mindustry_content_Blocks$383_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"canvas"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_canvas = sp[0].o;
	LINE_NUMBER(6963);
	clinit_mindustry_content_Blocks$384(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$384);
	init_mindustry_content_Blocks$384_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"large-canvas"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_largeCanvas = sp[0].o;
	LINE_NUMBER(6992);
	clinit_mindustry_content_Blocks$385(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$385);
	init_mindustry_content_Blocks$385_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"reinforced-message"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_reinforcedMessage = sp[0].o;
	LINE_NUMBER(6998);
	clinit_mindustry_content_Blocks$386(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$386);
	init_mindustry_content_Blocks$386_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"world-processor"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_worldProcessor = sp[0].o;
	LINE_NUMBER(7011);
	clinit_mindustry_content_Blocks$387(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$387);
	init_mindustry_content_Blocks$387_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"world-cell"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_worldCell = sp[0].o;
	LINE_NUMBER(7020);
	clinit_mindustry_content_Blocks$388(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$388);
	init_mindustry_content_Blocks$388_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"world-message"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_worldMessage = sp[0].o;
	LINE_NUMBER(7027);
	clinit_mindustry_content_Blocks$389(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_Blocks$389);
	init_mindustry_content_Blocks$389_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"world-switch"_j))));
	clinit_mindustry_content_Blocks(ctx);
	SF_mindustry_content_Blocks_worldSwitch = sp[0].o;
	LINE_NUMBER(7035);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Blocks_lambda$load$0_mindustry_world_Block(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks:lambda$load$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_darkMetal;
	((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_wall = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
};

static FieldMetadata fields[] {
	{ "air", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_air, "Lmindustry/world/Block;", 9 },
	{ "spawn", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_spawn, "Lmindustry/world/Block;", 9 },
	{ "removeWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_removeWall, "Lmindustry/world/Block;", 9 },
	{ "removeOre", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_removeOre, "Lmindustry/world/Block;", 9 },
	{ "cliff", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cliff, "Lmindustry/world/Block;", 9 },
	{ "deepwater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_deepwater, "Lmindustry/world/Block;", 9 },
	{ "water", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_water, "Lmindustry/world/Block;", 9 },
	{ "taintedWater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_taintedWater, "Lmindustry/world/Block;", 9 },
	{ "deepTaintedWater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_deepTaintedWater, "Lmindustry/world/Block;", 9 },
	{ "tar", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tar, "Lmindustry/world/Block;", 9 },
	{ "slag", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_slag, "Lmindustry/world/Block;", 9 },
	{ "cryofluid", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cryofluid, "Lmindustry/world/Block;", 9 },
	{ "stone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_stone, "Lmindustry/world/Block;", 9 },
	{ "craters", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_craters, "Lmindustry/world/Block;", 9 },
	{ "charr", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_charr, "Lmindustry/world/Block;", 9 },
	{ "sand", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sand, "Lmindustry/world/Block;", 9 },
	{ "darksand", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darksand, "Lmindustry/world/Block;", 9 },
	{ "dirt", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_dirt, "Lmindustry/world/Block;", 9 },
	{ "mud", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mud, "Lmindustry/world/Block;", 9 },
	{ "ice", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ice, "Lmindustry/world/Block;", 9 },
	{ "snow", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_snow, "Lmindustry/world/Block;", 9 },
	{ "darksandTaintedWater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darksandTaintedWater, "Lmindustry/world/Block;", 9 },
	{ "space", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_space, "Lmindustry/world/Block;", 9 },
	{ "empty", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_empty, "Lmindustry/world/Block;", 9 },
	{ "dacite", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_dacite, "Lmindustry/world/Block;", 9 },
	{ "rhyolite", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rhyolite, "Lmindustry/world/Block;", 9 },
	{ "rhyoliteCrater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rhyoliteCrater, "Lmindustry/world/Block;", 9 },
	{ "roughRhyolite", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_roughRhyolite, "Lmindustry/world/Block;", 9 },
	{ "regolith", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_regolith, "Lmindustry/world/Block;", 9 },
	{ "yellowStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_yellowStone, "Lmindustry/world/Block;", 9 },
	{ "redIce", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redIce, "Lmindustry/world/Block;", 9 },
	{ "redStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redStone, "Lmindustry/world/Block;", 9 },
	{ "denseRedStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_denseRedStone, "Lmindustry/world/Block;", 9 },
	{ "arkyciteFloor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_arkyciteFloor, "Lmindustry/world/Block;", 9 },
	{ "arkyicStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_arkyicStone, "Lmindustry/world/Block;", 9 },
	{ "redmat", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redmat, "Lmindustry/world/Block;", 9 },
	{ "bluemat", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_bluemat, "Lmindustry/world/Block;", 9 },
	{ "stoneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_stoneWall, "Lmindustry/world/Block;", 9 },
	{ "dirtWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_dirtWall, "Lmindustry/world/Block;", 9 },
	{ "sporeWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sporeWall, "Lmindustry/world/Block;", 9 },
	{ "iceWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_iceWall, "Lmindustry/world/Block;", 9 },
	{ "daciteWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_daciteWall, "Lmindustry/world/Block;", 9 },
	{ "sporePine", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sporePine, "Lmindustry/world/Block;", 9 },
	{ "snowPine", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_snowPine, "Lmindustry/world/Block;", 9 },
	{ "pine", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pine, "Lmindustry/world/Block;", 9 },
	{ "shrubs", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shrubs, "Lmindustry/world/Block;", 9 },
	{ "whiteTree", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_whiteTree, "Lmindustry/world/Block;", 9 },
	{ "whiteTreeDead", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_whiteTreeDead, "Lmindustry/world/Block;", 9 },
	{ "sporeCluster", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sporeCluster, "Lmindustry/world/Block;", 9 },
	{ "redweed", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redweed, "Lmindustry/world/Block;", 9 },
	{ "purbush", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_purbush, "Lmindustry/world/Block;", 9 },
	{ "yellowCoral", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_yellowCoral, "Lmindustry/world/Block;", 9 },
	{ "rhyoliteVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rhyoliteVent, "Lmindustry/world/Block;", 9 },
	{ "carbonVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbonVent, "Lmindustry/world/Block;", 9 },
	{ "arkyicVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_arkyicVent, "Lmindustry/world/Block;", 9 },
	{ "yellowStoneVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_yellowStoneVent, "Lmindustry/world/Block;", 9 },
	{ "redStoneVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redStoneVent, "Lmindustry/world/Block;", 9 },
	{ "crystallineVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystallineVent, "Lmindustry/world/Block;", 9 },
	{ "stoneVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_stoneVent, "Lmindustry/world/Block;", 9 },
	{ "basaltVent", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_basaltVent, "Lmindustry/world/Block;", 9 },
	{ "regolithWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_regolithWall, "Lmindustry/world/Block;", 9 },
	{ "yellowStoneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_yellowStoneWall, "Lmindustry/world/Block;", 9 },
	{ "rhyoliteWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rhyoliteWall, "Lmindustry/world/Block;", 9 },
	{ "carbonWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbonWall, "Lmindustry/world/Block;", 9 },
	{ "redIceWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redIceWall, "Lmindustry/world/Block;", 9 },
	{ "ferricStoneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ferricStoneWall, "Lmindustry/world/Block;", 9 },
	{ "beryllicStoneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_beryllicStoneWall, "Lmindustry/world/Block;", 9 },
	{ "arkyicWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_arkyicWall, "Lmindustry/world/Block;", 9 },
	{ "crystallineStoneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystallineStoneWall, "Lmindustry/world/Block;", 9 },
	{ "redStoneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redStoneWall, "Lmindustry/world/Block;", 9 },
	{ "redDiamondWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redDiamondWall, "Lmindustry/world/Block;", 9 },
	{ "ferricStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ferricStone, "Lmindustry/world/Block;", 9 },
	{ "ferricCraters", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ferricCraters, "Lmindustry/world/Block;", 9 },
	{ "carbonStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbonStone, "Lmindustry/world/Block;", 9 },
	{ "beryllicStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_beryllicStone, "Lmindustry/world/Block;", 9 },
	{ "crystallineStone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystallineStone, "Lmindustry/world/Block;", 9 },
	{ "crystalFloor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystalFloor, "Lmindustry/world/Block;", 9 },
	{ "yellowStonePlates", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_yellowStonePlates, "Lmindustry/world/Block;", 9 },
	{ "iceSnow", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_iceSnow, "Lmindustry/world/Block;", 9 },
	{ "sandWater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sandWater, "Lmindustry/world/Block;", 9 },
	{ "darksandWater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darksandWater, "Lmindustry/world/Block;", 9 },
	{ "duneWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_duneWall, "Lmindustry/world/Block;", 9 },
	{ "sandWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sandWall, "Lmindustry/world/Block;", 9 },
	{ "moss", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_moss, "Lmindustry/world/Block;", 9 },
	{ "sporeMoss", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sporeMoss, "Lmindustry/world/Block;", 9 },
	{ "shale", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shale, "Lmindustry/world/Block;", 9 },
	{ "shaleWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shaleWall, "Lmindustry/world/Block;", 9 },
	{ "grass", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_grass, "Lmindustry/world/Block;", 9 },
	{ "salt", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_salt, "Lmindustry/world/Block;", 9 },
	{ "coreZone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreZone, "Lmindustry/world/Block;", 9 },
	{ "shaleBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shaleBoulder, "Lmindustry/world/Block;", 9 },
	{ "sandBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sandBoulder, "Lmindustry/world/Block;", 9 },
	{ "daciteBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_daciteBoulder, "Lmindustry/world/Block;", 9 },
	{ "boulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_boulder, "Lmindustry/world/Block;", 9 },
	{ "snowBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_snowBoulder, "Lmindustry/world/Block;", 9 },
	{ "basaltBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_basaltBoulder, "Lmindustry/world/Block;", 9 },
	{ "carbonBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbonBoulder, "Lmindustry/world/Block;", 9 },
	{ "ferricBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ferricBoulder, "Lmindustry/world/Block;", 9 },
	{ "beryllicBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_beryllicBoulder, "Lmindustry/world/Block;", 9 },
	{ "yellowStoneBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_yellowStoneBoulder, "Lmindustry/world/Block;", 9 },
	{ "arkyicBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_arkyicBoulder, "Lmindustry/world/Block;", 9 },
	{ "crystalCluster", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystalCluster, "Lmindustry/world/Block;", 9 },
	{ "vibrantCrystalCluster", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_vibrantCrystalCluster, "Lmindustry/world/Block;", 9 },
	{ "crystalBlocks", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystalBlocks, "Lmindustry/world/Block;", 9 },
	{ "crystalOrbs", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystalOrbs, "Lmindustry/world/Block;", 9 },
	{ "crystallineBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_crystallineBoulder, "Lmindustry/world/Block;", 9 },
	{ "redIceBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redIceBoulder, "Lmindustry/world/Block;", 9 },
	{ "rhyoliteBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rhyoliteBoulder, "Lmindustry/world/Block;", 9 },
	{ "redStoneBoulder", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_redStoneBoulder, "Lmindustry/world/Block;", 9 },
	{ "metalFloor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalFloor, "Lmindustry/world/Block;", 9 },
	{ "metalFloorDamaged", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalFloorDamaged, "Lmindustry/world/Block;", 9 },
	{ "metalFloor2", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalFloor2, "Lmindustry/world/Block;", 9 },
	{ "metalFloor3", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalFloor3, "Lmindustry/world/Block;", 9 },
	{ "metalFloor4", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalFloor4, "Lmindustry/world/Block;", 9 },
	{ "metalFloor5", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalFloor5, "Lmindustry/world/Block;", 9 },
	{ "basalt", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_basalt, "Lmindustry/world/Block;", 9 },
	{ "magmarock", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_magmarock, "Lmindustry/world/Block;", 9 },
	{ "hotrock", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_hotrock, "Lmindustry/world/Block;", 9 },
	{ "snowWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_snowWall, "Lmindustry/world/Block;", 9 },
	{ "saltWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_saltWall, "Lmindustry/world/Block;", 9 },
	{ "darkPanel1", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkPanel1, "Lmindustry/world/Block;", 9 },
	{ "darkPanel2", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkPanel2, "Lmindustry/world/Block;", 9 },
	{ "darkPanel3", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkPanel3, "Lmindustry/world/Block;", 9 },
	{ "darkPanel4", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkPanel4, "Lmindustry/world/Block;", 9 },
	{ "darkPanel5", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkPanel5, "Lmindustry/world/Block;", 9 },
	{ "darkPanel6", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkPanel6, "Lmindustry/world/Block;", 9 },
	{ "darkMetal", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_darkMetal, "Lmindustry/world/Block;", 9 },
	{ "metalTiles1", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles1, "Lmindustry/world/Block;", 9 },
	{ "metalTiles2", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles2, "Lmindustry/world/Block;", 9 },
	{ "metalTiles3", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles3, "Lmindustry/world/Block;", 9 },
	{ "metalTiles4", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles4, "Lmindustry/world/Block;", 9 },
	{ "metalTiles5", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles5, "Lmindustry/world/Block;", 9 },
	{ "metalTiles6", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles6, "Lmindustry/world/Block;", 9 },
	{ "metalTiles7", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles7, "Lmindustry/world/Block;", 9 },
	{ "metalTiles8", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles8, "Lmindustry/world/Block;", 9 },
	{ "metalTiles9", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles9, "Lmindustry/world/Block;", 9 },
	{ "metalTiles10", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles10, "Lmindustry/world/Block;", 9 },
	{ "metalTiles11", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles11, "Lmindustry/world/Block;", 9 },
	{ "metalTiles12", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles12, "Lmindustry/world/Block;", 9 },
	{ "metalTiles13", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalTiles13, "Lmindustry/world/Block;", 9 },
	{ "metalWall1", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalWall1, "Lmindustry/world/Block;", 9 },
	{ "metalWall2", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalWall2, "Lmindustry/world/Block;", 9 },
	{ "metalWall3", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_metalWall3, "Lmindustry/world/Block;", 9 },
	{ "coloredFloor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coloredFloor, "Lmindustry/world/Block;", 9 },
	{ "coloredWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coloredWall, "Lmindustry/world/Block;", 9 },
	{ "characterOverlayGray", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_characterOverlayGray, "Lmindustry/world/Block;", 9 },
	{ "characterOverlayWhite", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_characterOverlayWhite, "Lmindustry/world/Block;", 9 },
	{ "runeOverlay", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_runeOverlay, "Lmindustry/world/Block;", 9 },
	{ "cruxRuneOverlay", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cruxRuneOverlay, "Lmindustry/world/Block;", 9 },
	{ "pebbles", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pebbles, "Lmindustry/world/Block;", 9 },
	{ "tendrils", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tendrils, "Lmindustry/world/Block;", 9 },
	{ "oreCopper", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreCopper, "Lmindustry/world/Block;", 9 },
	{ "oreLead", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreLead, "Lmindustry/world/Block;", 9 },
	{ "oreScrap", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreScrap, "Lmindustry/world/Block;", 9 },
	{ "oreCoal", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreCoal, "Lmindustry/world/Block;", 9 },
	{ "oreTitanium", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreTitanium, "Lmindustry/world/Block;", 9 },
	{ "oreThorium", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreThorium, "Lmindustry/world/Block;", 9 },
	{ "oreBeryllium", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreBeryllium, "Lmindustry/world/Block;", 9 },
	{ "oreTungsten", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreTungsten, "Lmindustry/world/Block;", 9 },
	{ "oreCrystalThorium", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oreCrystalThorium, "Lmindustry/world/Block;", 9 },
	{ "wallOreThorium", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_wallOreThorium, "Lmindustry/world/Block;", 9 },
	{ "wallOreBeryllium", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_wallOreBeryllium, "Lmindustry/world/Block;", 9 },
	{ "graphiticWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_graphiticWall, "Lmindustry/world/Block;", 9 },
	{ "wallOreGraphite", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_wallOreGraphite, "Lmindustry/world/Block;", 9 },
	{ "wallOreTungsten", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_wallOreTungsten, "Lmindustry/world/Block;", 9 },
	{ "siliconSmelter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_siliconSmelter, "Lmindustry/world/Block;", 9 },
	{ "siliconCrucible", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_siliconCrucible, "Lmindustry/world/Block;", 9 },
	{ "kiln", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_kiln, "Lmindustry/world/Block;", 9 },
	{ "graphitePress", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_graphitePress, "Lmindustry/world/Block;", 9 },
	{ "plastaniumCompressor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_plastaniumCompressor, "Lmindustry/world/Block;", 9 },
	{ "multiPress", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_multiPress, "Lmindustry/world/Block;", 9 },
	{ "phaseWeaver", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseWeaver, "Lmindustry/world/Block;", 9 },
	{ "surgeSmelter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeSmelter, "Lmindustry/world/Block;", 9 },
	{ "pyratiteMixer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pyratiteMixer, "Lmindustry/world/Block;", 9 },
	{ "blastMixer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_blastMixer, "Lmindustry/world/Block;", 9 },
	{ "cryofluidMixer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cryofluidMixer, "Lmindustry/world/Block;", 9 },
	{ "melter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_melter, "Lmindustry/world/Block;", 9 },
	{ "separator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_separator, "Lmindustry/world/Block;", 9 },
	{ "disassembler", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_disassembler, "Lmindustry/world/Block;", 9 },
	{ "sporePress", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sporePress, "Lmindustry/world/Block;", 9 },
	{ "pulverizer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pulverizer, "Lmindustry/world/Block;", 9 },
	{ "incinerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_incinerator, "Lmindustry/world/Block;", 9 },
	{ "coalCentrifuge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coalCentrifuge, "Lmindustry/world/Block;", 9 },
	{ "siliconArcFurnace", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_siliconArcFurnace, "Lmindustry/world/Block;", 9 },
	{ "electrolyzer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_electrolyzer, "Lmindustry/world/Block;", 9 },
	{ "oxidationChamber", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oxidationChamber, "Lmindustry/world/Block;", 9 },
	{ "atmosphericConcentrator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_atmosphericConcentrator, "Lmindustry/world/Block;", 9 },
	{ "electricHeater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_electricHeater, "Lmindustry/world/Block;", 9 },
	{ "slagHeater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_slagHeater, "Lmindustry/world/Block;", 9 },
	{ "phaseHeater", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseHeater, "Lmindustry/world/Block;", 9 },
	{ "heatRedirector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_heatRedirector, "Lmindustry/world/Block;", 9 },
	{ "smallHeatRedirector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_smallHeatRedirector, "Lmindustry/world/Block;", 9 },
	{ "heatRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_heatRouter, "Lmindustry/world/Block;", 9 },
	{ "slagIncinerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_slagIncinerator, "Lmindustry/world/Block;", 9 },
	{ "carbideCrucible", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbideCrucible, "Lmindustry/world/Block;", 9 },
	{ "slagCentrifuge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_slagCentrifuge, "Lmindustry/world/Block;", 9 },
	{ "surgeCrucible", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeCrucible, "Lmindustry/world/Block;", 9 },
	{ "cyanogenSynthesizer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cyanogenSynthesizer, "Lmindustry/world/Block;", 9 },
	{ "phaseSynthesizer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseSynthesizer, "Lmindustry/world/Block;", 9 },
	{ "heatReactor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_heatReactor, "Lmindustry/world/Block;", 9 },
	{ "powerSource", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_powerSource, "Lmindustry/world/Block;", 9 },
	{ "powerVoid", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_powerVoid, "Lmindustry/world/Block;", 9 },
	{ "itemSource", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_itemSource, "Lmindustry/world/Block;", 9 },
	{ "itemVoid", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_itemVoid, "Lmindustry/world/Block;", 9 },
	{ "liquidSource", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_liquidSource, "Lmindustry/world/Block;", 9 },
	{ "liquidVoid", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_liquidVoid, "Lmindustry/world/Block;", 9 },
	{ "payloadSource", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadSource, "Lmindustry/world/Block;", 9 },
	{ "payloadVoid", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadVoid, "Lmindustry/world/Block;", 9 },
	{ "illuminator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_illuminator, "Lmindustry/world/Block;", 9 },
	{ "heatSource", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_heatSource, "Lmindustry/world/Block;", 9 },
	{ "copperWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_copperWall, "Lmindustry/world/Block;", 9 },
	{ "copperWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_copperWallLarge, "Lmindustry/world/Block;", 9 },
	{ "titaniumWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_titaniumWall, "Lmindustry/world/Block;", 9 },
	{ "titaniumWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_titaniumWallLarge, "Lmindustry/world/Block;", 9 },
	{ "plastaniumWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_plastaniumWall, "Lmindustry/world/Block;", 9 },
	{ "plastaniumWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_plastaniumWallLarge, "Lmindustry/world/Block;", 9 },
	{ "thoriumWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_thoriumWall, "Lmindustry/world/Block;", 9 },
	{ "thoriumWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_thoriumWallLarge, "Lmindustry/world/Block;", 9 },
	{ "door", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_door, "Lmindustry/world/Block;", 9 },
	{ "doorLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_doorLarge, "Lmindustry/world/Block;", 9 },
	{ "phaseWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseWall, "Lmindustry/world/Block;", 9 },
	{ "phaseWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseWallLarge, "Lmindustry/world/Block;", 9 },
	{ "surgeWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeWall, "Lmindustry/world/Block;", 9 },
	{ "surgeWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeWallLarge, "Lmindustry/world/Block;", 9 },
	{ "scrapWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scrapWall, "Lmindustry/world/Block;", 9 },
	{ "scrapWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scrapWallLarge, "Lmindustry/world/Block;", 9 },
	{ "scrapWallHuge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scrapWallHuge, "Lmindustry/world/Block;", 9 },
	{ "scrapWallGigantic", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scrapWallGigantic, "Lmindustry/world/Block;", 9 },
	{ "thruster", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_thruster, "Lmindustry/world/Block;", 9 },
	{ "berylliumWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_berylliumWall, "Lmindustry/world/Block;", 9 },
	{ "berylliumWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_berylliumWallLarge, "Lmindustry/world/Block;", 9 },
	{ "tungstenWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tungstenWall, "Lmindustry/world/Block;", 9 },
	{ "tungstenWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tungstenWallLarge, "Lmindustry/world/Block;", 9 },
	{ "blastDoor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_blastDoor, "Lmindustry/world/Block;", 9 },
	{ "reinforcedSurgeWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedSurgeWall, "Lmindustry/world/Block;", 9 },
	{ "reinforcedSurgeWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedSurgeWallLarge, "Lmindustry/world/Block;", 9 },
	{ "carbideWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbideWall, "Lmindustry/world/Block;", 9 },
	{ "carbideWallLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_carbideWallLarge, "Lmindustry/world/Block;", 9 },
	{ "shieldedWall", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shieldedWall, "Lmindustry/world/Block;", 9 },
	{ "mender", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mender, "Lmindustry/world/Block;", 9 },
	{ "mendProjector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mendProjector, "Lmindustry/world/Block;", 9 },
	{ "overdriveProjector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_overdriveProjector, "Lmindustry/world/Block;", 9 },
	{ "overdriveDome", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_overdriveDome, "Lmindustry/world/Block;", 9 },
	{ "forceProjector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_forceProjector, "Lmindustry/world/Block;", 9 },
	{ "shockMine", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shockMine, "Lmindustry/world/Block;", 9 },
	{ "targetDummy", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_targetDummy, "Lmindustry/world/Block;", 9 },
	{ "radar", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_radar, "Lmindustry/world/Block;", 9 },
	{ "buildTower", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_buildTower, "Lmindustry/world/Block;", 9 },
	{ "regenProjector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_regenProjector, "Lmindustry/world/Block;", 9 },
	{ "shockwaveTower", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shockwaveTower, "Lmindustry/world/Block;", 9 },
	{ "shieldProjector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shieldProjector, "Lmindustry/world/Block;", 9 },
	{ "largeShieldProjector", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largeShieldProjector, "Lmindustry/world/Block;", 9 },
	{ "shieldBreaker", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shieldBreaker, "Lmindustry/world/Block;", 9 },
	{ "conveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_conveyor, "Lmindustry/world/Block;", 9 },
	{ "titaniumConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_titaniumConveyor, "Lmindustry/world/Block;", 9 },
	{ "plastaniumConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_plastaniumConveyor, "Lmindustry/world/Block;", 9 },
	{ "armoredConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_armoredConveyor, "Lmindustry/world/Block;", 9 },
	{ "distributor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_distributor, "Lmindustry/world/Block;", 9 },
	{ "junction", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_junction, "Lmindustry/world/Block;", 9 },
	{ "itemBridge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_itemBridge, "Lmindustry/world/Block;", 9 },
	{ "phaseConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseConveyor, "Lmindustry/world/Block;", 9 },
	{ "sorter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sorter, "Lmindustry/world/Block;", 9 },
	{ "invertedSorter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_invertedSorter, "Lmindustry/world/Block;", 9 },
	{ "router", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_router, "Lmindustry/world/Block;", 9 },
	{ "overflowGate", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_overflowGate, "Lmindustry/world/Block;", 9 },
	{ "underflowGate", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_underflowGate, "Lmindustry/world/Block;", 9 },
	{ "unloader", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_unloader, "Lmindustry/world/Block;", 9 },
	{ "massDriver", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_massDriver, "Lmindustry/world/Block;", 9 },
	{ "duct", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_duct, "Lmindustry/world/Block;", 9 },
	{ "armoredDuct", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_armoredDuct, "Lmindustry/world/Block;", 9 },
	{ "ductRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ductRouter, "Lmindustry/world/Block;", 9 },
	{ "overflowDuct", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_overflowDuct, "Lmindustry/world/Block;", 9 },
	{ "underflowDuct", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_underflowDuct, "Lmindustry/world/Block;", 9 },
	{ "ductBridge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ductBridge, "Lmindustry/world/Block;", 9 },
	{ "ductUnloader", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ductUnloader, "Lmindustry/world/Block;", 9 },
	{ "surgeConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeConveyor, "Lmindustry/world/Block;", 9 },
	{ "surgeRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeRouter, "Lmindustry/world/Block;", 9 },
	{ "unitCargoLoader", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_unitCargoLoader, "Lmindustry/world/Block;", 9 },
	{ "unitCargoUnloadPoint", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_unitCargoUnloadPoint, "Lmindustry/world/Block;", 9 },
	{ "mechanicalPump", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mechanicalPump, "Lmindustry/world/Block;", 9 },
	{ "rotaryPump", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rotaryPump, "Lmindustry/world/Block;", 9 },
	{ "impulsePump", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_impulsePump, "Lmindustry/world/Block;", 9 },
	{ "conduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_conduit, "Lmindustry/world/Block;", 9 },
	{ "pulseConduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pulseConduit, "Lmindustry/world/Block;", 9 },
	{ "platedConduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_platedConduit, "Lmindustry/world/Block;", 9 },
	{ "liquidRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_liquidRouter, "Lmindustry/world/Block;", 9 },
	{ "liquidContainer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_liquidContainer, "Lmindustry/world/Block;", 9 },
	{ "liquidTank", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_liquidTank, "Lmindustry/world/Block;", 9 },
	{ "liquidJunction", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_liquidJunction, "Lmindustry/world/Block;", 9 },
	{ "bridgeConduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_bridgeConduit, "Lmindustry/world/Block;", 9 },
	{ "phaseConduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_phaseConduit, "Lmindustry/world/Block;", 9 },
	{ "reinforcedPump", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedPump, "Lmindustry/world/Block;", 9 },
	{ "reinforcedConduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedConduit, "Lmindustry/world/Block;", 9 },
	{ "reinforcedLiquidJunction", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedLiquidJunction, "Lmindustry/world/Block;", 9 },
	{ "reinforcedBridgeConduit", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedBridgeConduit, "Lmindustry/world/Block;", 9 },
	{ "reinforcedLiquidRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedLiquidRouter, "Lmindustry/world/Block;", 9 },
	{ "reinforcedLiquidContainer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedLiquidContainer, "Lmindustry/world/Block;", 9 },
	{ "reinforcedLiquidTank", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedLiquidTank, "Lmindustry/world/Block;", 9 },
	{ "combustionGenerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_combustionGenerator, "Lmindustry/world/Block;", 9 },
	{ "thermalGenerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_thermalGenerator, "Lmindustry/world/Block;", 9 },
	{ "steamGenerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_steamGenerator, "Lmindustry/world/Block;", 9 },
	{ "differentialGenerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_differentialGenerator, "Lmindustry/world/Block;", 9 },
	{ "rtgGenerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_rtgGenerator, "Lmindustry/world/Block;", 9 },
	{ "solarPanel", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_solarPanel, "Lmindustry/world/Block;", 9 },
	{ "largeSolarPanel", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largeSolarPanel, "Lmindustry/world/Block;", 9 },
	{ "thoriumReactor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_thoriumReactor, "Lmindustry/world/Block;", 9 },
	{ "impactReactor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_impactReactor, "Lmindustry/world/Block;", 9 },
	{ "battery", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_battery, "Lmindustry/world/Block;", 9 },
	{ "batteryLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_batteryLarge, "Lmindustry/world/Block;", 9 },
	{ "powerNode", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_powerNode, "Lmindustry/world/Block;", 9 },
	{ "powerNodeLarge", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_powerNodeLarge, "Lmindustry/world/Block;", 9 },
	{ "surgeTower", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_surgeTower, "Lmindustry/world/Block;", 9 },
	{ "diode", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_diode, "Lmindustry/world/Block;", 9 },
	{ "turbineCondenser", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_turbineCondenser, "Lmindustry/world/Block;", 9 },
	{ "ventCondenser", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ventCondenser, "Lmindustry/world/Block;", 9 },
	{ "chemicalCombustionChamber", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_chemicalCombustionChamber, "Lmindustry/world/Block;", 9 },
	{ "pyrolysisGenerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pyrolysisGenerator, "Lmindustry/world/Block;", 9 },
	{ "fluxReactor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_fluxReactor, "Lmindustry/world/Block;", 9 },
	{ "neoplasiaReactor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_neoplasiaReactor, "Lmindustry/world/Block;", 9 },
	{ "beamNode", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_beamNode, "Lmindustry/world/Block;", 9 },
	{ "beamTower", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_beamTower, "Lmindustry/world/Block;", 9 },
	{ "beamLink", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_beamLink, "Lmindustry/world/Block;", 9 },
	{ "mechanicalDrill", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mechanicalDrill, "Lmindustry/world/Block;", 9 },
	{ "pneumaticDrill", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_pneumaticDrill, "Lmindustry/world/Block;", 9 },
	{ "laserDrill", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_laserDrill, "Lmindustry/world/Block;", 9 },
	{ "blastDrill", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_blastDrill, "Lmindustry/world/Block;", 9 },
	{ "waterExtractor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_waterExtractor, "Lmindustry/world/Block;", 9 },
	{ "oilExtractor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_oilExtractor, "Lmindustry/world/Block;", 9 },
	{ "cultivator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cultivator, "Lmindustry/world/Block;", 9 },
	{ "cliffCrusher", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cliffCrusher, "Lmindustry/world/Block;", 9 },
	{ "largeCliffCrusher", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largeCliffCrusher, "Lmindustry/world/Block;", 9 },
	{ "plasmaBore", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_plasmaBore, "Lmindustry/world/Block;", 9 },
	{ "largePlasmaBore", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largePlasmaBore, "Lmindustry/world/Block;", 9 },
	{ "impactDrill", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_impactDrill, "Lmindustry/world/Block;", 9 },
	{ "eruptionDrill", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_eruptionDrill, "Lmindustry/world/Block;", 9 },
	{ "coreShard", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreShard, "Lmindustry/world/Block;", 9 },
	{ "coreFoundation", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreFoundation, "Lmindustry/world/Block;", 9 },
	{ "coreNucleus", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreNucleus, "Lmindustry/world/Block;", 9 },
	{ "vault", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_vault, "Lmindustry/world/Block;", 9 },
	{ "container", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_container, "Lmindustry/world/Block;", 9 },
	{ "coreBastion", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreBastion, "Lmindustry/world/Block;", 9 },
	{ "coreCitadel", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreCitadel, "Lmindustry/world/Block;", 9 },
	{ "coreAcropolis", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_coreAcropolis, "Lmindustry/world/Block;", 9 },
	{ "reinforcedContainer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedContainer, "Lmindustry/world/Block;", 9 },
	{ "reinforcedVault", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedVault, "Lmindustry/world/Block;", 9 },
	{ "duo", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_duo, "Lmindustry/world/Block;", 9 },
	{ "scatter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scatter, "Lmindustry/world/Block;", 9 },
	{ "scorch", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scorch, "Lmindustry/world/Block;", 9 },
	{ "hail", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_hail, "Lmindustry/world/Block;", 9 },
	{ "arc", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_arc, "Lmindustry/world/Block;", 9 },
	{ "wave", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_wave, "Lmindustry/world/Block;", 9 },
	{ "lancer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_lancer, "Lmindustry/world/Block;", 9 },
	{ "swarmer", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_swarmer, "Lmindustry/world/Block;", 9 },
	{ "salvo", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_salvo, "Lmindustry/world/Block;", 9 },
	{ "fuse", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_fuse, "Lmindustry/world/Block;", 9 },
	{ "ripple", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_ripple, "Lmindustry/world/Block;", 9 },
	{ "cyclone", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_cyclone, "Lmindustry/world/Block;", 9 },
	{ "foreshadow", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_foreshadow, "Lmindustry/world/Block;", 9 },
	{ "spectre", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_spectre, "Lmindustry/world/Block;", 9 },
	{ "meltdown", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_meltdown, "Lmindustry/world/Block;", 9 },
	{ "segment", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_segment, "Lmindustry/world/Block;", 9 },
	{ "parallax", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_parallax, "Lmindustry/world/Block;", 9 },
	{ "tsunami", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tsunami, "Lmindustry/world/Block;", 9 },
	{ "breach", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_breach, "Lmindustry/world/Block;", 9 },
	{ "diffuse", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_diffuse, "Lmindustry/world/Block;", 9 },
	{ "sublimate", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_sublimate, "Lmindustry/world/Block;", 9 },
	{ "titan", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_titan, "Lmindustry/world/Block;", 9 },
	{ "disperse", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_disperse, "Lmindustry/world/Block;", 9 },
	{ "afflict", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_afflict, "Lmindustry/world/Block;", 9 },
	{ "lustre", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_lustre, "Lmindustry/world/Block;", 9 },
	{ "scathe", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_scathe, "Lmindustry/world/Block;", 9 },
	{ "smite", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_smite, "Lmindustry/world/Block;", 9 },
	{ "malign", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_malign, "Lmindustry/world/Block;", 9 },
	{ "groundFactory", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_groundFactory, "Lmindustry/world/Block;", 9 },
	{ "airFactory", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_airFactory, "Lmindustry/world/Block;", 9 },
	{ "navalFactory", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_navalFactory, "Lmindustry/world/Block;", 9 },
	{ "additiveReconstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_additiveReconstructor, "Lmindustry/world/Block;", 9 },
	{ "multiplicativeReconstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_multiplicativeReconstructor, "Lmindustry/world/Block;", 9 },
	{ "exponentialReconstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_exponentialReconstructor, "Lmindustry/world/Block;", 9 },
	{ "tetrativeReconstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tetrativeReconstructor, "Lmindustry/world/Block;", 9 },
	{ "repairPoint", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_repairPoint, "Lmindustry/world/Block;", 9 },
	{ "repairTurret", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_repairTurret, "Lmindustry/world/Block;", 9 },
	{ "tankFabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tankFabricator, "Lmindustry/world/Block;", 9 },
	{ "shipFabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shipFabricator, "Lmindustry/world/Block;", 9 },
	{ "mechFabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mechFabricator, "Lmindustry/world/Block;", 9 },
	{ "tankRefabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tankRefabricator, "Lmindustry/world/Block;", 9 },
	{ "shipRefabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shipRefabricator, "Lmindustry/world/Block;", 9 },
	{ "mechRefabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mechRefabricator, "Lmindustry/world/Block;", 9 },
	{ "primeRefabricator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_primeRefabricator, "Lmindustry/world/Block;", 9 },
	{ "tankAssembler", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tankAssembler, "Lmindustry/world/Block;", 9 },
	{ "shipAssembler", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_shipAssembler, "Lmindustry/world/Block;", 9 },
	{ "mechAssembler", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_mechAssembler, "Lmindustry/world/Block;", 9 },
	{ "basicAssemblerModule", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_basicAssemblerModule, "Lmindustry/world/Block;", 9 },
	{ "unitRepairTower", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_unitRepairTower, "Lmindustry/world/Block;", 9 },
	{ "payloadConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadConveyor, "Lmindustry/world/Block;", 9 },
	{ "payloadRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadRouter, "Lmindustry/world/Block;", 9 },
	{ "reinforcedPayloadConveyor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedPayloadConveyor, "Lmindustry/world/Block;", 9 },
	{ "reinforcedPayloadRouter", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedPayloadRouter, "Lmindustry/world/Block;", 9 },
	{ "payloadMassDriver", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadMassDriver, "Lmindustry/world/Block;", 9 },
	{ "largePayloadMassDriver", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largePayloadMassDriver, "Lmindustry/world/Block;", 9 },
	{ "smallDeconstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_smallDeconstructor, "Lmindustry/world/Block;", 9 },
	{ "deconstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_deconstructor, "Lmindustry/world/Block;", 9 },
	{ "constructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_constructor, "Lmindustry/world/Block;", 9 },
	{ "largeConstructor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largeConstructor, "Lmindustry/world/Block;", 9 },
	{ "payloadLoader", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadLoader, "Lmindustry/world/Block;", 9 },
	{ "payloadUnloader", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_payloadUnloader, "Lmindustry/world/Block;", 9 },
	{ "message", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_message, "Lmindustry/world/Block;", 9 },
	{ "switchBlock", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_switchBlock, "Lmindustry/world/Block;", 9 },
	{ "microProcessor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_microProcessor, "Lmindustry/world/Block;", 9 },
	{ "logicProcessor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_logicProcessor, "Lmindustry/world/Block;", 9 },
	{ "hyperProcessor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_hyperProcessor, "Lmindustry/world/Block;", 9 },
	{ "largeLogicDisplay", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largeLogicDisplay, "Lmindustry/world/Block;", 9 },
	{ "logicDisplay", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_logicDisplay, "Lmindustry/world/Block;", 9 },
	{ "tileLogicDisplay", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_tileLogicDisplay, "Lmindustry/world/Block;", 9 },
	{ "memoryCell", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_memoryCell, "Lmindustry/world/Block;", 9 },
	{ "memoryBank", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_memoryBank, "Lmindustry/world/Block;", 9 },
	{ "canvas", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_canvas, "Lmindustry/world/Block;", 9 },
	{ "largeCanvas", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_largeCanvas, "Lmindustry/world/Block;", 9 },
	{ "reinforcedMessage", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_reinforcedMessage, "Lmindustry/world/Block;", 9 },
	{ "worldProcessor", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_worldProcessor, "Lmindustry/world/Block;", 9 },
	{ "worldCell", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_worldCell, "Lmindustry/world/Block;", 9 },
	{ "worldMessage", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_worldMessage, "Lmindustry/world/Block;", 9 },
	{ "worldSwitch", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_worldSwitch, "Lmindustry/world/Block;", 9 },
	{ "launchPad", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_launchPad, "Lmindustry/world/Block;", 9 },
	{ "advancedLaunchPad", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_advancedLaunchPad, "Lmindustry/world/Block;", 9 },
	{ "landingPad", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_landingPad, "Lmindustry/world/Block;", 9 },
	{ "interplanetaryAccelerator", &class_mindustry_world_Block, (intptr_t) &SF_mindustry_content_Blocks_interplanetaryAccelerator, "Lmindustry/world/Block;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Blocks_load, 0, "()V", 9 },
	{ "lambda$load$0", (intptr_t) SM_mindustry_content_Blocks_lambda$load$0_mindustry_world_Block, 0, "(Lmindustry/world/Block;)V", 4106 },
};

Class class_mindustry_content_Blocks{
		.nativeName = (intptr_t) "mindustry/content/Blocks",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Blocks),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 427,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks = registerClass(&class_mindustry_content_Blocks);

}
