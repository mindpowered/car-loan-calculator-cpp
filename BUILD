cc_library(
  name = 'carloancalculator',
  visibility = ['//visibility:public'],
  deps = [
    '@haxecpp//:haxecpp',
    '@maglev//:maglev',
    ':libcarloancalculator_a',
  ],
  strip_include_prefix = 'include/',
  hdrs = [
    'include/carloancalculator/CarLoanCalculator.h',
  ] + glob(["include/mindpowered/**/*.h"]),
  linkstatic = 1,
  alwayslink = 1,
  linkopts = ["-pthread"],
)

cc_import(
  name = 'libcarloancalculator_a',
  static_library = 'libcarloancalculator.a',
  alwayslink = 1,
)

genrule(
  name = 'make_libcarloancalculator_a',
  outs = ["libcarloancalculator.a"],
  cmd = "export HOME=/root && haxelib setup /root/haxelib && (cd $$(dirname $(location Build.xml)); haxelib run hxcpp Build.xml) && mv $$(dirname $(location Build.xml))/liboutput.a $@ && chmod u+x $(location strip.sh) && $(location strip.sh) $@",
  tools = glob(["*.xml", "*.txt", "*.h", "src/**", "include/**", "strip.sh"]),
)
