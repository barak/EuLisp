;;; EuLisp system 'youtoo'
;;;   Interface file for module vector

(definterface vector
  (import (telos convert copy collect compare fpi list callback)
   syntax (_telos0)
   full-import (mop-alloc mop-access mop-prim mop-key mop-class mop-init mop-inspect mop-gf mop-meth mop-defcl boot boot1 telos condition event thread dynamic let-cc convert copy compare callback collect integer number fpi list)
   export (
    ((name . map1-vector) (pos . 11) (origin vector . map1-vector))
    ((name . maximum-vector-size) (pos) (origin vector . maximum-vector-size) (class . constant) (value 536870911))
    ((name . do1-vector) (pos . 13) (origin vector . do1-vector))
    ((name . vector-append) (pos . 7) (origin vector . vector-append))
    ((name . vector-empty?) (pos . 16) (origin vector . vector-empty?) (inline (G006763 (primitive-size) (fpi-zerop))))
    ((name . accumulate1-vector) (pos . 6) (origin vector . accumulate1-vector))
    ((name . anyp1-vector) (pos . 4) (origin vector . anyp1-vector))
    ((name . reverse-vector!) (pos . 9) (origin vector . reverse-vector!))
    ((name . permute) (pos . 15) (origin vector . permute))
    ((name . accumulate-vector) (pos . 10) (origin vector . accumulate-vector))
    ((name . reverse-vector) (pos . 14) (origin vector . reverse-vector))
    ((name . vector-size) (pos . 8) (origin boot1 . vector-size) (inline (G0092 (primitive-size))))
    ((name . vector-ref) (pos . 7) (origin boot1 . vector-ref) (inline (G0094 (primitive-ref))) (setter (G00102 (set-primitive-ref))))
    ((name . subvector) (pos . 3) (origin vector . subvector))
    ((name . member1-vector) (pos . 2) (origin vector . member1-vector))
    ((name . <vector>) (pos . 8) (origin vector . <vector>) (class . constant))
    ((name . vector?) (pos . 5) (origin vector . vector?))
    ((name . make-vector) (pos . 38) (origin boot1 . make-vector))
    ((name . all?1-vector) (pos . 12) (origin vector . all?1-vector))
   )
   local-literals (
    (top-level . 120)
    (member1-vector . 119)
    (subvector . 118)
    (anyp1-vector . 117)
    (accumulate1-vector . 116)
    (vector-append . 115)
    (reverse-vector! . 114)
    (accumulate-vector . 113)
    (map1-vector . 112)
    (all?1-vector . 111)
    (do1-vector . 110)
    (reverse-vector . 109)
    (permute . 108)
    (vector-empty? . 107)
    (|(method deep-copy)| . 80)
    (|(method shallow-copy)| . 79)
    ((converter <vector>) . 78)
    (<vector> . 77)
    (converter . 76)
    (|(method reverse!)| . 75)
    (|(method reverse)| . 74)
    (|(method size)| . 73)
    (|(method concatenate)| . 72)
    (|(method reset)| . 71)
    (|(method (setter element))| . 70)
    (|(method element)| . 69)
    (|(method member)| . 68)
    (|(method map)| . 67)
    (|(method do)| . 66)
    (|(method all?)| . 65)
    (|(method any?)| . 64)
    (|(method accumulate1)| . 63)
    (|(method accumulate)| . 62)
    (|(method emptyp)| . 61)
    (|(method initialize)| . 60)
    (|(method vector?)| . 59)
    (direct-keywords: . 58)
    (direct-slots: . 57)
    (direct-superclasses: . 56)
    (vector . 55)
    (name: . 54)
    (vector? . 53)
    (fill-value: . 49)
    (anonymous . 19)
    (size: . 18)
   )
   literals (
   )
))
