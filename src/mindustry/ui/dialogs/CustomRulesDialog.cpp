#include "mindustry/ui/dialogs/CustomRulesDialog.h"
#include "arc/func/Prov.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_29.h"
#include "arc/func/Boolp.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/TextField_TextFieldValidator.h"
#include "java/lang/Runnable.h"
#include "arc/func/Boolc.h"
#include "arc/func/Floatp.h"
#include "arc/func/Boolf.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_38.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_37.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_8.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_9.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_39.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_34.h"
#include "arc/util/Log.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_33.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_36.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_35.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_30.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_32.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_31.h"
#include "arc/func/Floatc.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_99.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_96.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_95.h"
#include "mindustry/content/Planets.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_98.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_97.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_92.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_91.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_94.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_93.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_90.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_154.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_155.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_10.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_156.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_11.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_157.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_12.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_150.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_13.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_151.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_14.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_152.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_15.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_153.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_61.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_62.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_63.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_64.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_158.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_65.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_159.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_143.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_144.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_145.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_146.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_140.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_141.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_142.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_147.h"
#include "mindustry/Vars.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_148.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_149.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_40.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_47.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_132.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_133.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_48.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_134.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_49.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_135.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_130.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_131.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_43.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_40.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_41.h"
#include "arc/scene/ui/TextButton.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_41.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_42.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_42.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_43.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_136.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_44.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_137.h"
#include "java/lang/Throwable.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_45.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_138.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_46.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_139.h"
#include "mindustry/ui/dialogs/CustomRulesDialog.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_60.h"
#include "mindustry/type/Item.h"
#include "mindustry/content/Items.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_121.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_58.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_122.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_59.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_123.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_38.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_124.h"
#include "arc/scene/ui/ButtonGroup.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_39.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_120.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_129.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_32.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_50.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_33.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_51.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_30.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_52.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_31.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_53.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_125.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_54.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_36.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_126.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_55.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_37.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_127.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_34.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_56.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_128.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_35.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_57.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_89.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_110.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_88.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_111.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_112.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_113.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_85.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_84.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_87.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_86.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_81.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_118.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_80.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_119.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_83.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_82.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_114.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_115.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_116.h"
#include "mindustry/game/Rules_TeamRules.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_117.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Tex.h"
#include "mindustry/type/Weather.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_9.h"
#include "mindustry/core/UI.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intp_8.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_36.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_100.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_37.h"
#include "arc/util/Strings.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_101.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_38.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_102.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_39.h"
#include "mindustry/type/Planet.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_107.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_108.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_109.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_103.h"
#include "mindustry/game/Team.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_33.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_104.h"
#include "mindustry/core/GameState.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_34.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_105.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatc_35.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolp_106.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_93.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_92.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_91.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_90.h"
#include "mindustry/ui/dialogs/ColorPicker.h"
#include "arc/func/Intc.h"
#include "arc/scene/ui/Image.h"
#include "arc/struct/Seq.h"
#include "arc/func/Intp.h"
#include "arc/scene/ui/CheckBox.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_86.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_85.h"
#include "arc/Core.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_84.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_83.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_82.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_81.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_80.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_35.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_36.h"
#include "mindustry/ui/dialogs/BaseDialog.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_37.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_7.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_6.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_5.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_89.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_scene_ui_TextField_TextFieldValidator_4.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_88.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_87.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "arc/scene/ui/Dialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_25.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_24.h"
#include "mindustry/editor/BannedContentDialog.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_27.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_26.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_29.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_28.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_21.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_20.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_23.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_22.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_29.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_27.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_28.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_22.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_25.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_26.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_23.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/util/serialization/JsonReader.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_java_lang_Runnable_24.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_16.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_15.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_18.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_10.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_17.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolf_19.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_13.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_14.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_11.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_12.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Intc_15.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_53.h"
#include "mindustry/type/Weather_WeatherEntry.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_52.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_60.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_51.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_61.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_50.h"
#include "arc/scene/ui/TextField.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_62.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_67.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_68.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_59.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_69.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_58.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_57.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_63.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_56.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_64.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_55.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_65.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_54.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_66.h"
#include "mindustry/ui/dialogs/LoadoutDialog.h"
#include "arc/scene/ui/Button.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/scene/ui/ImageButton.h"
#include "arc/func/Func.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_49.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_48.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_47.h"
#include "arc/scene/ui/Label.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_75.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_49.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_74.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_48.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_73.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_72.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_40.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_71.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_45.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_70.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_44.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_47.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_46.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_41.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_45.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_1.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_40.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_46.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_43.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_47.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_42.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_48.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_79.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_41.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_78.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_42.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_77.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Func_2.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_43.h"
#include "arc/Application.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_76.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_44.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Func_3.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_38.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_39.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Prov_5.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Prov_6.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Prov_4.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Prov_7.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_64.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_63.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_62.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_50.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_61.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_51.h"
#include "arc/scene/Group.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_60.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_56.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_55.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_57.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_56.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_52.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_57.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_51.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_58.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_54.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_69.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_59.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_53.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_68.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_52.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_67.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_53.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_66.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_54.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Floatp_50.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Boolc_65.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_55.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/dialogs/CustomRulesDialog_invoke_arc_func_Cons_49.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {


void mark_mindustry_ui_dialogs_CustomRulesDialog(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_dialogs_BaseDialog(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_CustomRulesDialog *) object;
	if (self->F_rules)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rules)->clazz)->markFunction)((jobject) self->F_rules, mark, depth + 1);
	if (self->F_main)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_main)->clazz)->markFunction)((jobject) self->F_main, mark, depth + 1);
	if (self->F_resetter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resetter)->clazz)->markFunction)((jobject) self->F_resetter, mark, depth + 1);
	if (self->F_loadoutDialog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadoutDialog)->clazz)->markFunction)((jobject) self->F_loadoutDialog, mark, depth + 1);
	if (self->F_bannedBlocks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bannedBlocks)->clazz)->markFunction)((jobject) self->F_bannedBlocks, mark, depth + 1);
	if (self->F_bannedUnits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bannedUnits)->clazz)->markFunction)((jobject) self->F_bannedUnits, mark, depth + 1);
	if (self->F_categories)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_categories)->clazz)->markFunction)((jobject) self->F_categories, mark, depth + 1);
	if (self->F_current)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_current)->clazz)->markFunction)((jobject) self->F_current, mark, depth + 1);
	if (self->F_categoryNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_categoryNames)->clazz)->markFunction)((jobject) self->F_categoryNames, mark, depth + 1);
	if (self->F_currentName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentName)->clazz)->markFunction)((jobject) self->F_currentName, mark, depth + 1);
	if (self->F_ruleSearch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ruleSearch)->clazz)->markFunction)((jobject) self->F_ruleSearch, mark, depth + 1);
	if (self->F_additionalSetup)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_additionalSetup)->clazz)->markFunction)((jobject) self->F_additionalSetup, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_CustomRulesDialog(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
}

void init_mindustry_ui_dialogs_CustomRulesDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_mindustry_ui_dialogs_CustomRulesDialog_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_dialogs_CustomRulesDialog_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(51);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"@mode.custom"_j))));
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_BannedContentDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_BannedContentDialog);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@bannedblocks"_j));
	clinit_mindustry_ctype_ContentType(ctx);
	sp[3].o = (jobject)SF_mindustry_ctype_ContentType_block;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_15(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_15);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_editor_BannedContentDialog_java_lang_String_mindustry_ctype_ContentType_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_bannedBlocks = (jref) sp[1].o;
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_mindustry_editor_BannedContentDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_editor_BannedContentDialog);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"@bannedunits"_j));
	clinit_mindustry_ctype_ContentType(ctx);
	sp[3].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_16(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_16 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_16);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_editor_BannedContentDialog_java_lang_String_mindustry_ctype_ContentType_arc_func_Boolf(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_bannedUnits = (jref) sp[1].o;
	LINE_NUMBER(42);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_currentName = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(43);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(53);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_showRuleEditRule = (frame[1].i);
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_dialogs_LoadoutDialog(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_LoadoutDialog);
	init_mindustry_ui_dialogs_LoadoutDialog(ctx, sp[1].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_loadoutDialog = (jref) sp[1].o;
	LINE_NUMBER(57);
	((func_mindustry_ui_dialogs_CustomRulesDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_setFillParent_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_22);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_shown_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_shown_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(59);
	((func_mindustry_ui_dialogs_CustomRulesDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_addCloseButton])(ctx, (frame[0].o));
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_additionalSetup = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_categories = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_categoryNames = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@edit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pencil;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_23);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_refresh(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:refresh", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	((func_mindustry_ui_dialogs_CustomRulesDialog_setup) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_setup])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	((func_mindustry_ui_dialogs_CustomRulesDialog_requestKeyboard) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_requestKeyboard])(ctx, (frame[0].o));
	LINE_NUMBER(113);
	((func_mindustry_ui_dialogs_CustomRulesDialog_requestScroll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_requestScroll])(ctx, (frame[0].o));
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_show_mindustry_game_Rules_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:show", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(117);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules = (jref) (frame[1].o);
	LINE_NUMBER(118);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_resetter = (jref) (frame[2].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CustomRulesDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[0].o));
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_setup(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:setup", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(124);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_35(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[0].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_36(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(136);
	((func_mindustry_ui_dialogs_CustomRulesDialog_setupMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_setupMain])(ctx, (frame[0].o));
	LINE_NUMBER(138);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Table_getPrefWidth_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_getPrefWidth_R_float])(ctx, sp[1].o);
	jfloat temp1 = temp0 + (jfloat(40.0f));
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	sp += 1;
	if ((floatCompare(temp1, (jfloat(temp2)), -1)) <= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_scrollX_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(139);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_setupMain(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:setupMain", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, (jfloat(25.0f)));
	LINE_NUMBER(148);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"waves"_j))));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.waves"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_47(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_80(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_80 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_80);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.wavesending"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_48(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_81(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_81 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_81);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_82(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_82 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_82);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.wavetimer"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_49(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_83(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_83 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_83);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_84(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_84 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_84);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(152);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.waitForWaveToEnd"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_50(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_85(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_85 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_85);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_86(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_86 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_86);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.randomwaveai"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_51(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_87(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_87 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_87);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_88(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_88 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_88);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(154);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.wavespawnatcores"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_52(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_89(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_89 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_89);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_90(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_90 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_90);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.airUseSpawns"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_53(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_53);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_91(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_91 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_91);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_92(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_92 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_92);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(156);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.wavelimit"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_8(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_8(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_8 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_93(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_93 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_93);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)), (jint(2147483647)));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.wavespacing"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_33(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_29(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_29 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_29);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_94(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_94 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_94);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o, (jfloat(1)), (jfloat(3,402823e+38f)));
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.initialwavespacing"_j));
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_34(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_30(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_30 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_30);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_95(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_95 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_95);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(3,402823e+38f)));
	LINE_NUMBER(159);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.dropzoneradius"_j));
	jint temp2 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_35(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_31(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_31 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_96(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_96 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_96);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(161);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"resourcesbuilding"_j))));
	LINE_NUMBER(162);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.alloweditworldprocessors"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_54(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_97(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_97 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_97);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.infiniteresources"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_55(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_98(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_98 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_98);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.corebuildandconfig"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_56(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_99(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_99 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_99);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.onlydepositcore"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_57(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_100(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_100 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_100);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(166);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.coreunloaders"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_58(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_101(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_101 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_101);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.derelictrepair"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_59(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_102(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_102 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_102);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(168);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.reactorexplosions"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_60(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_60);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_103(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_103 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_103);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.schematic"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_61(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_61);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_104(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_104 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_104);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.coreincinerates"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_62(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_62);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_105(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_105 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_105);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.cleanupdeadteams"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_63(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_63);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_106(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_106 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_106);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_107(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_107 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_107);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.disableworldprocessors"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_64(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_64);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_108(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_108 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_108);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.buildcostmultiplier"_j));
	jint temp3 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_36(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_32(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_109(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_109 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_109);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(174);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.buildspeedmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_37(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_33(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jfloat(1,000000e-03f)), (jfloat(50.0f)));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.deconstructrefundmultiplier"_j));
	jint temp4 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_38(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_34(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_110(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_110 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_110);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(176);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.blockhealthmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_39(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_35(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.blockdamagemultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_40(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_36(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_36);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(179);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"configure"_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp5 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp5 == 0) goto label_35;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@configure"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_boxSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_24(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_24);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_35:;
	{
	LINE_NUMBER(188);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bannedblocks"_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_38;
	}
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@bannedblocks"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancelSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_25(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_25);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_38:;
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.hidebannedblocks"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_65(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_65);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_111(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_111 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_111);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@bannedblocks.whitelist"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_66(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_66 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_66);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_112(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_112 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_112);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(194);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"unit"_j))));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitcapvariable"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_67(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_67 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_67);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_113(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_113 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_113);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitpayloadsexplode"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_68(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_68 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_68);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_114(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_114 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_114);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitcap"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_9(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_9(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_9 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (-999), (999));
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitfactoryactivation"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_41(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_37(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitdamagemultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_42(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_38(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(201);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitcrashdamagemultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_43(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_39(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitminespeedmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_44(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_44);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_40(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitbuildspeedmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_45(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_41(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jfloat(0)), (jfloat(50.0f)));
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitcostmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_46(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_42(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.logicunitcontrol"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_69(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_69 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_69);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_115(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_115 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_115);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(206);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.logicunitbuild"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_70(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_70 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_70);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_116(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_116 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_116);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_117(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_117 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_117);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(207);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.logicunitdeconstruct"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_71(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_71 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_71);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_118(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_118 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_118);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_119(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_119 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_119);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(209);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bannedunits"_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@bannedunits"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_unitsSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_26(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_26 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_26);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_55:;
	{
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@bannedunits.whitelist"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_72(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_72 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_72);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_120(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_120 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_120);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(214);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"enemy"_j))));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.attack"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_73(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_73 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_73);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_121(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_121 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_121);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(216);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.corecapture"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_74(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_74 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_74);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_122(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_122 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_122);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.placerangecheck"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_75(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_75 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_75);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_123(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_123 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_123);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.polygoncoreprotection"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_76(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_76 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_76);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_124(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_124 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_124);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.enemycorebuildradius"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_47(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_43(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_125(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_125 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_125);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(221);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"environment"_j))));
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.pauseDisabled"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_77(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_77 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_77);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_126(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_126 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_126);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(223);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.explosions"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_78(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_78 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_78);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_127(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_127 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_127);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(224);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.fire"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_79(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_79 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_79);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_128(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_128 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_128);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(225);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.fog"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_80(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_80 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_80);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_129(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_129 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_129);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(226);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.lighting"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_81(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_81 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_81);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_130(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_130 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_130);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.limitarea"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_82(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_82 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_82);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_131(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_131 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_131);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_132(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_132 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_132);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"x"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_10(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_10(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_10 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_133(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_133 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_133);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)), (10000));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"y"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_11(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_11(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_11 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_134(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_134 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_134);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)), (10000));
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"w"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_12(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_12(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_12 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_135(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_135 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_135);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)), (10000));
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"h"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_13(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_13(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_13 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_136(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_136 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_136);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)), (10000));
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.solarmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_48(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_44(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_44);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(236);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rules.weather"_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_76;
	}
	{
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.weather"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rainSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_27(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_27 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_27);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_76:;
	{
	LINE_NUMBER(240);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"light"_j))));
	LINE_NUMBER(241);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rules.ambientlight"_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_79;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_37(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_28(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_28 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(250.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_79:;
	{
	LINE_NUMBER(252);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.lighting.unitlight"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_83(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_83 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_83);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_137(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_137 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_137);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(254);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"music"_j))));
	LINE_NUMBER(256);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_138(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_138 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_138);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	frame[1].o = sp[0].o;
	LINE_NUMBER(257);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Func_2);
		sp[0].o = (jobject) proxy;
	}
	frame[2].o = sp[0].o;
	LINE_NUMBER(265);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.alwaysplaymusic"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_84(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_84 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_84);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_139(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_139 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_139);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[1].o));
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.nomusic"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_85(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_85 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_85);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_140(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_140 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_140);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.ambientmusic"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_38(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_38);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_4(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_17(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_17 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_17);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[1].o));
	LINE_NUMBER(274);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.darkmusic"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_39(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_39);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_18(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_18 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_18);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[1].o));
	LINE_NUMBER(280);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	LINE_NUMBER(281);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rules.title.planet"_j))));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_91;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_40(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fill_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expand_boolean_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jint(0)), (jint(0)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_91:;
	{
	LINE_NUMBER(307);
	((func_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"teams"_j))));
	LINE_NUMBER(309);
	if (((jint)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_showRuleEditRule) == 0) goto label_95;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.allowedit"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_86(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_86 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_86);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_141(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_141 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_141);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	}
label_95:;
	{
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.playerteam"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_41(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.enemyteam"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_42(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Prov_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(315);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_99:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_100;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(316);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[7].o = sp[0].o;
	LINE_NUMBER(317);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	frame[8].o = sp[0].o;
	LINE_NUMBER(319);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(320);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_mindustry_game_Team_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_game_Team_coloredName_R_java_lang_String])(ctx, (frame[6].o));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	clinit_mindustry_ui_Styles(ctx);
	sp[3].o = (jobject)SF_mindustry_ui_Styles_togglet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_29(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_29 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_29);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(14.0f);
	LINE_NUMBER(322);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(260.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(55.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_43(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_43);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(325);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(327);
	sp[0].o = frame[9].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_44(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_44 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_44);
		proxy->F_field3 = (jref) (frame[8].o);
		proxy->F_field2 = (jref) (frame[9].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_142(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_142 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_142);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(315);
	INST_IINC(5, 1);
	goto label_99;
	}
label_100:;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_additionalSetup;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_45(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_45);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(372);
	frame[3].i = (jint(0));
	}
label_111:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_112;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = checkCast(ctx, &class_arc_scene_ui_layout_Table, sp[1].o);
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_bundle;
	sp[3].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_categoryNames;
	sp[3].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[3].o, (frame[3].i));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"rules.title.\u0001"_j.string, 1, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	sp[2].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	((func_mindustry_ui_dialogs_CustomRulesDialog_addToMain_arc_scene_ui_layout_Table_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_addToMain_arc_scene_ui_layout_Table_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(372);
	INST_IINC(3, 1);
	goto label_111;
	}
label_112:;
	LINE_NUMBER(375);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:category", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(378);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[1].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_current = (jref) sp[1].o;
	LINE_NUMBER(379);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(380);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_currentName = (jref) (frame[1].o);
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_categories;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_categoryNames;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_currentName;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_addToMain_arc_scene_ui_layout_Table_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:addToMain", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(386);
	jint temp0 = (jint)((func_arc_scene_ui_layout_Table_hasChildren_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_hasChildren_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].o));
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(100.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(-3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(388);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_color_arc_graphics_Color_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_height_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(100.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(20.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(389);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(391);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:team", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(394);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(395);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_46(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_46);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0);
	LINE_NUMBER(404);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:number", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(408);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_143(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_143 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_143);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(3,402823e+38f)));
	LINE_NUMBER(409);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:number", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(412);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_144(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_144 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_144);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o, (frame[4].f), (frame[5].f));
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:number", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(416);
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o), (frame[5].o), (jfloat(0)), (jfloat(3,402823e+38f)));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:number", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(420);
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (frame[2].o), (frame[3].o), (frame[4].o), (jfloat(0)), (jfloat(3,402823e+38f)));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:numberi", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(424);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_145(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_145 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_145);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (frame[4].i), (frame[5].i));
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:numberi", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(428);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_47(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_47);
		proxy->F_field5 = (frame[6].i);
		proxy->F_field4 = (frame[5].i);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0);
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	frame[7].o = sp[0].o;
	LINE_NUMBER(438);
	((func_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String])(ctx, (frame[0].o), (frame[7].o), (frame[1].o));
	LINE_NUMBER(439);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2, jobject param3, jobject param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:number", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(443);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_48(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_48);
		proxy->F_field6 = (frame[7].f);
		proxy->F_field5 = (frame[6].f);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (frame[2].i);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0);
	LINE_NUMBER(452);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	LINE_NUMBER(453);
	((func_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String])(ctx, (frame[0].o), (frame[8].o), (frame[1].o));
	LINE_NUMBER(454);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:text", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(458);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_49(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_49);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(0);
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padTop_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	frame[6].o = sp[0].o;
	LINE_NUMBER(468);
	((func_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String])(ctx, (frame[0].o), (frame[6].o), (frame[1].o));
	LINE_NUMBER(469);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:check", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_146(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_146 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_146);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:check", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(477);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(478);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_50(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_50);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_arc_scene_ui_CheckBox_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_CheckBox_left_R_arc_scene_ui_layout_Table])(ctx, (checkCast(ctx, &class_arc_scene_ui_CheckBox, sp[0].o)));
	LINE_NUMBER(480);
	((func_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String])(ctx, (frame[0].o), (frame[5].o), (frame[1].o));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:ruleInfo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(485);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), (jint(1)));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.info"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(486);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_isPortrait_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_isPortrait_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(487);
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(488);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(489);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_clearElement_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	LINE_NUMBER(490);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_infoSmall;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_30(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_30 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_30);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(32.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_right_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_setElement_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_expandX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(492);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(493);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.info"_j.string, 1, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(496);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell(jcontext ctx, jobject self, jobject param0, jfloat param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:field", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, (frame[2].f), (jint(2)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_51(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_51);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_4(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_4);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(500);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp0 = jfloat(90.0f);
	jfloat temp1 = jfloat(40.0f);
	LINE_NUMBER(501);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(499);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_weatherDialog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:weatherDialog", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(505);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@rules.weather"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(506);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Runnable, (jint(1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	frame[2].o = sp[0].o;
	LINE_NUMBER(508);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_52(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_52);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(580);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(582);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_buttons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_31(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_31 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_31);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(170.0f);
	LINE_NUMBER(603);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(605);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$17_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$17", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(585);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@add"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(586);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[2].o)))->F_cont;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_53(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_53);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(601);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[2].o));
	LINE_NUMBER(602);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[2].o));
	LINE_NUMBER(603);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$18_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$18", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(587);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(588);
	frame[4].i = (jint(0));
	LINE_NUMBER(589);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Weather, sp[0].o));
	LINE_NUMBER(590);
	if (((jint)((mindustry_type_Weather *) NULL_CHECK((frame[6].o)))->F_hidden) == 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(592);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[6].o)))->F_localizedName;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_flatt;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_32(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_32 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_32);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	jfloat temp0 = jfloat(140.0f);
	jfloat temp1 = jfloat(50.0f);
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(598);
	INST_IINC(4, 1);
	if (((frame[4].i) % (jint(2))) != 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	}
label_9:;
	LINE_NUMBER(599);
	goto label_3;
label_4:;
	LINE_NUMBER(600);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$19_mindustry_type_Weather_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$19", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	clinit_mindustry_type_Weather$WeatherEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Weather$WeatherEntry);
	init_mindustry_type_Weather$WeatherEntry_mindustry_type_Weather(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(594);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(596);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[3].o));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$0_Array1_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(510);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_33(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_33 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_33);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(579);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$1", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(511);
	((func_arc_scene_ui_layout_Table_clearChildren) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clearChildren])(ctx, (frame[1].o));
	LINE_NUMBER(512);
	jint temp0 = jint(1);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	jfloat temp2 = jfloat(temp1);
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(450.0f)));
	jint temp4 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, temp0, (jint((temp2 / temp3))));
	frame[3].i = temp4;
	LINE_NUMBER(513);
	frame[4].i = (jint(0));
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_19(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_19 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_19);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(517);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_type_Weather$WeatherEntry, sp[0].o));
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(520);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_54(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_54);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(410.0f);
	LINE_NUMBER(571);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(3.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(573);
	INST_IINC(4, 1);
	if (((frame[4].i) % (frame[3].i)) != 0) goto label_11;
	}
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_11:;
	LINE_NUMBER(576);
	goto label_5;
label_6:;
	LINE_NUMBER(577);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$3_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$3", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o), (jfloat(0)));
	LINE_NUMBER(524);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_55(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_55);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(539);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(544);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_56(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_56);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_top_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(571);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$6_mindustry_type_Weather$WeatherEntry_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$6", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o), (jfloat(4.0f)));
	LINE_NUMBER(546);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@rules.weather.duration"_j))));
	LINE_NUMBER(551);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jfloat temp0 = ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[1].o)))->F_minDuration) / (jfloat(3600.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_49(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_49);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_20(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_20 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_20);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.to"_j))));
	LINE_NUMBER(553);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jfloat temp1 = ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[1].o)))->F_maxDuration) / (jfloat(3600.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_50(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_50);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_21(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_21 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_21);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(554);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@unit.minutes"_j))));
	LINE_NUMBER(556);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(558);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@rules.weather.frequency"_j))));
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jfloat temp2 = ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[1].o)))->F_minFrequency) / (jfloat(3600.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_51(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_51);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_22(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_22 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_22);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(560);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@waves.to"_j))));
	LINE_NUMBER(561);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	jfloat temp3 = ((jfloat)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[1].o)))->F_maxFrequency) / (jfloat(3600.0f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_52(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_52);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_23(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_23 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_23);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@unit.minutes"_j))));
	LINE_NUMBER(564);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[2].o));
	LINE_NUMBER(566);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.weather.always"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_87(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_87 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_87);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_24(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_24 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_24);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padBottom_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(4.0f)));
	LINE_NUMBER(570);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$16_mindustry_type_Weather$WeatherEntry_arc_scene_ui_CheckBox_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$16", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$15_mindustry_type_Weather$WeatherEntry_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$15", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(566);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$14_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$14", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$13_mindustry_type_Weather$WeatherEntry_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$13", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(561);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_maxFrequency = ((frame[1].f) * (jfloat(3600.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$12_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$12", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(559);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$11_mindustry_type_Weather$WeatherEntry_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$11", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(559);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_minFrequency = ((frame[1].f) * (jfloat(3600.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$10_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$10", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(553);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$9_mindustry_type_Weather$WeatherEntry_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$9", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(553);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_maxDuration = ((frame[1].f) * (jfloat(3600.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$8_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$8", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(551);
	popStackFrame(ctx);
	return ((jint)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_always);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$7_mindustry_type_Weather$WeatherEntry_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$7", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(551);
	((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_minDuration = ((frame[1].f) * (jfloat(3600.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$4_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$4", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(525);
	sp[0].o = frame[3].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_gray;
	((func_arc_scene_ui_layout_Table_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, sp[0].o);
	LINE_NUMBER(528);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[1].o)))->F_weather;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[1].o))->F_localizedName;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(6.0f)));
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(532);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_geni;
	frame[4].o = sp[0].o;
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(42.0f)));
	LINE_NUMBER(535);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[2].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_34(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_34 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_34);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$5_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(536);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_weather;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(537);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	LINE_NUMBER(538);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$2_mindustry_type_Weather$WeatherEntry_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$weatherDialog$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(515);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherEntry *) NULL_CHECK((frame[0].o)))->F_weather;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$field$0_arc_func_Floatc_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$field$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[1].o));
	((func_arc_func_Floatc_get_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc, INDEX_arc_func_Floatc_get_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$ruleInfo$0_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$ruleInfo$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(490);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.info"_j.string, 1, (frame[0].o));
	((func_mindustry_core_UI_showInfo_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfo_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$check$1_arc_func_Boolp_arc_scene_ui_CheckBox(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$check$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(478);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_CheckBox_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_CheckBox_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$check$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$check$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	{
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$text$0_java_lang_String_arc_func_Boolp_arc_func_Prov_arc_func_Cons_arc_func_Boolf_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$text$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[5].o));
	LINE_NUMBER(461);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[5].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_57(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_57);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(463);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (frame[3].o));
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(464);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_58(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_58);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(465);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[1].o = frame[4].o;
	LINE_NUMBER(466);
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_5(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_5);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(300.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$text$2_arc_func_Boolp_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$text$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(465);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextField_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$text$1_arc_func_Boolp_arc_scene_ui_Label(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$text$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(462);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$2_java_lang_String_arc_func_Boolp_boolean_arc_func_Floatp_arc_func_Floatc_float_float_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3, jobject param4, jfloat param5, jfloat param6, jobject param7) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[7].o));
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[7].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_59(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_59);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(447);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(448);
	sp[0].o = frame[7].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp1 = jfloat((jint(temp0)));
	sp[0].f = temp1;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_5:;
	{
	sp -= 2;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxFloat(ctx, sp[1].f));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_60(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_60);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(50.0f);
	LINE_NUMBER(449);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_61(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_61);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_6(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_6 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_6);
		proxy->F_field1 = (frame[6].f);
		proxy->F_field0 = (frame[5].f);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(451);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(120.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$6_float_float_java_lang_String_R_boolean(jcontext ctx, jfloat param0, jfloat param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$6", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(451);
	jint temp0 = (jint)SM_arc_util_Strings_canParsePositiveFloat_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[2].o));
	if ((floatCompare(temp0, (frame[0].f), -1)) < 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[2].o));
	if ((floatCompare(temp0, (frame[1].f), 1)) > 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$5_arc_func_Boolp_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(450);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextField_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$4_arc_func_Floatc_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_R_float(ctx, (frame[1].o));
	((func_arc_func_Floatc_get_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatc, INDEX_arc_func_Floatc_get_float, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$3_arc_func_Boolp_arc_scene_ui_Label(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(447);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$1_java_lang_String_arc_func_Boolp_arc_func_Intp_arc_func_Intc_int_int_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jint param4, jint param5, jobject param6) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$numberi$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	frame[5].i = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[6].o));
	LINE_NUMBER(431);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[6].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_62(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_62);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(432);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(433);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)((func_arc_func_Intp_get_R_int) resolveInterfaceMethod(ctx, &class_arc_func_Intp, INDEX_arc_func_Intp_get_R_int, (frame[2].o)))(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxInteger(ctx, temp0));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_63(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_63);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_64(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_64);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(434);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_update_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(100.0f);
	LINE_NUMBER(435);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_7(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_7 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_scene_ui_TextField$TextFieldValidator_7);
		proxy->F_field1 = (frame[5].i);
		proxy->F_field0 = (frame[4].i);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(436);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_valid_arc_scene_ui_TextField$TextFieldValidator_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(120.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$5_int_int_java_lang_String_R_boolean(jcontext ctx, jint param0, jint param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$numberi$5", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(436);
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	if (temp0 < (frame[0].i)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[2].o));
	if (temp0 > (frame[1].i)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$4_arc_func_Boolp_arc_scene_ui_TextField(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$numberi$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(434);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_TextField_setDisabled_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setDisabled_boolean])(ctx, sp[0].o, sp[1].i);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$3_arc_func_Intc_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$numberi$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(433);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_util_Strings_parseInt_java_lang_String_R_int(ctx, (frame[1].o));
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, sp[0].o))(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$2_arc_func_Boolp_arc_scene_ui_Label(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$numberi$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(432);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_white;
	goto label_2;
label_1:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_gray;
label_2:;
	POP_N(2); // Pop method args
	((func_arc_scene_ui_Label_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setColor_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$numberi$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	{
	LINE_NUMBER(424);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$1_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$number$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$0_java_lang_String_arc_func_Cons_arc_func_Prov_arc_scene_ui_layout_Table(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$team$0", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[3].o));
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[0].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(399);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_5:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_6;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(400);
	sp[0].o = frame[3].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	clinit_mindustry_ui_Styles(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_Styles_squareTogglei;
	jfloat temp0 = jfloat(38.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_35(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_35 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_35);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o);
	jfloat temp1 = jfloat(1);
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_25(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_25 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_25);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(60.0f)));
	sp[1].o = (jobject)((func_mindustry_game_Team_coloredName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_game_Team_coloredName_R_java_lang_String])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_tooltip_java_lang_String_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_65(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_65);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_with_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(399);
	INST_IINC(6, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$3_mindustry_game_Team_arc_scene_ui_ImageButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$team$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_ImageButton_getStyle_R_arc_scene_ui_ImageButton$ImageButtonStyle])(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$2_arc_func_Prov_mindustry_game_Team_arc_scene_ui_ImageButton_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$team$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$1_arc_func_Cons_mindustry_game_Team(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$team$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(401);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$225_Array1_boolean_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$225", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$175_mindustry_game_Team_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$175", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_fillX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_left_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(5.0f)));
	LINE_NUMBER(329);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[4].o);
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((func_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Rules$TeamRules_get_mindustry_game_Team_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(332);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.blockhealthmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_53(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_53);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_45(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_45 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_45);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(333);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.blockdamagemultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_54(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_54);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_46(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_46 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_46);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(335);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.rtsai"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_88(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_88 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_88);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_147(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_147 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_147);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_148(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_148 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_148);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(336);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.rtsminsquadsize"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_14(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_14);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_14(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_14 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_14);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_149(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_149 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_149);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(0)), (100));
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.rtsmaxsquadsize"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_15(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intc_15);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_15(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_15 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Intp_15);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_150(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_150 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_150);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, (jint(1)), (1000));
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.rtsminattackweight"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_55(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_55);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_47(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_47 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_47);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_151(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_151 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_151);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.buildai"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_89(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_89 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_89);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_152(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_152 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_152);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_153(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_153 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_153);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.buildaitier"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_56(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_56);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_48(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_48 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_48);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_154(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_154 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_154);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float])(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, sp[3].o, sp[4].o, (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(344);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.protectcores"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_90(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_90 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_90);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_155(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_155 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_155);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.extracorebuildradius"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_57(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_57);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_49(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_49 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_49);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_156(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_156 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_156);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.checkplacement"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_91(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_91 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_91);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_157(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_157 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_157);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(348);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.infiniteresources"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_92(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_92 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_92);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_158(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_158 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_158);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(349);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.fillitems"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_93(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_93 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolc_93);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_159(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_159 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolp_159);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.buildspeedmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_58(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_58 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_58);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_50(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_50 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_50);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jfloat(1,000000e-03f)), (jfloat(50.0f)));
	LINE_NUMBER(352);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitfactoryactivation"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_59(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_59 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_59);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_51(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_51 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_51);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitdamagemultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_60(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_60 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_60);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_52(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_52 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_52);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitcrashdamagemultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_61(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_61 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_61);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_53(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_53 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_53);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitminespeedmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_62(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_62 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_62);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_54(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_54 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_54);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitbuildspeedmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_63(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_63 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_63);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_55(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_55 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_55);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jfloat(1,000000e-03f)), (jfloat(50.0f)));
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unitcostmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_64(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_64 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_64);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_56(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_56 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_56);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.unithealthmultiplier"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_65(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_65 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatc_65);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_57(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_57 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Floatp_57);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[3].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current;
	jint temp1 = (jint)((func_arc_scene_ui_layout_Table_hasChildren_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_hasChildren_R_boolean])(ctx, sp[0].o);
	if (temp1 != 0) goto label_25;
	}
	{
	LINE_NUMBER(361);
	((func_arc_scene_ui_layout_Table_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_clear])(ctx, (frame[2].o));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, (frame[3].o), (frame[2].o));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	}
label_27:;
	{
	LINE_NUMBER(366);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_current = (jref) (frame[3].o);
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$224_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$224", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(358);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitHealthMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$223_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$223", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(358);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitHealthMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$222_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$222", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCostMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$221_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$221", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(357);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCostMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$220_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$220", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$219_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$219", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(356);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$218_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$218", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitMineSpeedMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$217_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$217", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(355);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitMineSpeedMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$216_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$216", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCrashDamageMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$215_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$215", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(354);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCrashDamageMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$214_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$214", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitDamageMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$213_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$213", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(353);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitDamageMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$212_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$212", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitFactoryActivationDelay) / (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$211_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$211", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(352);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitFactoryActivationDelay = ((frame[1].f) * (jfloat(60.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$210_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$210", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$209_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$209", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(350);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$208_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$208", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_fillItems);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$207_mindustry_game_Rules$TeamRule_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$207", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(349);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_fillItems = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$206_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$206", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_infiniteResources);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$205_mindustry_game_Rules$TeamRule_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$205", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(348);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_infiniteResources = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$204_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$204", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_checkPlacement);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$203_mindustry_game_Rules$TeamRule_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$203", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(346);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_checkPlacement = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$202_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$202", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_polygonCoreProtection) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[1].o)))->F_protectCores) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$201_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$201", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(345);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_extraCoreBuildRadius) / (jfloat(8.0f))), (jfloat(200.0f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$200_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$200", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(345);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_extraCoreBuildRadius = ((frame[1].f) * (jfloat(8.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$199_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$199", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_protectCores);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$198_mindustry_game_Rules$TeamRule_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$198", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(344);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_protectCores = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$197_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$197", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[1].o)))->F_buildAi) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env;
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_erekir;
	if (temp0 == ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultEnv)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$196_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$196", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildAiTier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$195_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$195", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(342);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildAiTier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$194_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$194", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	jint temp0 = (jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env;
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_erekir;
	if (temp0 == ((jint)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_defaultEnv)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$193_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$193", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildAi);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$192_mindustry_game_Rules$TeamRule_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$192", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(341);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildAi = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$191_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$191", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsAi);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$190_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$190", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinWeight);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$189_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$189", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(338);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinWeight = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$188_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$188", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsAi);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$187_mindustry_game_Rules$TeamRule_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$187", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMaxSquad);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$186_mindustry_game_Rules$TeamRule_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$186", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(337);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMaxSquad = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$185_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$185", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsAi);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$184_mindustry_game_Rules$TeamRule_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$184", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(336);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinSquad);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$183_mindustry_game_Rules$TeamRule_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$183", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(336);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinSquad = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$182_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$182", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(335);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$181_mindustry_game_Rules$TeamRule_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$181", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsAi);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$180_mindustry_game_Rules$TeamRule_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$180", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(335);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsAi = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$179_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$179", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockDamageMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$178_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$178", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(333);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockDamageMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$177_mindustry_game_Rules$TeamRule_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$177", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockHealthMultiplier);
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$176_mindustry_game_Rules$TeamRule_float(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$176", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(332);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockHealthMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$174_Array1_boolean_arc_scene_ui_TextButton(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$174", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (jint(1)));
	sp[0].o = checkCast(ctx, &class_arc_scene_ui_Image, sp[0].o);
	sp += 1;
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) == 0) goto label_1;
	}
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_upOpen;
	goto label_2;
label_1:;
	clinit_mindustry_gen_Icon(ctx);
	(sp++)->o = SF_mindustry_gen_Icon_downOpen;
label_2:;
	{
	sp -= 2;
	((func_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(324);
	((func_arc_scene_ui_TextButton_setChecked_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TextButton_setChecked_boolean])(ctx, (frame[1].o), ((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))));
	LINE_NUMBER(325);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$173_Array1_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$173", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].i = temp0;
	sp += 2;
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$172_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$172", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$171_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$171", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTeam = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$170_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$170", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$169_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$169", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$168_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$168", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditRules);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$167_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$167", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditRules = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$161_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$161", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o), (jfloat(10.0f)));
	LINE_NUMBER(284);
	clinit_arc_scene_ui_ButtonGroup(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_ButtonGroup);
	init_arc_scene_ui_ButtonGroup(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(285);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_flatTogglet;
	frame[3].o = sp[0].o;
	LINE_NUMBER(287);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(140.0f)), (jfloat(50.0f)));
	LINE_NUMBER(289);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_planets_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_planets_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_26(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_26 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_26);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(290);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ctype_UnlockableContent *) NULL_CHECK((frame[5].o)))->F_localizedName;
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_36(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_36 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_36);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = frame[2].o;
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_27(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_27 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_27);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[1].o));
	if ((((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) % (jint(3))) != 0) goto label_10;
	}
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	}
label_10:;
	LINE_NUMBER(297);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(299);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@rules.anyenv"_j));
	sp[2].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_37(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_37 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_37);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = frame[2].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_group_arc_scene_ui_ButtonGroup_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_28(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_28 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_28);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_checked_arc_func_Boolf_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$166_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$166", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$165(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$165", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attributes;
	((func_mindustry_world_blocks_Attributes_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_clear])(ctx, sp[0].o);
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_env = (233);
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_sun;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$164_mindustry_type_Planet_arc_scene_ui_TextButton_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$164", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$163_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$163", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((func_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Planet_applyRules_mindustry_game_Rules_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$162_mindustry_type_Planet_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$162", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(289);
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_accessible) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_type_Planet *) NULL_CHECK((frame[0].o)))->F_visible) == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_type_Planet_isLandable_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Planet_isLandable_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$160_arc_func_Func_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$160", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$159_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$159", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic;
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$158_arc_func_Func_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$158", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	sp += 1;
	}
label_2:;
	sp -= 2;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_darkMusic = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$157_arc_func_Func_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$157", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$156_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$156", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientMusic;
	if (sp[0].o != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientMusic;
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$155_arc_func_Func_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$155", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[1].o);
	sp += 1;
	if (temp0 == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	sp += 1;
	}
label_2:;
	sp -= 2;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_ambientMusic = (jref) sp[1].o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$154_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$154", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableMusic);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$153_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$153", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableMusic = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$152_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$152", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_alwaysPlayMusic);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$151_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$151", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_alwaysPlayMusic = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$150_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$150", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(259);
	clinit_arc_util_serialization_JsonReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonReader);
	init_arc_util_serialization_JsonReader(ctx, sp[0].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[\u0001]"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonReader_parse_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Func_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_struct_Seq_map_Array1_java_lang_Object_arc_func_Func_R_arc_struct_Seq(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(260);
	frame[1].o = sp[0].o;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$149_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$149", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableMusic) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$148_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$148", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitLight);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$147_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$147", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitLight = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$146(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$146", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(250);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_picker;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_ambientLight;
	sp[2].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[2].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[2].o))->F_ambientLight;
	sp[3].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[2].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_66(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_66 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_66);
		proxy->F_field0 = (jref) sp[2].o;
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ColorPicker_show_arc_graphics_Color_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$144_arc_scene_ui_Button(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$144", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_left_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(244);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_67(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_67 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_67);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Button_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Button_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jfloat temp0 = jfloat(4.0f);
	LINE_NUMBER(248);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_margin_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(50.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_Button_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@rules.ambientlight"_j))));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$145_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$145", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_scene_Element, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_ui_Image(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Image);
	clinit_mindustry_gen_Tex(ctx);
	sp[3].o = (jobject)SF_mindustry_gen_Tex_alphaBg;
	init_arc_scene_ui_Image_arc_scene_style_Drawable(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_dialogs_CustomRulesDialog$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog$1);
	sp[3].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Tex_whiteui;
	init_mindustry_ui_dialogs_CustomRulesDialog$1_mindustry_ui_dialogs_CustomRulesDialog_arc_scene_style_Drawable(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_grow_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$143_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$143", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_solarMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$142_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$142", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_solarMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$141_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$141", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$140_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$140", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$139_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$139", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitHeight = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$138_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$138", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$137_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$137", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$136_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$136", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitWidth = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$135_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$135", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$134_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$134", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$133_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$133", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitY = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$132_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$132", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$131_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$131", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$130_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$130", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitX = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$129_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$129", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	{
	LINE_NUMBER(228);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$128_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$128", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$127_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$127", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_limitMapArea = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$126_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$126", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$125_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$125", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$124_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$124", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$123_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$123", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$122_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$122", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fire);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$121_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$121", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fire = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$120_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$120", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$119_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$119", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_damageExplosions = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$118_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$118", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$117_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$117", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pauseDisabled = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$116_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$116", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_polygonCoreProtection) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$115_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$115", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_enemyCoreBuildRadius) / (jfloat(8.0f))), (jfloat(200.0f)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$114_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$114", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_enemyCoreBuildRadius = ((frame[1].f) * (jfloat(8.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$113_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$113", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_polygonCoreProtection);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$112_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$112", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_polygonCoreProtection = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$111_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$111", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_placeRangeCheck);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$110_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$110", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_placeRangeCheck = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$109_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$109", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$108_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$108", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreCapture = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$107_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$107", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$106_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$106", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$105_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$105", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitWhitelist);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$104_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$104", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitWhitelist = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$103(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$103", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_bannedUnits;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_bannedUnits;
	((func_mindustry_editor_BannedContentDialog_show_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_BannedContentDialog_show_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$102_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$102", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$101_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$101", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitDeconstruct);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$100_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$100", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitDeconstruct = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$99_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$99", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$98_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$98", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitBuild);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$97_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$97", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitBuild = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$96_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$96", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$95_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$95", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_logicUnitControl = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$94_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$94", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCostMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$93_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$93", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCostMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$92_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$92", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitBuildSpeedMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$91_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$91", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitBuildSpeedMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$90_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$90", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitMineSpeedMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$89_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$89", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitMineSpeedMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$88_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$88", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCrashDamageMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$87_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$87", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCrashDamageMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$86_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$86", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitDamageMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$85_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$85", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitDamageMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$84_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$84", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitFactoryActivationDelay) / (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$83_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$83", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitFactoryActivationDelay = ((frame[1].f) * (jfloat(60.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$82_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$82", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCap);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$81_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$81", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCap = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$80_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$80", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitPayloadsExplode);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$79_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$79", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitPayloadsExplode = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$78_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$78", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCapVariable);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$77_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$77", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_unitCapVariable = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$76_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$76", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockWhitelist);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$75_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$75", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockWhitelist = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$74_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$74", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_hideBannedBlocks);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$73_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$73", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_hideBannedBlocks = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$72(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$72", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_bannedBlocks;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_bannedBlocks;
	((func_mindustry_editor_BannedContentDialog_show_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_BannedContentDialog_show_arc_struct_ObjectSet])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$67(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$67", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_loadoutDialog;
	jint temp0 = jint(999999);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_loadout;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_29(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_29 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Boolf_29);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_38(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_38 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_39(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_39 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_39);
		sp[4].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_40(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_40 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_40);
		sp[5].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_LoadoutDialog_show_int_arc_struct_Seq_arc_func_Boolf_java_lang_Runnable_java_lang_Runnable_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_LoadoutDialog_show_int_arc_struct_Seq_arc_func_Boolf_java_lang_Runnable_java_lang_Runnable_java_lang_Runnable])(ctx, sp[0].o, temp0, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$71(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$71", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$70(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$70", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	LINE_NUMBER(184);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$69(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$69", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_loadout;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	clinit_mindustry_type_ItemStack(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_ItemStack);
	clinit_mindustry_content_Items(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Items_copper;
	init_mindustry_type_ItemStack_mindustry_type_Item_int(ctx, sp[1].o, sp[2].o, (100));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$68_mindustry_type_Item_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$68", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$66_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$66", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockDamageMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$65_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$65", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockDamageMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$64_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$64", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockHealthMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$63_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$63", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_blockHealthMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$62_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$62", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$61_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$61", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_deconstructRefundMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$60_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$60", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_deconstructRefundMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$59_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$59", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$58_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$58", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildSpeedMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$57_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$57", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$56_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$56", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$55_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$55", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier = (frame[1].f);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$54_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$54", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableWorldProcessors);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$53_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$53", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_disableWorldProcessors = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$52_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$52", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_pvp);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$51_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$51", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cleanupDeadTeams);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$50_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$50", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_cleanupDeadTeams = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$49_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$49", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$48_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$48", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreIncinerates = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$47_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$47", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_schematicsAllowed);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$46_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$46", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_schematicsAllowed = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$45_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$45", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_reactorExplosions);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$44_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$44", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_reactorExplosions = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$43_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$43", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_derelictRepair);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$42_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$42", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_derelictRepair = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$41_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$41", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowCoreUnloaders);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$40_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$40", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowCoreUnloaders = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$39_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$39", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_onlyDepositCore);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$38_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$38", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_onlyDepositCore = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$37_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$37", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$36_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$36", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_coreBuildAndConfig = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$35_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$35", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$34_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$34", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$33_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$33", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditWorldProcessors);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$32_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$32", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditWorldProcessors = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$31_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$31", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$30_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$30", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius) / (jfloat(8.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$29_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$29", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_dropZoneRadius = ((frame[1].f) * (jfloat(8.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$28_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$28", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$27_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$27", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_initialWaveSpacing) / (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$26_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$26", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_initialWaveSpacing = ((frame[1].f) * (jfloat(60.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$25_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$25", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$24_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$24", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return (((jfloat)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSpacing) / (jfloat(60.0f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$23_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$23", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSpacing = ((frame[1].f) * (jfloat(60.0f)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$22_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$22", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jint M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$21_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$21", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$20_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$20", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_winWave = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$19_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$19", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$18_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$18", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_airUseSpawns);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$17_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$17", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_airUseSpawns = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$16_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$16", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$15_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_wavesSpawnAtCores);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$14_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$14", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_wavesSpawnAtCores = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$13_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$13", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$12_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_randomWaveAI);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$11_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$11", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_randomWaveAI = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$10_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$10", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer) == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$9_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waitEnemies);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$8_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$8", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waitEnemies = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$7_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$6_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$5_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveTimer = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$4_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$3_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSending);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$2_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(150);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waveSending = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$1_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$0_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setupMain$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_waves = (frame[1].i);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$2_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setup$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_main = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$0_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setup$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[1].o;
	clinit_mindustry_gen_Icon(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_padRight_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	LINE_NUMBER(126);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_68(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_68 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_68);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growX_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(8.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_get_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_get_R_arc_scene_Element])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(130);
	((func_arc_scene_ui_TextField_setMessageText_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TextField_setMessageText_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"@players.search"_j))));
	LINE_NUMBER(131);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_ruleSearch;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(132);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp1 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$setup$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replaceAll_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" +"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[1].o);
	((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK(sp[0].o))->F_ruleSearch = (jref) sp[1].o;
	LINE_NUMBER(128);
	((func_mindustry_ui_dialogs_CustomRulesDialog_setupMain) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_setupMain])(ctx, (frame[0].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_mindustry_ui_dialogs_BaseDialog(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_BaseDialog);
	init_mindustry_ui_dialogs_BaseDialog_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@edit.menu"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(67);
	((func_mindustry_ui_dialogs_BaseDialog_addCloseButton) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_addCloseButton])(ctx, (frame[1].o));
	LINE_NUMBER(68);
	((func_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_setFillParent_boolean])(ctx, (frame[1].o), (jint(0)));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_scene_ui_Dialog *) NULL_CHECK((frame[1].o)))->F_cont;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_69(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_69 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_arc_func_Cons_69);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(106);
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_show_R_arc_scene_ui_Dialog])(ctx, (frame[1].o));
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$new$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(71);
	clinit_mindustry_ui_Styles(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Styles_cleart;
	frame[3].o = sp[0].o;
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(280.0f)), (jfloat(64.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(2)));
	LINE_NUMBER(74);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@copy.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_41(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_41 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_41);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(85);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@load.clipboard"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_42(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_42 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_42);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	LINE_NUMBER(98);
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp += 1;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[0].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[0].o))(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"{"_j))));
	if (temp0 != 0) goto label_7;
	}
label_6:;
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_disabled_boolean_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].i);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(12.0f)));
	((func_arc_scene_ui_layout_Cell_row) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_row])(ctx, sp[0].o);
	LINE_NUMBER(100);
	sp[0].o = frame[2].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@settings.reset"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[3].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_43(ctx);
		auto proxy = (mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_43 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CustomRulesDialog_invoke_java_lang_Runnable_43);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	jfloat temp0 = jfloat(12.0f);
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_marginLeft_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, temp0);
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$5(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$new$5", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_resetter;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_mindustry_game_Rules, sp[0].o);
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_copy_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(102);
	((func_mindustry_ui_dialogs_CustomRulesDialog_refresh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_refresh])(ctx, (frame[0].o));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$new$4", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(87);
	sp[0].o = ((jobject) &class_mindustry_game_Rules);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((func_arc_Application_getClipboardText_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_getClipboardText_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Rules, sp[0].o));
	LINE_NUMBER(89);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_spawns;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(90);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_objectives;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_objectives = (jref) sp[1].o;
	LINE_NUMBER(91);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_copy_java_lang_Object_java_lang_Object_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	((func_mindustry_ui_dialogs_CustomRulesDialog_refresh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_CustomRulesDialog_refresh])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(96);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(93);
	frame[2].o = sp[0].o;
	LINE_NUMBER(94);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(95);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@rules.invaliddata"_j))));
	}
label_8:;
	{
	LINE_NUMBER(97);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$new$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(75);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showInfoFade_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showInfoFade_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@copied"_j))));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns;
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	LINE_NUMBER(80);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	sp[1].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	((func_arc_Application_setClipboardText_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_setClipboardText_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CustomRulesDialog *) NULL_CHECK((frame[0].o)))->F_rules;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) (frame[2].o);
	LINE_NUMBER(82);
	((func_mindustry_ui_dialogs_BaseDialog_hide) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_dialogs_BaseDialog_hide])(ctx, (frame[1].o));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$0_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CustomRulesDialog:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CustomRulesDialog(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_mindustry_type_UnitType_isHidden_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_UnitType_isHidden_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_CustomRulesDialog[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_Dialog_draw,
	(void *) M_arc_scene_ui_Dialog_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_Dialog_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_ui_Dialog_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_Table_computeSize,
	(void *) M_arc_scene_ui_layout_Table_layout_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_getStyle_R_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_setStyle_arc_scene_ui_Dialog$DialogStyle,
	(void *) M_arc_scene_ui_Dialog_keepWithinStage,
	(void *) M_arc_scene_ui_Dialog_drawStageBackground_float_float_float_float,
	(void *) M_arc_scene_ui_Dialog_centerWindow,
	(void *) M_arc_scene_ui_Dialog_isMovable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setMovable_boolean,
	(void *) M_arc_scene_ui_Dialog_isModal_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setModal_boolean,
	(void *) M_arc_scene_ui_Dialog_setKeepWithinStage_boolean,
	(void *) M_arc_scene_ui_Dialog_isCentered_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setCentered_boolean,
	(void *) M_arc_scene_ui_Dialog_isResizable_R_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizable_boolean,
	(void *) M_arc_scene_ui_Dialog_setResizeBorder_int,
	(void *) M_arc_scene_ui_Dialog_isDragging_R_boolean,
	(void *) M_arc_scene_ui_Dialog_updateScrollFocus,
	(void *) M_arc_scene_ui_Dialog_shown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_hidden_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resizedShown_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_resized_boolean_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton,
	(void *) M_arc_scene_ui_Dialog_closeOnBack,
	(void *) M_arc_scene_ui_Dialog_closeOnBack_java_lang_Runnable,
	(void *) M_arc_scene_ui_Dialog_isShown_R_boolean,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_arc_scene_Action_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_toggle,
	(void *) M_arc_scene_ui_Dialog_show_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_show_arc_scene_Scene_R_arc_scene_ui_Dialog,
	(void *) M_arc_scene_ui_Dialog_hide_arc_scene_Action,
	(void *) M_arc_scene_ui_Dialog_hide,
	(void *) M_arc_scene_ui_Dialog_lambda$closeOnBack$1_java_lang_Runnable_arc_input_KeyCode,
	(void *) M_arc_scene_ui_Dialog_lambda$updateScrollFocus$0_Array1_boolean,
	(void *) M_mindustry_ui_dialogs_BaseDialog_setTitleColor_arc_graphics_Color,
	(void *) M_mindustry_ui_dialogs_BaseDialog_makeButtonOverlay,
	(void *) M_mindustry_ui_dialogs_BaseDialog_onResize_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseListener,
	(void *) M_mindustry_ui_dialogs_BaseDialog_addCloseButton_float,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$onResize$0_java_lang_Runnable_mindustry_game_EventType$ResizeEvent,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$1,
	(void *) M_mindustry_ui_dialogs_BaseDialog_lambda$new$0,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_refresh,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_show_mindustry_game_Rules_arc_func_Prov,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_setup,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_setupMain,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_addToMain_arc_scene_ui_layout_Table_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_int_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_weatherDialog,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$17_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$18_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$19_mindustry_type_Weather_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$0_Array1_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$3_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$6_mindustry_type_Weather$WeatherEntry_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$4_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$5_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$175_mindustry_game_Team_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$202_mindustry_game_Rules$TeamRule_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$197_mindustry_game_Rules$TeamRule_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$194_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$182_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$172_R_mindustry_game_Team,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$171_mindustry_game_Team,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$170_R_mindustry_game_Team,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$169_mindustry_game_Team,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$168_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$167_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$161_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$166_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$165,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$164_mindustry_type_Planet_arc_scene_ui_TextButton_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$163_mindustry_type_Planet,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$159_R_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$158_arc_func_Func_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$156_R_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$155_arc_func_Func_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$154_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$153_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$152_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$151_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$149_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$148_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$147_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$146,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$144_arc_scene_ui_Button,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$145_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$143_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$142_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$141_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$140_R_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$139_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$138_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$137_R_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$136_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$135_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$134_R_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$133_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$132_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$131_R_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$130_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$128_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$127_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$126_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$125_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$124_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$123_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$122_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$121_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$120_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$119_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$118_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$117_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$116_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$115_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$114_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$113_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$112_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$111_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$110_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$109_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$108_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$107_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$106_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$105_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$104_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$103,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$102_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$101_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$100_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$99_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$98_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$97_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$96_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$95_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$94_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$93_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$92_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$91_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$90_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$89_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$88_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$87_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$86_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$85_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$84_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$83_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$82_R_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$81_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$80_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$79_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$78_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$77_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$76_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$75_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$74_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$73_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$72,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$67,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$69,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$66_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$65_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$64_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$63_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$62_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$61_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$60_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$59_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$58_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$57_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$56_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$55_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$54_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$53_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$52_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$51_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$50_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$49_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$48_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$47_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$46_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$45_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$44_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$43_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$42_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$41_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$40_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$39_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$38_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$37_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$36_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$35_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$34_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$33_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$32_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$31_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$30_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$29_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$28_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$27_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$26_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$25_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$24_R_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$23_float,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$22_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$21_R_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$20_int,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$19_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$18_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$17_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$16_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$15_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$14_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$13_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$12_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$11_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$10_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$9_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$8_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$7_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$6_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$5_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$4_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$3_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$2_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$1_R_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$0_boolean,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$2_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$1_java_lang_String,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$5,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog,
	(void *) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "getStyle", "()Larc/scene/ui/Dialog$DialogStyle;" },
	{ "setStyle", "(Larc/scene/ui/Dialog$DialogStyle;)V" },
	{ "keepWithinStage", "()V" },
	{ "drawStageBackground", "(FFFF)V" },
	{ "centerWindow", "()V" },
	{ "isMovable", "()Z" },
	{ "setMovable", "(Z)V" },
	{ "isModal", "()Z" },
	{ "setModal", "(Z)V" },
	{ "setKeepWithinStage", "(Z)V" },
	{ "isCentered", "()Z" },
	{ "setCentered", "(Z)V" },
	{ "isResizable", "()Z" },
	{ "setResizable", "(Z)V" },
	{ "setResizeBorder", "(I)V" },
	{ "isDragging", "()Z" },
	{ "updateScrollFocus", "()V" },
	{ "shown", "(Ljava/lang/Runnable;)V" },
	{ "hidden", "(Ljava/lang/Runnable;)V" },
	{ "resizedShown", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(Ljava/lang/Runnable;)V" },
	{ "resized", "(ZLjava/lang/Runnable;)V" },
	{ "addCloseButton", "()V" },
	{ "closeOnBack", "()V" },
	{ "closeOnBack", "(Ljava/lang/Runnable;)V" },
	{ "isShown", "()Z" },
	{ "show", "(Larc/scene/Scene;Larc/scene/Action;)Larc/scene/ui/Dialog;" },
	{ "toggle", "()V" },
	{ "show", "()Larc/scene/ui/Dialog;" },
	{ "show", "(Larc/scene/Scene;)Larc/scene/ui/Dialog;" },
	{ "hide", "(Larc/scene/Action;)V" },
	{ "hide", "()V" },
	{ "lambda$closeOnBack$1", "(Ljava/lang/Runnable;Larc/input/KeyCode;)V" },
	{ "lambda$updateScrollFocus$0", "([Z)V" },
	{ "setTitleColor", "(Larc/graphics/Color;)V" },
	{ "makeButtonOverlay", "()V" },
	{ "onResize", "(Ljava/lang/Runnable;)V" },
	{ "addCloseListener", "()V" },
	{ "addCloseButton", "(F)V" },
	{ "lambda$onResize$0", "(Ljava/lang/Runnable;Lmindustry/game/EventType$ResizeEvent;)V" },
	{ "lambda$new$1", "()V" },
	{ "lambda$new$0", "()V" },
	{ "refresh", "()V" },
	{ "show", "(Lmindustry/game/Rules;Larc/func/Prov;)V" },
	{ "setup", "()V" },
	{ "setupMain", "()V" },
	{ "category", "(Ljava/lang/String;)V" },
	{ "addToMain", "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V" },
	{ "team", "(Ljava/lang/String;Larc/func/Cons;Larc/func/Prov;)V" },
	{ "number", "(Ljava/lang/String;Larc/func/Floatc;Larc/func/Floatp;)V" },
	{ "number", "(Ljava/lang/String;Larc/func/Floatc;Larc/func/Floatp;FF)V" },
	{ "number", "(Ljava/lang/String;ZLarc/func/Floatc;Larc/func/Floatp;Larc/func/Boolp;)V" },
	{ "number", "(Ljava/lang/String;Larc/func/Floatc;Larc/func/Floatp;Larc/func/Boolp;)V" },
	{ "numberi", "(Ljava/lang/String;Larc/func/Intc;Larc/func/Intp;II)V" },
	{ "numberi", "(Ljava/lang/String;Larc/func/Intc;Larc/func/Intp;Larc/func/Boolp;II)V" },
	{ "number", "(Ljava/lang/String;ZLarc/func/Floatc;Larc/func/Floatp;Larc/func/Boolp;FF)V" },
	{ "text", "(Ljava/lang/String;Larc/func/Cons;Larc/func/Prov;Larc/func/Boolf;Larc/func/Boolp;)V" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;)V" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;Larc/func/Boolp;)V" },
	{ "ruleInfo", "(Larc/scene/ui/layout/Cell;Ljava/lang/String;)V" },
	{ "field", "(Larc/scene/ui/layout/Table;FLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "weatherDialog", "()V" },
	{ "lambda$weatherDialog$17", "([Ljava/lang/Runnable;)V" },
	{ "lambda$weatherDialog$18", "([Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$weatherDialog$19", "(Lmindustry/type/Weather;[Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$weatherDialog$0", "([Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$weatherDialog$1", "(Larc/scene/ui/layout/Table;[Ljava/lang/Runnable;)V" },
	{ "lambda$weatherDialog$3", "(Lmindustry/type/Weather$WeatherEntry;[Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$weatherDialog$6", "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$weatherDialog$4", "(Lmindustry/type/Weather$WeatherEntry;[Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$weatherDialog$5", "(Lmindustry/type/Weather$WeatherEntry;[Ljava/lang/Runnable;)V" },
	{ "lambda$setupMain$175", "(Lmindustry/game/Team;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setupMain$202", "(Lmindustry/game/Rules$TeamRule;)Z" },
	{ "lambda$setupMain$197", "(Lmindustry/game/Rules$TeamRule;)Z" },
	{ "lambda$setupMain$194", "(Lmindustry/game/Team;)Z" },
	{ "lambda$setupMain$182", "(Lmindustry/game/Team;)Z" },
	{ "lambda$setupMain$172", "()Lmindustry/game/Team;" },
	{ "lambda$setupMain$171", "(Lmindustry/game/Team;)V" },
	{ "lambda$setupMain$170", "()Lmindustry/game/Team;" },
	{ "lambda$setupMain$169", "(Lmindustry/game/Team;)V" },
	{ "lambda$setupMain$168", "()Z" },
	{ "lambda$setupMain$167", "(Z)V" },
	{ "lambda$setupMain$161", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setupMain$166", "(Larc/scene/ui/TextButton;)Z" },
	{ "lambda$setupMain$165", "()V" },
	{ "lambda$setupMain$164", "(Lmindustry/type/Planet;Larc/scene/ui/TextButton;)Z" },
	{ "lambda$setupMain$163", "(Lmindustry/type/Planet;)V" },
	{ "lambda$setupMain$159", "()Ljava/lang/String;" },
	{ "lambda$setupMain$158", "(Larc/func/Func;Ljava/lang/String;)V" },
	{ "lambda$setupMain$156", "()Ljava/lang/String;" },
	{ "lambda$setupMain$155", "(Larc/func/Func;Ljava/lang/String;)V" },
	{ "lambda$setupMain$154", "()Z" },
	{ "lambda$setupMain$153", "(Z)V" },
	{ "lambda$setupMain$152", "()Z" },
	{ "lambda$setupMain$151", "(Z)V" },
	{ "lambda$setupMain$149", "()Z" },
	{ "lambda$setupMain$148", "()Z" },
	{ "lambda$setupMain$147", "(Z)V" },
	{ "lambda$setupMain$146", "()V" },
	{ "lambda$setupMain$144", "(Larc/scene/ui/Button;)V" },
	{ "lambda$setupMain$145", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setupMain$143", "()F" },
	{ "lambda$setupMain$142", "(F)V" },
	{ "lambda$setupMain$141", "()Z" },
	{ "lambda$setupMain$140", "()I" },
	{ "lambda$setupMain$139", "(I)V" },
	{ "lambda$setupMain$138", "()Z" },
	{ "lambda$setupMain$137", "()I" },
	{ "lambda$setupMain$136", "(I)V" },
	{ "lambda$setupMain$135", "()Z" },
	{ "lambda$setupMain$134", "()I" },
	{ "lambda$setupMain$133", "(I)V" },
	{ "lambda$setupMain$132", "()Z" },
	{ "lambda$setupMain$131", "()I" },
	{ "lambda$setupMain$130", "(I)V" },
	{ "lambda$setupMain$128", "()Z" },
	{ "lambda$setupMain$127", "(Z)V" },
	{ "lambda$setupMain$126", "()Z" },
	{ "lambda$setupMain$125", "(Z)V" },
	{ "lambda$setupMain$124", "()Z" },
	{ "lambda$setupMain$123", "(Z)V" },
	{ "lambda$setupMain$122", "()Z" },
	{ "lambda$setupMain$121", "(Z)V" },
	{ "lambda$setupMain$120", "()Z" },
	{ "lambda$setupMain$119", "(Z)V" },
	{ "lambda$setupMain$118", "()Z" },
	{ "lambda$setupMain$117", "(Z)V" },
	{ "lambda$setupMain$116", "()Z" },
	{ "lambda$setupMain$115", "()F" },
	{ "lambda$setupMain$114", "(F)V" },
	{ "lambda$setupMain$113", "()Z" },
	{ "lambda$setupMain$112", "(Z)V" },
	{ "lambda$setupMain$111", "()Z" },
	{ "lambda$setupMain$110", "(Z)V" },
	{ "lambda$setupMain$109", "()Z" },
	{ "lambda$setupMain$108", "(Z)V" },
	{ "lambda$setupMain$107", "()Z" },
	{ "lambda$setupMain$106", "(Z)V" },
	{ "lambda$setupMain$105", "()Z" },
	{ "lambda$setupMain$104", "(Z)V" },
	{ "lambda$setupMain$103", "()V" },
	{ "lambda$setupMain$102", "()Z" },
	{ "lambda$setupMain$101", "()Z" },
	{ "lambda$setupMain$100", "(Z)V" },
	{ "lambda$setupMain$99", "()Z" },
	{ "lambda$setupMain$98", "()Z" },
	{ "lambda$setupMain$97", "(Z)V" },
	{ "lambda$setupMain$96", "()Z" },
	{ "lambda$setupMain$95", "(Z)V" },
	{ "lambda$setupMain$94", "()F" },
	{ "lambda$setupMain$93", "(F)V" },
	{ "lambda$setupMain$92", "()F" },
	{ "lambda$setupMain$91", "(F)V" },
	{ "lambda$setupMain$90", "()F" },
	{ "lambda$setupMain$89", "(F)V" },
	{ "lambda$setupMain$88", "()F" },
	{ "lambda$setupMain$87", "(F)V" },
	{ "lambda$setupMain$86", "()F" },
	{ "lambda$setupMain$85", "(F)V" },
	{ "lambda$setupMain$84", "()F" },
	{ "lambda$setupMain$83", "(F)V" },
	{ "lambda$setupMain$82", "()I" },
	{ "lambda$setupMain$81", "(I)V" },
	{ "lambda$setupMain$80", "()Z" },
	{ "lambda$setupMain$79", "(Z)V" },
	{ "lambda$setupMain$78", "()Z" },
	{ "lambda$setupMain$77", "(Z)V" },
	{ "lambda$setupMain$76", "()Z" },
	{ "lambda$setupMain$75", "(Z)V" },
	{ "lambda$setupMain$74", "()Z" },
	{ "lambda$setupMain$73", "(Z)V" },
	{ "lambda$setupMain$72", "()V" },
	{ "lambda$setupMain$67", "()V" },
	{ "lambda$setupMain$69", "()V" },
	{ "lambda$setupMain$66", "()F" },
	{ "lambda$setupMain$65", "(F)V" },
	{ "lambda$setupMain$64", "()F" },
	{ "lambda$setupMain$63", "(F)V" },
	{ "lambda$setupMain$62", "()Z" },
	{ "lambda$setupMain$61", "()F" },
	{ "lambda$setupMain$60", "(F)V" },
	{ "lambda$setupMain$59", "()F" },
	{ "lambda$setupMain$58", "(F)V" },
	{ "lambda$setupMain$57", "()Z" },
	{ "lambda$setupMain$56", "()F" },
	{ "lambda$setupMain$55", "(F)V" },
	{ "lambda$setupMain$54", "()Z" },
	{ "lambda$setupMain$53", "(Z)V" },
	{ "lambda$setupMain$52", "()Z" },
	{ "lambda$setupMain$51", "()Z" },
	{ "lambda$setupMain$50", "(Z)V" },
	{ "lambda$setupMain$49", "()Z" },
	{ "lambda$setupMain$48", "(Z)V" },
	{ "lambda$setupMain$47", "()Z" },
	{ "lambda$setupMain$46", "(Z)V" },
	{ "lambda$setupMain$45", "()Z" },
	{ "lambda$setupMain$44", "(Z)V" },
	{ "lambda$setupMain$43", "()Z" },
	{ "lambda$setupMain$42", "(Z)V" },
	{ "lambda$setupMain$41", "()Z" },
	{ "lambda$setupMain$40", "(Z)V" },
	{ "lambda$setupMain$39", "()Z" },
	{ "lambda$setupMain$38", "(Z)V" },
	{ "lambda$setupMain$37", "()Z" },
	{ "lambda$setupMain$36", "(Z)V" },
	{ "lambda$setupMain$35", "()Z" },
	{ "lambda$setupMain$34", "(Z)V" },
	{ "lambda$setupMain$33", "()Z" },
	{ "lambda$setupMain$32", "(Z)V" },
	{ "lambda$setupMain$31", "()Z" },
	{ "lambda$setupMain$30", "()F" },
	{ "lambda$setupMain$29", "(F)V" },
	{ "lambda$setupMain$28", "()Z" },
	{ "lambda$setupMain$27", "()F" },
	{ "lambda$setupMain$26", "(F)V" },
	{ "lambda$setupMain$25", "()Z" },
	{ "lambda$setupMain$24", "()F" },
	{ "lambda$setupMain$23", "(F)V" },
	{ "lambda$setupMain$22", "()Z" },
	{ "lambda$setupMain$21", "()I" },
	{ "lambda$setupMain$20", "(I)V" },
	{ "lambda$setupMain$19", "()Z" },
	{ "lambda$setupMain$18", "()Z" },
	{ "lambda$setupMain$17", "(Z)V" },
	{ "lambda$setupMain$16", "()Z" },
	{ "lambda$setupMain$15", "()Z" },
	{ "lambda$setupMain$14", "(Z)V" },
	{ "lambda$setupMain$13", "()Z" },
	{ "lambda$setupMain$12", "()Z" },
	{ "lambda$setupMain$11", "(Z)V" },
	{ "lambda$setupMain$10", "()Z" },
	{ "lambda$setupMain$9", "()Z" },
	{ "lambda$setupMain$8", "(Z)V" },
	{ "lambda$setupMain$7", "()Z" },
	{ "lambda$setupMain$6", "()Z" },
	{ "lambda$setupMain$5", "(Z)V" },
	{ "lambda$setupMain$4", "()Z" },
	{ "lambda$setupMain$3", "()Z" },
	{ "lambda$setupMain$2", "(Z)V" },
	{ "lambda$setupMain$1", "()Z" },
	{ "lambda$setupMain$0", "(Z)V" },
	{ "lambda$setup$2", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$0", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$setup$1", "(Ljava/lang/String;)V" },
	{ "lambda$new$2", "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$new$5", "()V" },
	{ "lambda$new$4", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
	{ "lambda$new$3", "(Lmindustry/ui/dialogs/BaseDialog;)V" },
};

static FieldMetadata fields[] {
	{ "rules", &class_mindustry_game_Rules, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_rules), "Lmindustry/game/Rules;", 0 },
	{ "main", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_main), "Larc/scene/ui/layout/Table;", 2 },
	{ "resetter", &class_arc_func_Prov, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_resetter), "Larc/func/Prov;", 2 },
	{ "loadoutDialog", &class_mindustry_ui_dialogs_LoadoutDialog, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_loadoutDialog), "Lmindustry/ui/dialogs/LoadoutDialog;", 2 },
	{ "bannedBlocks", &class_mindustry_editor_BannedContentDialog, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_bannedBlocks), "Lmindustry/editor/BannedContentDialog;", 2 },
	{ "bannedUnits", &class_mindustry_editor_BannedContentDialog, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_bannedUnits), "Lmindustry/editor/BannedContentDialog;", 2 },
	{ "showRuleEditRule", &class_boolean, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_showRuleEditRule), "Z", 1 },
	{ "categories", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_categories), "Larc/struct/Seq;", 1 },
	{ "current", &class_arc_scene_ui_layout_Table, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_current), "Larc/scene/ui/layout/Table;", 1 },
	{ "categoryNames", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_categoryNames), "Larc/struct/Seq;", 1 },
	{ "currentName", &class_java_lang_String, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_currentName), "Ljava/lang/String;", 1 },
	{ "ruleSearch", &class_java_lang_String, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_ruleSearch), "Ljava/lang/String;", 1 },
	{ "additionalSetup", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_CustomRulesDialog, F_additionalSetup), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_CustomRulesDialog, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_CustomRulesDialog_boolean, 0, "(Z)V", 1 },
	{ "refresh", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_refresh, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_refresh, "()V", 0 },
	{ "show", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_show_mindustry_game_Rules_arc_func_Prov, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_show_mindustry_game_Rules_arc_func_Prov, "(Lmindustry/game/Rules;Larc/func/Prov;)V", 1 },
	{ "setup", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_setup, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_setup, "()V", 0 },
	{ "setupMain", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_setupMain, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_setupMain, "()V", 0 },
	{ "category", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_category_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "addToMain", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_addToMain_arc_scene_ui_layout_Table_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_addToMain_arc_scene_ui_layout_Table_java_lang_String, "(Larc/scene/ui/layout/Table;Ljava/lang/String;)V", 0 },
	{ "team", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_team_java_lang_String_arc_func_Cons_arc_func_Prov, "(Ljava/lang/String;Larc/func/Cons;Larc/func/Prov;)V", 1 },
	{ "number", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp, "(Ljava/lang/String;Larc/func/Floatc;Larc/func/Floatp;)V", 1 },
	{ "number", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_float_float, "(Ljava/lang/String;Larc/func/Floatc;Larc/func/Floatp;FF)V", 1 },
	{ "number", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp, "(Ljava/lang/String;ZLarc/func/Floatc;Larc/func/Floatp;Larc/func/Boolp;)V", 1 },
	{ "number", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp, "(Ljava/lang/String;Larc/func/Floatc;Larc/func/Floatp;Larc/func/Boolp;)V", 1 },
	{ "numberi", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_int_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_int_int, "(Ljava/lang/String;Larc/func/Intc;Larc/func/Intp;II)V", 1 },
	{ "numberi", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_numberi_java_lang_String_arc_func_Intc_arc_func_Intp_arc_func_Boolp_int_int, "(Ljava/lang/String;Larc/func/Intc;Larc/func/Intp;Larc/func/Boolp;II)V", 1 },
	{ "number", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_number_java_lang_String_boolean_arc_func_Floatc_arc_func_Floatp_arc_func_Boolp_float_float, "(Ljava/lang/String;ZLarc/func/Floatc;Larc/func/Floatp;Larc/func/Boolp;FF)V", 1 },
	{ "text", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_text_java_lang_String_arc_func_Cons_arc_func_Prov_arc_func_Boolf_arc_func_Boolp, "(Ljava/lang/String;Larc/func/Cons;Larc/func/Prov;Larc/func/Boolf;Larc/func/Boolp;)V", 1 },
	{ "check", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp, "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;)V", 1 },
	{ "check", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_check_java_lang_String_arc_func_Boolc_arc_func_Boolp_arc_func_Boolp, "(Ljava/lang/String;Larc/func/Boolc;Larc/func/Boolp;Larc/func/Boolp;)V", 1 },
	{ "ruleInfo", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_ruleInfo_arc_scene_ui_layout_Cell_java_lang_String, "(Larc/scene/ui/layout/Cell;Ljava/lang/String;)V", 1 },
	{ "field", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_field_arc_scene_ui_layout_Table_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell, "(Larc/scene/ui/layout/Table;FLarc/func/Floatc;)Larc/scene/ui/layout/Cell;", 0 },
	{ "weatherDialog", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_weatherDialog, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_weatherDialog, "()V", 0 },
	{ "lambda$weatherDialog$17", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$17_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$17_Array1_java_lang_Runnable, "([Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$weatherDialog$18", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$18_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$18_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "([Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$weatherDialog$19", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$19_mindustry_type_Weather_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$19_mindustry_type_Weather_Array1_java_lang_Runnable_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/type/Weather;[Ljava/lang/Runnable;Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$weatherDialog$0", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$0_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$0_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, "([Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$weatherDialog$1", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$1_arc_scene_ui_layout_Table_Array1_java_lang_Runnable, "(Larc/scene/ui/layout/Table;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$weatherDialog$3", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$3_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$3_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, "(Lmindustry/type/Weather$WeatherEntry;[Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$weatherDialog$6", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$6_mindustry_type_Weather$WeatherEntry_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$6_mindustry_type_Weather$WeatherEntry_arc_scene_ui_layout_Table, "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$weatherDialog$16", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$16_mindustry_type_Weather$WeatherEntry_arc_scene_ui_CheckBox_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/CheckBox;)Z", 4106 },
	{ "lambda$weatherDialog$15", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$15_mindustry_type_Weather$WeatherEntry_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;Z)V", 4106 },
	{ "lambda$weatherDialog$14", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$14_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/TextField;)Z", 4106 },
	{ "lambda$weatherDialog$13", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$13_mindustry_type_Weather$WeatherEntry_float, 0, "(Lmindustry/type/Weather$WeatherEntry;F)V", 4106 },
	{ "lambda$weatherDialog$12", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$12_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/TextField;)Z", 4106 },
	{ "lambda$weatherDialog$11", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$11_mindustry_type_Weather$WeatherEntry_float, 0, "(Lmindustry/type/Weather$WeatherEntry;F)V", 4106 },
	{ "lambda$weatherDialog$10", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$10_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/TextField;)Z", 4106 },
	{ "lambda$weatherDialog$9", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$9_mindustry_type_Weather$WeatherEntry_float, 0, "(Lmindustry/type/Weather$WeatherEntry;F)V", 4106 },
	{ "lambda$weatherDialog$8", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$8_mindustry_type_Weather$WeatherEntry_arc_scene_ui_TextField_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;Larc/scene/ui/TextField;)Z", 4106 },
	{ "lambda$weatherDialog$7", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$7_mindustry_type_Weather$WeatherEntry_float, 0, "(Lmindustry/type/Weather$WeatherEntry;F)V", 4106 },
	{ "lambda$weatherDialog$4", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$4_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$4_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable_arc_scene_ui_layout_Table, "(Lmindustry/type/Weather$WeatherEntry;[Ljava/lang/Runnable;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$weatherDialog$5", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$5_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$5_mindustry_type_Weather$WeatherEntry_Array1_java_lang_Runnable, "(Lmindustry/type/Weather$WeatherEntry;[Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$weatherDialog$2", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$weatherDialog$2_mindustry_type_Weather$WeatherEntry_R_boolean, 0, "(Lmindustry/type/Weather$WeatherEntry;)Z", 4106 },
	{ "lambda$field$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$field$0_arc_func_Floatc_java_lang_String, 0, "(Larc/func/Floatc;Ljava/lang/String;)V", 4106 },
	{ "lambda$ruleInfo$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$ruleInfo$0_java_lang_String, 0, "(Ljava/lang/String;)V", 4106 },
	{ "lambda$check$1", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$check$1_arc_func_Boolp_arc_scene_ui_CheckBox, 0, "(Larc/func/Boolp;Larc/scene/ui/CheckBox;)V", 4106 },
	{ "lambda$check$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$check$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$text$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$text$0_java_lang_String_arc_func_Boolp_arc_func_Prov_arc_func_Cons_arc_func_Boolf_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/func/Boolp;Larc/func/Prov;Larc/func/Cons;Larc/func/Boolf;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$text$2", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$text$2_arc_func_Boolp_arc_scene_ui_TextField, 0, "(Larc/func/Boolp;Larc/scene/ui/TextField;)V", 4106 },
	{ "lambda$text$1", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$text$1_arc_func_Boolp_arc_scene_ui_Label, 0, "(Larc/func/Boolp;Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$number$2", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$2_java_lang_String_arc_func_Boolp_boolean_arc_func_Floatp_arc_func_Floatc_float_float_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/func/Boolp;ZLarc/func/Floatp;Larc/func/Floatc;FFLarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$number$6", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$6_float_float_java_lang_String_R_boolean, 0, "(FFLjava/lang/String;)Z", 4106 },
	{ "lambda$number$5", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$5_arc_func_Boolp_arc_scene_ui_TextField, 0, "(Larc/func/Boolp;Larc/scene/ui/TextField;)V", 4106 },
	{ "lambda$number$4", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$4_arc_func_Floatc_java_lang_String, 0, "(Larc/func/Floatc;Ljava/lang/String;)V", 4106 },
	{ "lambda$number$3", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$3_arc_func_Boolp_arc_scene_ui_Label, 0, "(Larc/func/Boolp;Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$numberi$1", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$1_java_lang_String_arc_func_Boolp_arc_func_Intp_arc_func_Intc_int_int_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/func/Boolp;Larc/func/Intp;Larc/func/Intc;IILarc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$numberi$5", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$5_int_int_java_lang_String_R_boolean, 0, "(IILjava/lang/String;)Z", 4106 },
	{ "lambda$numberi$4", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$4_arc_func_Boolp_arc_scene_ui_TextField, 0, "(Larc/func/Boolp;Larc/scene/ui/TextField;)V", 4106 },
	{ "lambda$numberi$3", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$3_arc_func_Intc_java_lang_String, 0, "(Larc/func/Intc;Ljava/lang/String;)V", 4106 },
	{ "lambda$numberi$2", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$2_arc_func_Boolp_arc_scene_ui_Label, 0, "(Larc/func/Boolp;Larc/scene/ui/Label;)V", 4106 },
	{ "lambda$numberi$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$numberi$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$number$1", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$1_R_boolean, 0, "()Z", 4106 },
	{ "lambda$number$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$number$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$team$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$0_java_lang_String_arc_func_Cons_arc_func_Prov_arc_scene_ui_layout_Table, 0, "(Ljava/lang/String;Larc/func/Cons;Larc/func/Prov;Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$team$3", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$3_mindustry_game_Team_arc_scene_ui_ImageButton, 0, "(Lmindustry/game/Team;Larc/scene/ui/ImageButton;)V", 4106 },
	{ "lambda$team$2", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$2_arc_func_Prov_mindustry_game_Team_arc_scene_ui_ImageButton_R_boolean, 0, "(Larc/func/Prov;Lmindustry/game/Team;Larc/scene/ui/ImageButton;)Z", 4106 },
	{ "lambda$team$1", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$team$1_arc_func_Cons_mindustry_game_Team, 0, "(Larc/func/Cons;Lmindustry/game/Team;)V", 4106 },
	{ "lambda$setupMain$225", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$225_Array1_boolean_R_boolean, 0, "([Z)Z", 4106 },
	{ "lambda$setupMain$175", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$175_mindustry_game_Team_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$175_mindustry_game_Team_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table, "(Lmindustry/game/Team;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setupMain$224", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$224_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$223", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$223_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$222", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$222_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$221", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$221_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$220", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$220_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$219", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$219_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$218", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$218_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$217", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$217_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$216", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$216_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$215", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$215_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$214", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$214_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$213", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$213_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$212", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$212_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$211", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$211_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$210", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$210_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$209", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$209_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$208", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$208_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$207", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$207_mindustry_game_Rules$TeamRule_boolean, 0, "(Lmindustry/game/Rules$TeamRule;Z)V", 4106 },
	{ "lambda$setupMain$206", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$206_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$205", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$205_mindustry_game_Rules$TeamRule_boolean, 0, "(Lmindustry/game/Rules$TeamRule;Z)V", 4106 },
	{ "lambda$setupMain$204", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$204_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$203", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$203_mindustry_game_Rules$TeamRule_boolean, 0, "(Lmindustry/game/Rules$TeamRule;Z)V", 4106 },
	{ "lambda$setupMain$202", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$202_mindustry_game_Rules$TeamRule_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$202_mindustry_game_Rules$TeamRule_R_boolean, "(Lmindustry/game/Rules$TeamRule;)Z", 4098 },
	{ "lambda$setupMain$201", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$201_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$200", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$200_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$199", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$199_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$198", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$198_mindustry_game_Rules$TeamRule_boolean, 0, "(Lmindustry/game/Rules$TeamRule;Z)V", 4106 },
	{ "lambda$setupMain$197", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$197_mindustry_game_Rules$TeamRule_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$197_mindustry_game_Rules$TeamRule_R_boolean, "(Lmindustry/game/Rules$TeamRule;)Z", 4098 },
	{ "lambda$setupMain$196", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$196_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$195", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$195_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$194", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$194_mindustry_game_Team_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$194_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 4098 },
	{ "lambda$setupMain$193", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$193_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$192", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$192_mindustry_game_Rules$TeamRule_boolean, 0, "(Lmindustry/game/Rules$TeamRule;Z)V", 4106 },
	{ "lambda$setupMain$191", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$191_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$190", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$190_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$189", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$189_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$188", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$188_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$187", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$187_mindustry_game_Rules$TeamRule_R_int, 0, "(Lmindustry/game/Rules$TeamRule;)I", 4106 },
	{ "lambda$setupMain$186", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$186_mindustry_game_Rules$TeamRule_int, 0, "(Lmindustry/game/Rules$TeamRule;I)V", 4106 },
	{ "lambda$setupMain$185", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$185_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$184", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$184_mindustry_game_Rules$TeamRule_R_int, 0, "(Lmindustry/game/Rules$TeamRule;)I", 4106 },
	{ "lambda$setupMain$183", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$183_mindustry_game_Rules$TeamRule_int, 0, "(Lmindustry/game/Rules$TeamRule;I)V", 4106 },
	{ "lambda$setupMain$182", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$182_mindustry_game_Team_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$182_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 4098 },
	{ "lambda$setupMain$181", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$181_mindustry_game_Rules$TeamRule_R_boolean, 0, "(Lmindustry/game/Rules$TeamRule;)Z", 4106 },
	{ "lambda$setupMain$180", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$180_mindustry_game_Rules$TeamRule_boolean, 0, "(Lmindustry/game/Rules$TeamRule;Z)V", 4106 },
	{ "lambda$setupMain$179", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$179_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$178", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$178_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$177", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$177_mindustry_game_Rules$TeamRule_R_float, 0, "(Lmindustry/game/Rules$TeamRule;)F", 4106 },
	{ "lambda$setupMain$176", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$176_mindustry_game_Rules$TeamRule_float, 0, "(Lmindustry/game/Rules$TeamRule;F)V", 4106 },
	{ "lambda$setupMain$174", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$174_Array1_boolean_arc_scene_ui_TextButton, 0, "([ZLarc/scene/ui/TextButton;)V", 4106 },
	{ "lambda$setupMain$173", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$173_Array1_boolean, 0, "([Z)V", 4106 },
	{ "lambda$setupMain$172", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$172_R_mindustry_game_Team, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$172_R_mindustry_game_Team, "()Lmindustry/game/Team;", 4098 },
	{ "lambda$setupMain$171", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$171_mindustry_game_Team, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$171_mindustry_game_Team, "(Lmindustry/game/Team;)V", 4098 },
	{ "lambda$setupMain$170", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$170_R_mindustry_game_Team, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$170_R_mindustry_game_Team, "()Lmindustry/game/Team;", 4098 },
	{ "lambda$setupMain$169", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$169_mindustry_game_Team, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$169_mindustry_game_Team, "(Lmindustry/game/Team;)V", 4098 },
	{ "lambda$setupMain$168", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$168_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$168_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$167", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$167_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$167_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$161", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$161_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$161_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setupMain$166", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$166_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$166_arc_scene_ui_TextButton_R_boolean, "(Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$setupMain$165", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$165, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$165, "()V", 4098 },
	{ "lambda$setupMain$164", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$164_mindustry_type_Planet_arc_scene_ui_TextButton_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$164_mindustry_type_Planet_arc_scene_ui_TextButton_R_boolean, "(Lmindustry/type/Planet;Larc/scene/ui/TextButton;)Z", 4098 },
	{ "lambda$setupMain$163", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$163_mindustry_type_Planet, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$163_mindustry_type_Planet, "(Lmindustry/type/Planet;)V", 4098 },
	{ "lambda$setupMain$162", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$162_mindustry_type_Planet_R_boolean, 0, "(Lmindustry/type/Planet;)Z", 4106 },
	{ "lambda$setupMain$160", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$160_arc_func_Func_java_lang_String_R_boolean, 0, "(Larc/func/Func;Ljava/lang/String;)Z", 4106 },
	{ "lambda$setupMain$159", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$159_R_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$159_R_java_lang_String, "()Ljava/lang/String;", 4098 },
	{ "lambda$setupMain$158", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$158_arc_func_Func_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$158_arc_func_Func_java_lang_String, "(Larc/func/Func;Ljava/lang/String;)V", 4098 },
	{ "lambda$setupMain$157", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$157_arc_func_Func_java_lang_String_R_boolean, 0, "(Larc/func/Func;Ljava/lang/String;)Z", 4106 },
	{ "lambda$setupMain$156", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$156_R_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$156_R_java_lang_String, "()Ljava/lang/String;", 4098 },
	{ "lambda$setupMain$155", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$155_arc_func_Func_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$155_arc_func_Func_java_lang_String, "(Larc/func/Func;Ljava/lang/String;)V", 4098 },
	{ "lambda$setupMain$154", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$154_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$154_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$153", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$153_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$153_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$152", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$152_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$152_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$151", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$151_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$151_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$150", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$150_java_lang_String_R_arc_struct_Seq, 0, "(Ljava/lang/String;)Larc/struct/Seq;", 4106 },
	{ "lambda$setupMain$149", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$149_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$149_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$148", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$148_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$148_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$147", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$147_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$147_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$146", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$146, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$146, "()V", 4098 },
	{ "lambda$setupMain$144", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$144_arc_scene_ui_Button, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$144_arc_scene_ui_Button, "(Larc/scene/ui/Button;)V", 4098 },
	{ "lambda$setupMain$145", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$145_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$145_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setupMain$143", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$143_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$143_R_float, "()F", 4098 },
	{ "lambda$setupMain$142", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$142_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$142_float, "(F)V", 4098 },
	{ "lambda$setupMain$141", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$141_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$141_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$140", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$140_R_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$140_R_int, "()I", 4098 },
	{ "lambda$setupMain$139", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$139_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$139_int, "(I)V", 4098 },
	{ "lambda$setupMain$138", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$138_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$138_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$137", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$137_R_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$137_R_int, "()I", 4098 },
	{ "lambda$setupMain$136", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$136_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$136_int, "(I)V", 4098 },
	{ "lambda$setupMain$135", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$135_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$135_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$134", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$134_R_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$134_R_int, "()I", 4098 },
	{ "lambda$setupMain$133", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$133_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$133_int, "(I)V", 4098 },
	{ "lambda$setupMain$132", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$132_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$132_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$131", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$131_R_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$131_R_int, "()I", 4098 },
	{ "lambda$setupMain$130", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$130_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$130_int, "(I)V", 4098 },
	{ "lambda$setupMain$129", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$129_R_boolean, 0, "()Z", 4106 },
	{ "lambda$setupMain$128", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$128_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$128_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$127", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$127_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$127_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$126", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$126_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$126_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$125", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$125_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$125_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$124", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$124_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$124_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$123", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$123_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$123_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$122", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$122_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$122_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$121", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$121_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$121_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$120", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$120_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$120_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$119", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$119_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$119_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$118", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$118_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$118_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$117", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$117_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$117_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$116", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$116_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$116_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$115", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$115_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$115_R_float, "()F", 4098 },
	{ "lambda$setupMain$114", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$114_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$114_float, "(F)V", 4098 },
	{ "lambda$setupMain$113", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$113_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$113_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$112", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$112_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$112_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$111", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$111_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$111_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$110", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$110_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$110_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$109", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$109_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$109_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$108", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$108_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$108_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$107", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$107_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$107_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$106", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$106_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$106_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$105", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$105_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$105_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$104", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$104_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$104_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$103", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$103, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$103, "()V", 4098 },
	{ "lambda$setupMain$102", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$102_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$102_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$101", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$101_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$101_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$100", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$100_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$100_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$99", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$99_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$99_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$98", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$98_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$98_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$97", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$97_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$97_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$96", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$96_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$96_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$95", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$95_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$95_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$94", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$94_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$94_R_float, "()F", 4098 },
	{ "lambda$setupMain$93", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$93_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$93_float, "(F)V", 4098 },
	{ "lambda$setupMain$92", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$92_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$92_R_float, "()F", 4098 },
	{ "lambda$setupMain$91", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$91_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$91_float, "(F)V", 4098 },
	{ "lambda$setupMain$90", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$90_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$90_R_float, "()F", 4098 },
	{ "lambda$setupMain$89", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$89_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$89_float, "(F)V", 4098 },
	{ "lambda$setupMain$88", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$88_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$88_R_float, "()F", 4098 },
	{ "lambda$setupMain$87", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$87_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$87_float, "(F)V", 4098 },
	{ "lambda$setupMain$86", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$86_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$86_R_float, "()F", 4098 },
	{ "lambda$setupMain$85", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$85_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$85_float, "(F)V", 4098 },
	{ "lambda$setupMain$84", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$84_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$84_R_float, "()F", 4098 },
	{ "lambda$setupMain$83", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$83_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$83_float, "(F)V", 4098 },
	{ "lambda$setupMain$82", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$82_R_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$82_R_int, "()I", 4098 },
	{ "lambda$setupMain$81", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$81_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$81_int, "(I)V", 4098 },
	{ "lambda$setupMain$80", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$80_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$80_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$79", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$79_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$79_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$78", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$78_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$78_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$77", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$77_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$77_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$76", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$76_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$76_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$75", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$75_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$75_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$74", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$74_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$74_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$73", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$73_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$73_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$72", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$72, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$72, "()V", 4098 },
	{ "lambda$setupMain$67", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$67, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$67, "()V", 4098 },
	{ "lambda$setupMain$71", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$71, 0, "()V", 4106 },
	{ "lambda$setupMain$70", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$70, 0, "()V", 4106 },
	{ "lambda$setupMain$69", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$69, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$69, "()V", 4098 },
	{ "lambda$setupMain$68", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$68_mindustry_type_Item_R_boolean, 0, "(Lmindustry/type/Item;)Z", 4106 },
	{ "lambda$setupMain$66", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$66_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$66_R_float, "()F", 4098 },
	{ "lambda$setupMain$65", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$65_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$65_float, "(F)V", 4098 },
	{ "lambda$setupMain$64", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$64_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$64_R_float, "()F", 4098 },
	{ "lambda$setupMain$63", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$63_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$63_float, "(F)V", 4098 },
	{ "lambda$setupMain$62", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$62_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$62_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$61", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$61_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$61_R_float, "()F", 4098 },
	{ "lambda$setupMain$60", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$60_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$60_float, "(F)V", 4098 },
	{ "lambda$setupMain$59", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$59_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$59_R_float, "()F", 4098 },
	{ "lambda$setupMain$58", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$58_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$58_float, "(F)V", 4098 },
	{ "lambda$setupMain$57", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$57_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$57_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$56", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$56_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$56_R_float, "()F", 4098 },
	{ "lambda$setupMain$55", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$55_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$55_float, "(F)V", 4098 },
	{ "lambda$setupMain$54", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$54_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$54_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$53", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$53_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$53_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$52", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$52_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$52_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$51", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$51_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$51_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$50", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$50_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$50_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$49", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$49_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$49_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$48", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$48_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$48_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$47", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$47_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$47_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$46", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$46_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$46_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$45", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$45_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$45_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$44", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$44_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$44_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$43", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$43_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$43_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$42", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$42_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$42_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$41", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$41_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$41_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$40", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$40_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$40_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$39", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$39_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$39_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$38", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$38_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$38_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$37", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$37_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$37_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$36", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$36_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$36_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$35", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$35_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$35_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$34", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$34_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$34_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$33", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$33_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$33_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$32", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$32_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$32_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$31", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$31_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$31_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$30", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$30_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$30_R_float, "()F", 4098 },
	{ "lambda$setupMain$29", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$29_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$29_float, "(F)V", 4098 },
	{ "lambda$setupMain$28", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$28_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$28_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$27", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$27_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$27_R_float, "()F", 4098 },
	{ "lambda$setupMain$26", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$26_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$26_float, "(F)V", 4098 },
	{ "lambda$setupMain$25", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$25_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$25_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$24", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$24_R_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$24_R_float, "()F", 4098 },
	{ "lambda$setupMain$23", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$23_float, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$23_float, "(F)V", 4098 },
	{ "lambda$setupMain$22", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$22_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$22_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$21", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$21_R_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$21_R_int, "()I", 4098 },
	{ "lambda$setupMain$20", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$20_int, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$20_int, "(I)V", 4098 },
	{ "lambda$setupMain$19", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$19_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$19_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$18", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$18_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$18_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$17", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$17_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$17_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$16", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$16_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$16_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$15", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$15_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$15_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$14", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$14_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$14_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$13", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$13_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$13_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$12", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$12_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$12_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$11", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$11_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$11_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$10", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$10_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$10_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$9", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$9_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$9_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$8", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$8_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$8_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$7", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$7_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$7_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$6", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$6_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$6_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$5", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$5_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$5_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$4", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$4_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$4_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$3", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$3_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$3_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$2", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$2_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$2_boolean, "(Z)V", 4098 },
	{ "lambda$setupMain$1", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$1_R_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$1_R_boolean, "()Z", 4098 },
	{ "lambda$setupMain$0", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$0_boolean, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setupMain$0_boolean, "(Z)V", 4098 },
	{ "lambda$setup$2", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$2_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$2_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$0", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$0_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$0_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$setup$1", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$1_java_lang_String, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$setup$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$1, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$1, "()V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$2_mindustry_ui_dialogs_BaseDialog_arc_scene_ui_layout_Table, "(Lmindustry/ui/dialogs/BaseDialog;Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$5, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$5, "()V", 4098 },
	{ "lambda$new$4", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$4_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog, VTABLE_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$3_mindustry_ui_dialogs_BaseDialog, "(Lmindustry/ui/dialogs/BaseDialog;)V", 4098 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_dialogs_CustomRulesDialog_lambda$new$0_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/type/UnitType;)Z", 4106 },
};

Class class_mindustry_ui_dialogs_CustomRulesDialog{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/CustomRulesDialog",
		.parentClass = (intptr_t) &class_mindustry_ui_dialogs_BaseDialog,
		.size = sizeof(mindustry_ui_dialogs_CustomRulesDialog),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_CustomRulesDialog,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_CustomRulesDialog,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_CustomRulesDialog,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 301,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 503,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_CustomRulesDialog = registerClass(&class_mindustry_ui_dialogs_CustomRulesDialog);

}
