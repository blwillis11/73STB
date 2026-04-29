//basic path macros
#define P(PATH) \y\CC\addons\oclf\##PATH
    //P((Something) => "\y\CC\addons\oclf\something

#undef QUOTE
// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\y\CC\addons\oclf\data\loading_bg.jpg"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define QUOTE(s) #s
