// SPDX-License-Identifier: MIT
// cctest_csmith_efe15959.c --- cctest case csmith_efe15959 (csmith seed 4024523097)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc8e934a5 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 4024523097 -o /tmp/csmith_gen_8f45mow6/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   unsigned f0 : 11;
   uint16_t  f1;
};
#pragma pack(pop)

union U1 {
   const int8_t * f0;
   const uint32_t  f1;
   int8_t  f2;
   uint64_t  f3;
};


static int8_t g_11[4][4][4] = {{{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L}},{{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L}},{{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L}},{{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L},{0x12L,0xE3L,0xE3L,0x12L}}};
static int32_t g_35 = (-1L);
static struct S0 g_63 = {30,0x75B1L};
static int8_t *g_65 = &g_11[0][0][0];
static int8_t **g_64 = &g_65;
static uint8_t g_81 = 0xF6L;
static int32_t g_85[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static uint64_t g_87 = 0xA391DE2FC23FAAB9LL;
static int64_t g_106[6] = {0L,0L,0L,0L,0L,0L};
static int8_t g_108 = 0xF8L;
static int32_t *g_129 = &g_35;
static int64_t g_141 = 0x7072EE8FFC0A9984LL;
static uint64_t g_143 = 0x05564AC20F127D3BLL;
static uint8_t g_157 = 1UL;
static uint8_t *g_156 = &g_157;
static uint64_t g_160 = 18446744073709551612UL;
static int64_t *g_205[4][5] = {{(void*)0,&g_141,&g_106[4],&g_106[0],&g_106[0]},{&g_141,&g_141,&g_141,&g_106[2],&g_141},{&g_106[0],&g_141,&g_106[2],&g_106[0],&g_106[2]},{&g_106[0],&g_106[0],&g_106[4],&g_141,(void*)0}};
static int64_t **g_204 = &g_205[1][1];
static int64_t ***g_203 = &g_204;
static int16_t g_220[4] = {(-1L),(-1L),(-1L),(-1L)};
static int32_t g_233 = 0xDE68A025L;
static union U1 g_275 = {0};
static uint16_t g_311 = 0x3A78L;
static int64_t g_313 = 1L;
static int32_t g_315[2][2] = {{0xBB9C0675L,0xBB9C0675L},{0xBB9C0675L,0xBB9C0675L}};
static uint32_t g_335 = 1UL;
static uint32_t g_340 = 18446744073709551606UL;
static uint64_t *g_361 = &g_143;
static uint64_t **g_360 = &g_361;
static int16_t g_402[4][5] = {{8L,1L,1L,8L,1L},{8L,8L,0xA630L,8L,8L},{1L,8L,1L,1L,8L},{8L,1L,1L,8L,1L}};
static struct S0 *g_466 = &g_63;
static struct S0 **g_465 = &g_466;
static uint64_t g_536 = 18446744073709551615UL;
static union U1 *g_571[3] = {(void*)0,(void*)0,(void*)0};
static union U1 **g_570 = &g_571[2];
static uint32_t *g_615 = &g_335;
static uint32_t * const *g_614 = &g_615;
static uint32_t * const **g_613 = &g_614;
static struct S0 *g_908 = &g_63;
static uint16_t * const **g_941 = (void*)0;
static uint32_t g_1256 = 4294967295UL;
static int32_t g_1301 = 0L;
static int64_t *****g_1373 = (void*)0;
static uint32_t g_1622 = 18446744073709551614UL;
static uint16_t g_1686 = 65531UL;
static int32_t **g_1888 = &g_129;
static int32_t ***g_1887[6] = {&g_1888,&g_1888,&g_1888,&g_1888,&g_1888,&g_1888};
static uint8_t *g_2053 = &g_81;
static uint8_t g_2068 = 255UL;
static int16_t * const g_2102 = &g_402[0][0];
static int16_t * const *g_2101 = &g_2102;
static int16_t * const **g_2100 = &g_2101;
static int16_t * const ***g_2099 = &g_2100;
static int16_t * const ****g_2098 = &g_2099;
static uint32_t g_2141 = 1UL;
static int8_t g_2179[5][1] = {{0x1FL},{1L},{0x1FL},{1L},{0x1FL}};
static const int16_t g_2192 = 0x7242L;
static int32_t g_2214[6][7][1] = {{{5L},{5L},{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L},{5L},{5L}},{{5L},{5L},{5L},{5L},{5L},{5L},{5L}}};
static int32_t g_2224 = (-3L);
static uint8_t ***g_2363 = (void*)0;
static const union U1 *g_2480[1] = {&g_275};
static const union U1 **g_2479 = &g_2480[0];
static int32_t g_2699 = 1L;
static uint64_t ***g_2889[4][6] = {{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360},{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360},{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360},{&g_360,&g_360,&g_360,&g_360,&g_360,&g_360}};
static uint64_t ***g_2890[5] = {&g_360,&g_360,&g_360,&g_360,&g_360};
static struct S0 g_2907 = {44,0x1930L};
static uint16_t g_3070 = 0xF023L;
static int16_t g_3084 = 0x6503L;
static union U1 g_3170 = {0};
static int8_t g_3187 = 0xA2L;



static int32_t  func_1(void);
static union U1  func_4(int8_t * p_5, int8_t * p_6, int32_t  p_7, uint32_t  p_8, int8_t * p_9);
static int8_t * func_12(uint32_t  p_13, int8_t * p_14, const uint64_t  p_15, int16_t  p_16);
static uint8_t  func_23(int8_t * p_24, int8_t  p_25, int8_t * p_26);
static int8_t * func_27(int64_t  p_28, uint8_t  p_29, int8_t * p_30);
static int8_t  func_45(int8_t ** p_46, uint64_t  p_47, const int8_t ** p_48);
static int8_t ** func_49(const uint64_t  p_50, int64_t  p_51, uint32_t  p_52);
static int8_t ** func_60(int64_t  p_61, int8_t ** p_62);




static int32_t  func_1(void)
{ 
    int8_t *l_10 = &g_11[3][1][0];
    int8_t **l_31 = (void*)0;
    int8_t **l_32 = (void*)0;
    int8_t *l_34[2][5][5];
    int8_t **l_33 = &l_34[1][4][3];
    int32_t l_2940 = 0x650262FCL;
    int8_t *l_2941 = (void*)0;
    uint32_t *l_2942 = &g_2141;
    int32_t l_2943[5] = {5L,5L,5L,5L,5L};
    int32_t l_3161 = 0xD540AA69L;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
                l_34[i][j][k] = (void*)0;
        }
    }
    l_3161 &= (safe_lshift_func_int16_t_s_s((func_4(l_10, func_12((l_2943[4] ^= ((*l_2942) ^= ((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((func_23(func_27((l_10 != l_10), (&g_11[3][1][0] != ((*l_33) = (void*)0)), &g_11[3][1][0]), l_2940, l_2941) , 1L), 7)), l_2940)) ^ l_2940) , 0x91D4L), (****g_2099))) <= 0UL))), (*g_64), l_2940, (*g_2102)), g_141, g_63.f1, (*g_64)) , 0x40D8L), 8));
    for (g_311 = 0; (g_311 < 54); g_311 = safe_add_func_int32_t_s_s(g_311, 8))
    { 
        uint16_t l_3171 = 0xFED2L;
        uint64_t ****l_3176 = &g_2889[2][2];
        int32_t *l_3186 = &g_35;
        for (g_143 = 0; (g_143 <= 12); ++g_143)
        { 
            int32_t *l_3168 = &l_2943[4];
            uint64_t ****l_3172[5][2][5] = {{{&g_2890[2],&g_2889[2][2],&g_2889[2][2],&g_2890[2],&g_2889[2][2]},{&g_2890[2],&g_2890[2],&g_2889[2][2],&g_2890[2],&g_2890[2]}},{{&g_2889[2][2],&g_2890[2],&g_2889[2][2],&g_2889[2][2],&g_2890[2]},{&g_2890[2],&g_2889[2][2],&g_2889[2][2],&g_2890[2],&g_2889[2][2]}},{{&g_2890[2],&g_2890[2],&g_2890[2],&g_2889[2][2],&g_2889[2][2]},{&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2]}},{{&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2]},{&g_2889[2][2],&g_2889[2][2],&g_2890[2],&g_2889[2][2],&g_2889[2][2]}},{{&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2]},{&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2],&g_2889[2][2]}}};
            uint64_t *****l_3173 = &l_3172[0][1][0];
            uint64_t ****l_3175 = &g_2889[2][2];
            uint64_t *****l_3174[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_3174[i] = &l_3175;
            for (l_3161 = 0; (l_3161 != 4); l_3161 = safe_add_func_int16_t_s_s(l_3161, 1))
            { 
                union U1 *l_3169 = &g_3170;
                (*g_1888) = l_3168;
                l_3169 = (*g_570);
                if ((*g_129))
                    continue;
            }
            (*l_3168) ^= l_3171;
            if ((&g_2889[2][2] != (l_3176 = ((*l_3173) = l_3172[1][0][4]))))
            { 
                return l_2943[4];
            }
            else
            { 
                int32_t l_3181 = 0xA9652CDAL;
                int32_t l_3182 = 0x71824CD1L;
                int32_t *l_3183 = (void*)0;
                int32_t *l_3184 = &l_2940;
                int32_t *l_3185 = &g_35;
                (*l_3184) &= (l_3182 ^= (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((((**g_614) || ((4294967295UL != (((*g_65) = 0xDBL) , ((l_2943[4] & l_3181) & l_3171))) | (**g_614))) & (-1L)), l_3171)), 13)));
                if ((*g_129))
                    continue;
                (*g_1888) = l_3185;
                if (l_2940)
                    break;
            }
            l_3186 = &l_2943[4];
        }
    }
    return g_3187;
}



static union U1  func_4(int8_t * p_5, int8_t * p_6, int32_t  p_7, uint32_t  p_8, int8_t * p_9)
{ 
    union U1 l_3160 = {0};
    return l_3160;
}



static int8_t * func_12(uint32_t  p_13, int8_t * p_14, const uint64_t  p_15, int16_t  p_16)
{ 
    int8_t l_2946 = 1L;
    int64_t l_2955[3];
    int32_t l_2976 = 0x3E74674FL;
    int32_t l_2982 = 0xB9A2C227L;
    uint8_t l_2983 = 0x28L;
    struct S0 l_2993 = {22,0x4F48L};
    int32_t l_3013 = 0x6112D81AL;
    int32_t l_3020 = 0x70E6F28DL;
    int32_t l_3021 = (-1L);
    int32_t l_3023 = 8L;
    int32_t l_3024 = 0xE5D20694L;
    int32_t l_3028 = 4L;
    int32_t l_3032 = 0xC18097C4L;
    int32_t l_3033 = 0x2FDF0BD9L;
    int32_t l_3035 = 1L;
    int32_t l_3036 = 0x34D1C211L;
    uint32_t l_3037 = 1UL;
    union U1 l_3069 = {0};
    uint16_t l_3129 = 65535UL;
    int32_t *l_3152[7][3] = {{&l_3028,&l_3028,&l_3028},{&l_3028,&l_3028,&l_3028},{&l_3028,&l_3028,&l_3028},{&l_3028,&l_3028,&l_3028},{&l_3028,&l_3028,&l_3028},{&l_3028,&l_3028,&l_3028},{&l_3028,&l_3028,&l_3028}};
    int32_t l_3153 = (-1L);
    int16_t l_3154 = 0x3766L;
    int8_t l_3155 = 0xB4L;
    int32_t l_3156 = 0x0B1FE612L;
    uint8_t l_3157 = 255UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_2955[i] = 0x136F53840C82C46ALL;
    (*g_129) ^= ((safe_rshift_func_int16_t_s_u((0xDF25L == ((l_2946 | (safe_mul_func_int16_t_s_s((l_2946 != 255UL), ((safe_mod_func_int16_t_s_s((18446744073709551615UL ^ (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((*g_65), (*p_14))), 0xED8BL))), l_2946)) <= 0x2FD9348A43C2967DLL)))) , p_13)), p_13)) < l_2955[2]);
    for (g_2699 = 0; (g_2699 >= 0); g_2699 -= 1)
    { 
        int16_t l_2956 = 0xD5FEL;
        int32_t l_2957 = 0L;
        uint16_t *l_2972 = (void*)0;
        uint16_t **l_2971 = &l_2972;
        uint16_t ***l_2970 = &l_2971;
        int32_t l_2975 = 7L;
        struct S0 l_2987[2] = {{24,65526UL},{24,65526UL}};
        const int32_t *l_2988[7][6] = {{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976},{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976},{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976},{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976},{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976},{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976},{&l_2976,&l_2976,&l_2976,&l_2976,&l_2976,&l_2976}};
        int32_t l_3034 = 0xA8E77B28L;
        union U1 ** const ** const *l_3058 = (void*)0;
        uint8_t l_3110 = 0x75L;
        int i, j;
        for (g_536 = 0; (g_536 <= 0); g_536 += 1)
        { 
            int64_t l_2973 = 0L;
            uint16_t *l_2974 = &g_63.f1;
            int32_t l_2979 = (-1L);
            int32_t l_2981 = (-10L);
            int32_t *l_2986[7];
            struct S0 l_3000[4] = {{7,65527UL},{7,65527UL},{7,65527UL},{7,65527UL}};
            int64_t l_3009 = 0x76AFD1F84FC5EEFALL;
            int16_t l_3059 = 0xAEA1L;
            int64_t ****l_3128[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_2986[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_3128[i] = &g_203;
        }
    }
    l_3035 &= (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((++(*g_2053)), ((&l_3037 == (void*)0) <= 0L))) > (((safe_mod_func_uint32_t_u_u((((**g_64) = (((safe_sub_func_uint16_t_u_u(65526UL, 0xEE29L)) , ((safe_lshift_func_int16_t_s_u((+((((safe_rshift_func_uint8_t_u_u(p_15, 2)) , g_108) , (void*)0) == (void*)0)), 5)) != (*****g_2098))) , (**g_64))) != 9UL), 0xBB91BE79L)) ^ 2L) || p_16)), 13)), 0x81B8L)) < l_2983) | 0x573233B223C61312LL);
    --l_3157;
    return p_14;
}



static uint8_t  func_23(int8_t * p_24, int8_t  p_25, int8_t * p_26)
{ 
    return p_25;
}



static int8_t * func_27(int64_t  p_28, uint8_t  p_29, int8_t * p_30)
{ 
    uint64_t l_38 = 18446744073709551609UL;
    int32_t l_222 = 1L;
    int32_t l_1591[5][1];
    int32_t *l_1631[6][6] = {{(void*)0,&g_35,&g_233,&g_35,(void*)0,&g_233},{(void*)0,&l_1591[0][0],&g_233,&l_1591[0][0],(void*)0,&g_233},{&g_233,&g_35,&l_1591[0][0],&g_35,&l_1591[0][0],&g_233},{&g_233,&g_35,&g_35,&g_35,&g_35,&g_233},{&g_35,&g_35,&l_1591[0][0],(void*)0,&g_233,&g_233},{&g_35,&g_233,&g_233,&g_233,&g_233,&g_233}};
    uint32_t l_1634[2][4] = {{0x2901ED13L,0x2901ED13L,0x2901ED13L,0x2901ED13L},{0x2901ED13L,0x2901ED13L,0x2901ED13L,0x2901ED13L}};
    int8_t *l_1696 = &g_11[3][1][0];
    int16_t *l_1720 = &g_402[2][4];
    int16_t *l_1724 = &g_220[3];
    int8_t l_1729 = 0x45L;
    union U1 **l_1752[2][2] = {{&g_571[0],&g_571[0]},{&g_571[0],&g_571[0]}};
    struct S0 l_1762[6] = {{16,1UL},{16,1UL},{16,1UL},{16,1UL},{16,1UL},{16,1UL}};
    uint64_t l_1783 = 0x60C645222889FBD0LL;
    struct S0 *l_1858[2][2][1];
    const int32_t l_1950 = 0x61D09187L;
    int16_t l_1989[3];
    int8_t l_2049 = 0x52L;
    int32_t l_2050 = 0x70407C53L;
    uint32_t l_2054[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
    int64_t ** const l_2055 = &g_205[2][2];
    int16_t * const ****l_2103 = &g_2099;
    uint32_t l_2106 = 18446744073709551615UL;
    const int16_t * const l_2191 = &g_2192;
    const int16_t * const *l_2190 = &l_2191;
    const int16_t * const **l_2189 = &l_2190;
    const int16_t * const ***l_2188[6] = {(void*)0,(void*)0,&l_2189,(void*)0,(void*)0,&l_2189};
    const int16_t * const ****l_2187[2][2][1];
    int16_t l_2222 = 0xFF75L;
    uint16_t l_2226[6][6] = {{1UL,65532UL,0x5CC0L,0x5CC0L,65532UL,1UL},{0x7030L,1UL,0x5CC0L,1UL,0x7030L,0x7030L},{1UL,1UL,1UL,1UL,65532UL,1UL},{1UL,65532UL,1UL,1UL,1UL,1UL},{0x7030L,0x7030L,1UL,65532UL,1UL,1UL},{1UL,0x7030L,65532UL,65532UL,0x7030L,1UL}};
    int64_t l_2272 = (-1L);
    uint32_t l_2275 = 5UL;
    int64_t l_2289 = 0x4AE1EF74E5CD8275LL;
    uint32_t l_2332 = 0xA1302DD7L;
    int8_t l_2371 = 0L;
    int16_t l_2372 = 0x4946L;
    int32_t *l_2515 = &g_315[0][1];
    int32_t l_2521 = 0x67270A55L;
    int64_t l_2523 = 0xF6013ADB89267ABBLL;
    int64_t l_2524 = 0L;
    int32_t l_2525 = (-1L);
    uint64_t l_2527[4][6][5] = {{{0xDEFE3D78814A312ELL,5UL,0xF95DC0257712FBF1LL,0xEA4A6B0769E0D693LL,0xDEFE3D78814A312ELL},{0xB1231E8B478C33C0LL,0UL,0xECF3E998F30EB417LL,0UL,0xB1231E8B478C33C0LL},{0xDEFE3D78814A312ELL,0xEA4A6B0769E0D693LL,0xF95DC0257712FBF1LL,5UL,0xDEFE3D78814A312ELL},{0x538AE7BE77948E1FLL,0UL,0x18266C5B130D6069LL,0UL,0x538AE7BE77948E1FLL},{0xDEFE3D78814A312ELL,5UL,0xF95DC0257712FBF1LL,0xEA4A6B0769E0D693LL,0xDEFE3D78814A312ELL},{0xB1231E8B478C33C0LL,0UL,0xECF3E998F30EB417LL,0UL,0xB1231E8B478C33C0LL}},{{0xDEFE3D78814A312ELL,0xEA4A6B0769E0D693LL,0xF95DC0257712FBF1LL,5UL,0xDEFE3D78814A312ELL},{0x538AE7BE77948E1FLL,0UL,0x18266C5B130D6069LL,0UL,0x538AE7BE77948E1FLL},{0xDEFE3D78814A312ELL,5UL,0xF95DC0257712FBF1LL,0xEA4A6B0769E0D693LL,0xDEFE3D78814A312ELL},{0xB1231E8B478C33C0LL,0UL,0xECF3E998F30EB417LL,0UL,0xB1231E8B478C33C0LL},{0xDEFE3D78814A312ELL,0xEA4A6B0769E0D693LL,0xF95DC0257712FBF1LL,5UL,0xDEFE3D78814A312ELL},{0x538AE7BE77948E1FLL,0UL,0x18266C5B130D6069LL,0UL,0x538AE7BE77948E1FLL}},{{0xDEFE3D78814A312ELL,5UL,0xF95DC0257712FBF1LL,0xEA4A6B0769E0D693LL,0xDEFE3D78814A312ELL},{0xB1231E8B478C33C0LL,0UL,0xECF3E998F30EB417LL,0UL,0xB1231E8B478C33C0LL},{0xDEFE3D78814A312ELL,0xEA4A6B0769E0D693LL,0xF95DC0257712FBF1LL,5UL,0xDEFE3D78814A312ELL},{0x538AE7BE77948E1FLL,0UL,0x18266C5B130D6069LL,0UL,0x538AE7BE77948E1FLL},{0xDEFE3D78814A312ELL,5UL,0xF95DC0257712FBF1LL,0xEA4A6B0769E0D693LL,0xDEFE3D78814A312ELL},{0xB1231E8B478C33C0LL,0UL,0xECF3E998F30EB417LL,0UL,0xB1231E8B478C33C0LL}},{{0xDEFE3D78814A312ELL,0xEA4A6B0769E0D693LL,0xF95DC0257712FBF1LL,5UL,0xDEFE3D78814A312ELL},{0x538AE7BE77948E1FLL,0UL,0x18266C5B130D6069LL,0UL,0x538AE7BE77948E1FLL},{0xDEFE3D78814A312ELL,5UL,0xF95DC0257712FBF1LL,0xEA4A6B0769E0D693LL,0xDEFE3D78814A312ELL},{0xB1231E8B478C33C0LL,0UL,0xECF3E998F30EB417LL,0UL,0xB1231E8B478C33C0LL},{0xDEFE3D78814A312ELL,0xEA4A6B0769E0D693LL,0xF95DC0257712FBF1LL,5UL,0xDEFE3D78814A312ELL},{0x538AE7BE77948E1FLL,0UL,0x18266C5B130D6069LL,0UL,0x538AE7BE77948E1FLL}}};
    int64_t l_2541 = 0x5457B12998211A96LL;
    int16_t l_2617 = (-8L);
    int32_t l_2624[7][1][1] = {{{0xC206F685L}},{{(-1L)}},{{0xC206F685L}},{{(-1L)}},{{0xC206F685L}},{{(-1L)}},{{0xC206F685L}}};
    const uint64_t l_2642[7] = {0x1A9F843DACDE340ELL,0x1A9F843DACDE340ELL,0x1A9F843DACDE340ELL,0x1A9F843DACDE340ELL,0x1A9F843DACDE340ELL,0x1A9F843DACDE340ELL,0x1A9F843DACDE340ELL};
    uint64_t l_2644 = 1UL;
    uint8_t **l_2660 = (void*)0;
    uint8_t ***l_2659 = &l_2660;
    const union U1 *l_2666[2][2][3] = {{{&g_275,&g_275,&g_275},{(void*)0,&g_275,(void*)0}},{{&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275}}};
    int64_t *l_2715[2];
    uint64_t **l_2721 = &g_361;
    int32_t l_2722 = 0xD634F682L;
    uint16_t l_2730[6] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    int32_t l_2739 = (-1L);
    int64_t l_2758 = 0x8CF0A36E3E2E5106LL;
    uint32_t l_2769 = 4UL;
    uint64_t l_2776 = 1UL;
    uint32_t ***l_2780 = (void*)0;
    uint32_t ****l_2779[3];
    uint32_t l_2810 = 6UL;
    int16_t l_2821[1][1];
    uint8_t l_2867 = 0xF5L;
    struct S0 * const *l_2923 = (void*)0;
    struct S0 * const **l_2922 = &l_2923;
    uint32_t l_2930 = 0xCE3E2539L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1591[i][j] = 0L;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1858[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 3; i++)
        l_1989[i] = (-3L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_2187[i][j][k] = &l_2188[1];
        }
    }
    for (i = 0; i < 2; i++)
        l_2715[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_2779[i] = &l_2780;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2821[i][j] = 0xB614L;
    }
    return (*g_64);
}



static int8_t  func_45(int8_t ** p_46, uint64_t  p_47, const int8_t ** p_48)
{ 
    uint8_t l_963 = 1UL;
    struct S0 *l_965 = (void*)0;
    uint32_t **l_972[6] = {&g_615,(void*)0,&g_615,&g_615,(void*)0,&g_615};
    uint32_t ***l_971 = &l_972[5];
    union U1 l_973 = {0};
    int16_t *l_985 = &g_220[3];
    uint16_t *l_1000 = (void*)0;
    int32_t l_1020 = (-1L);
    union U1 **l_1043[1][1];
    int32_t *l_1055 = &g_315[1][1];
    int32_t l_1169 = 6L;
    int32_t l_1173 = 5L;
    int32_t l_1174 = 0x7E3F4778L;
    int32_t l_1175 = 0xB299164CL;
    int32_t l_1176 = 0L;
    uint16_t l_1178[1];
    int32_t l_1368 = (-6L);
    int32_t *l_1411 = &l_1173;
    int32_t l_1427 = 0x7CC33C84L;
    int32_t l_1428 = 0xDDAA0995L;
    const uint64_t *l_1450 = &g_87;
    const uint64_t **l_1449[5];
    uint16_t l_1452[5];
    uint8_t **l_1527 = (void*)0;
    uint8_t ***l_1526 = &l_1527;
    int16_t ***l_1541 = (void*)0;
    int16_t ****l_1540 = &l_1541;
    int16_t *****l_1539[7][5] = {{&l_1540,&l_1540,&l_1540,(void*)0,&l_1540},{&l_1540,&l_1540,&l_1540,(void*)0,&l_1540},{&l_1540,&l_1540,&l_1540,(void*)0,&l_1540},{&l_1540,&l_1540,&l_1540,(void*)0,&l_1540},{&l_1540,&l_1540,&l_1540,(void*)0,&l_1540},{&l_1540,&l_1540,&l_1540,&l_1540,&l_1540},{&l_1540,&l_1540,&l_1540,&l_1540,&l_1540}};
    int32_t l_1550 = 0x7EDEA4B7L;
    uint16_t l_1551 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1043[i][j] = &g_571[2];
    }
    for (i = 0; i < 1; i++)
        l_1178[i] = 2UL;
    for (i = 0; i < 5; i++)
        l_1449[i] = &l_1450;
    for (i = 0; i < 5; i++)
        l_1452[i] = 0x4DC8L;
lbl_1397:
    for (g_157 = (-21); (g_157 >= 52); g_157 = safe_add_func_uint32_t_u_u(g_157, 2))
    { 
        int8_t l_953 = (-1L);
        int32_t l_955 = 1L;
        const union U1 l_964 = {0};
        int64_t l_983[4][6][6] = {{{0x6EF01F10FB6755CCLL,0xE743568C713D69B9LL,0x0E1A9886510E02B9LL,1L,(-4L),0x9C3873DBCB5C5C9BLL},{0L,2L,0x0D57FF08C53E8DDELL,(-1L),(-4L),(-1L)},{0L,(-4L),0x7D4984511A45F09DLL,(-1L),0x7D4984511A45F09DLL,(-4L)},{0x1338B03A2F166112LL,0x98618155E34ADF77LL,0xE5175E5DABC33084LL,(-1L),0L,0x7FCD4156F4A4A8B4LL},{(-1L),2L,(-2L),0xE8389166D8ED3C79LL,(-1L),1L},{(-1L),2L,0xBF4E4654AB0172B6LL,0x2FA0E4759803FB03LL,0L,0xC97946A9B05196F6LL}},{{0x04EB282D55D1535ELL,0x98618155E34ADF77LL,0xCFECFDA7AC3122BCLL,(-2L),0x7D4984511A45F09DLL,0x0E1A9886510E02B9LL},{1L,(-4L),(-1L),0x6EF01F10FB6755CCLL,(-4L),0xBF4E4654AB0172B6LL},{1L,2L,0x98618155E34ADF77LL,2L,(-4L),0xE743568C713D69B9LL},{0xE5175E5DABC33084LL,0xE743568C713D69B9LL,(-1L),0L,0xCFECFDA7AC3122BCLL,0xB94F972AF1B92A25LL},{2L,1L,0x04EB282D55D1535ELL,(-1L),0L,0x6EF01F10FB6755CCLL},{4L,0x27DE3E3A599C3167LL,1L,0x4D40DD7E3D1DDFEELL,2L,0L}},{{0xB95C7CD9AB6CFDD1LL,0L,2L,0x42E32EBE38E2C614LL,0L,0L},{0x9C3873DBCB5C5C9BLL,0L,0x4482F2A395C1C019LL,0x7E45E7B68F70E7DCLL,2L,0x188580B89B6C44F4LL},{0x8CD2DCA19DF95242LL,(-1L),0xEAFDBE51CCF29A8DLL,0xEAFDBE51CCF29A8DLL,(-1L),0x8CD2DCA19DF95242LL},{0x0E1A9886510E02B9LL,2L,0xB9ABFBA457D41B02LL,3L,0x4482F2A395C1C019LL,0xE8389166D8ED3C79LL},{(-9L),(-1L),1L,0x902F6B39036919F7LL,0x188580B89B6C44F4LL,0L},{(-9L),0xE5175E5DABC33084LL,0x902F6B39036919F7LL,3L,0x6EF01F10FB6755CCLL,(-1L)}},{{0x0E1A9886510E02B9LL,0x4482F2A395C1C019LL,0x2FA0E4759803FB03LL,0xEAFDBE51CCF29A8DLL,0x93D51F007DA49F8BLL,0xE5175E5DABC33084LL},{0x8CD2DCA19DF95242LL,0x04EB282D55D1535ELL,(-10L),0x7E45E7B68F70E7DCLL,0x98618155E34ADF77LL,0x2D75E0EB6DFD1E78LL},{0x9C3873DBCB5C5C9BLL,0x7FCD4156F4A4A8B4LL,1L,0x42E32EBE38E2C614LL,1L,(-3L)},{0xB95C7CD9AB6CFDD1LL,4L,(-4L),0x4D40DD7E3D1DDFEELL,0xD7399EEA7A4F9116LL,0L},{4L,0L,1L,(-1L),1L,0x7658FB2BBCCA2591LL},{2L,(-1L),0xB94F972AF1B92A25LL,0L,0x2D75E0EB6DFD1E78LL,0xCFECFDA7AC3122BCLL}}};
        int32_t l_989 = 0xBCFB13ADL;
        uint16_t *l_1001 = &g_311;
        uint16_t * const *l_1019 = &l_1000;
        uint16_t * const **l_1018 = &l_1019;
        const int32_t l_1032 = 0L;
        uint64_t l_1033 = 0xDD1B78C2AC9361BBLL;
        const int64_t * const ***l_1142[4];
        struct S0 l_1153[3] = {{2,65535UL},{2,65535UL},{2,65535UL}};
        int32_t l_1170 = 1L;
        int32_t l_1171 = 0x70E36AF5L;
        int32_t l_1172 = 0xAB60B177L;
        int32_t l_1177 = 0x562D9586L;
        uint16_t l_1186 = 65535UL;
        uint16_t l_1193 = 0UL;
        uint64_t l_1228[4][5] = {{0x09F8287454687678LL,1UL,0x394F5F6A3EF989C8LL,1UL,0x09F8287454687678LL},{0UL,1UL,0x7E8E905505F975CFLL,0x09F8287454687678LL,0x7E8E905505F975CFLL},{0x7E8E905505F975CFLL,0x7E8E905505F975CFLL,0x394F5F6A3EF989C8LL,0x09F8287454687678LL,0x0B2F33B02C096939LL},{1UL,0UL,0UL,1UL,0x7E8E905505F975CFLL}};
        int32_t l_1244 = 0x0C1B7EBBL;
        int32_t l_1245 = 0x78BB55F2L;
        int32_t l_1246 = 0x21019CD1L;
        int32_t l_1247 = (-6L);
        int32_t l_1248[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint32_t l_1252 = 8UL;
        uint16_t l_1283[3];
        const int8_t l_1309[6] = {0L,0xD3L,0L,0L,0xD3L,0L};
        int32_t *l_1323[2];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1142[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1283[i] = 65535UL;
        for (i = 0; i < 2; i++)
            l_1323[i] = &l_1170;
    }
    for (g_141 = 0; (g_141 <= 3); g_141 += 1)
    { 
        union U1 l_1326 = {0};
        struct S0 l_1333 = {12,0x5FDBL};
        int64_t * const * const l_1349[5][6][7] = {{{&g_205[1][1],&g_205[3][3],(void*)0,&g_205[0][0],&g_205[1][4],&g_205[0][0],(void*)0},{&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[0][0],&g_205[1][1],&g_205[3][3],&g_205[1][1]},{&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][1]},{&g_205[0][0],&g_205[1][4],&g_205[0][0],(void*)0,&g_205[1][1],&g_205[0][0],&g_205[1][3]},{&g_205[1][1],&g_205[1][4],&g_205[3][2],&g_205[0][0],&g_205[1][4],&g_205[1][1],&g_205[1][4]},{&g_205[1][1],(void*)0,(void*)0,&g_205[1][1],&g_205[1][3],&g_205[0][0],&g_205[1][1]}},{{&g_205[1][1],&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][1],&g_205[1][1],&g_205[1][1]},{&g_205[1][1],&g_205[1][1],&g_205[3][2],&g_205[1][1],&g_205[1][1],&g_205[3][3],&g_205[1][1]},{&g_205[1][1],&g_205[1][3],&g_205[0][0],&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][4]},{(void*)0,&g_205[1][4],&g_205[0][0],&g_205[0][0],&g_205[1][4],(void*)0,&g_205[1][3]},{&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][4],&g_205[1][1],&g_205[1][1]},{&g_205[1][1],&g_205[1][1],(void*)0,&g_205[0][0],(void*)0,&g_205[1][1],&g_205[1][1]}},{{&g_205[1][1],&g_205[1][1],&g_205[0][0],(void*)0,&g_205[1][1],&g_205[1][1],(void*)0},{&g_205[1][1],&g_205[1][4],&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][4]},{&g_205[1][1],&g_205[1][3],&g_205[0][0],&g_205[0][0],&g_205[1][3],(void*)0,&g_205[1][4]},{&g_205[0][0],&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][4],&g_205[0][0],(void*)0},{&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[0][0],&g_205[1][1],&g_205[3][3],&g_205[1][1]},{&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][1]}},{{&g_205[0][0],&g_205[1][4],&g_205[0][0],(void*)0,&g_205[1][1],&g_205[0][0],&g_205[1][3]},{&g_205[1][1],&g_205[1][4],&g_205[3][2],&g_205[0][0],&g_205[1][4],&g_205[1][1],&g_205[1][4]},{&g_205[1][1],(void*)0,(void*)0,&g_205[1][1],&g_205[1][3],&g_205[0][0],&g_205[1][1]},{&g_205[1][1],&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][1],&g_205[1][1],&g_205[1][1]},{&g_205[1][1],&g_205[1][1],&g_205[3][2],&g_205[1][1],&g_205[1][1],&g_205[3][3],&g_205[1][1]},{&g_205[1][1],&g_205[1][3],&g_205[0][0],&g_205[1][1],(void*)0,&g_205[0][0],&g_205[1][4]}},{{(void*)0,&g_205[1][4],&g_205[0][0],&g_205[0][0],&g_205[1][4],(void*)0,&g_205[1][3]},{&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][1],&g_205[1][4],&g_205[1][1],&g_205[1][1]},{&g_205[1][1],&g_205[1][1],(void*)0,&g_205[0][0],(void*)0,&g_205[1][1],&g_205[1][1]},{&g_205[1][1],&g_205[1][1],&g_205[0][0],(void*)0,(void*)0,&g_205[1][1],&g_205[1][1]},{&g_205[0][0],&g_205[1][1],&g_205[0][0],&g_205[0][0],&g_205[0][0],&g_205[0][0],&g_205[1][1]},{&g_205[0][0],&g_205[3][3],&g_205[1][1],&g_205[1][3],&g_205[3][3],&g_205[1][1],&g_205[1][1]}}};
        int64_t * const * const *l_1348 = &l_1349[2][4][1];
        int64_t * const * const * const *l_1347 = &l_1348;
        int32_t l_1357 = 0x64EDEC20L;
        int32_t l_1365 = 1L;
        int32_t l_1367[2];
        uint32_t l_1370 = 18446744073709551615UL;
        int16_t **l_1439 = &l_985;
        int16_t ***l_1438[2][7][3] = {{{&l_1439,&l_1439,&l_1439},{&l_1439,&l_1439,&l_1439},{&l_1439,&l_1439,(void*)0},{(void*)0,&l_1439,&l_1439},{&l_1439,&l_1439,(void*)0},{&l_1439,&l_1439,&l_1439},{&l_1439,(void*)0,&l_1439}},{{(void*)0,&l_1439,&l_1439},{&l_1439,(void*)0,&l_1439},{&l_1439,&l_1439,&l_1439},{&l_1439,&l_1439,&l_1439},{&l_1439,(void*)0,(void*)0},{&l_1439,&l_1439,&l_1439},{&l_1439,&l_1439,(void*)0}}};
        int64_t l_1451 = 0xF0C06B88E9008B73LL;
        union U1 *** const l_1462 = &g_570;
        uint32_t **l_1467 = (void*)0;
        uint64_t l_1519 = 2UL;
        int8_t l_1531[2][2][2];
        int32_t l_1532[4];
        uint8_t l_1535 = 255UL;
        uint64_t *l_1581[1][5][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3,&l_973.f3},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1367[i] = (-3L);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1531[i][j][k] = 0x15L;
            }
        }
        for (i = 0; i < 4; i++)
            l_1532[i] = (-7L);
        if (((&l_985 == &l_985) > (l_1326 , ((safe_sub_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((*l_1055), ((safe_div_func_int32_t_s_s((l_1333 , 0x88775921L), 0x8243EDEFL)) <= (*l_1055)))) && 18446744073709551614UL) ^ 0x6159D3D710FAB1AALL) , l_1333.f1), g_340)) > p_47))))
        { 
            const int64_t *l_1345 = &g_141;
            const int64_t **l_1344 = &l_1345;
            const int64_t ***l_1343 = &l_1344;
            const int64_t *** const *l_1342 = &l_1343;
            int32_t l_1366[3];
            int16_t l_1369[1];
            int16_t *l_1384 = &l_1369[0];
            uint32_t l_1396 = 0UL;
            int i;
            for (i = 0; i < 3; i++)
                l_1366[i] = (-1L);
            for (i = 0; i < 1; i++)
                l_1369[i] = (-1L);
            for (g_313 = 0; (g_313 <= 3); g_313 += 1)
            { 
                const int64_t *** const **l_1346 = &l_1342;
                int32_t l_1356 = 1L;
                int32_t l_1358 = 0x386F1C4BL;
                int32_t l_1359 = 0L;
                int32_t *l_1360 = (void*)0;
                int32_t l_1361 = 0xD9309ABAL;
                int32_t *l_1363 = &l_1357;
                int32_t *l_1364[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1364[i] = &l_1174;
                l_1361 &= (((safe_mul_func_uint8_t_u_u((0x95L >= (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((*l_1346) = l_1342) == l_1347), (safe_rshift_func_int16_t_s_u((*l_1055), (safe_sub_func_int64_t_s_s((l_1356 = (l_1357 = (safe_mod_func_int64_t_s_s((l_1356 || 0xC040D5C9L), p_47)))), p_47)))))), 1)), l_1358))), (**g_64))) > l_1359) , p_47);
                for (g_81 = 0; (g_81 <= 0); g_81 += 1)
                { 
                    (*g_908) = (*g_908);
                }
                for (g_233 = 1; (g_233 >= 0); g_233 -= 1)
                { 
                    uint32_t ****l_1362 = &l_971;
                    (*l_1362) = &l_972[5];
                    (*g_908) = (*g_908);
                }
                ++l_1370;
            }
            if (((((*l_1055) <= (g_1373 != (void*)0)) & (safe_rshift_func_int16_t_s_s((g_220[g_141] |= 0xBE4BL), 12))) != ((((*l_1384) = (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_47, (safe_rshift_func_uint16_t_u_s((l_1326 , (safe_sub_func_int8_t_s_s((((((**g_614) || l_1369[0]) | l_1367[1]) < l_1366[2]) > p_47), (*l_1055)))), g_340)))), (**g_64)))) & l_1365) < (*l_1055))))
            { 
                for (l_1175 = 0; (l_1175 >= 0); l_1175 -= 1)
                { 
                    struct S0 l_1393[7] = {{28,0xEB22L},{10,0UL},{10,0UL},{28,0xEB22L},{10,0UL},{10,0UL},{28,0xEB22L}};
                    int i, j;
                    g_315[(l_1175 + 1)][l_1175] = ((safe_div_func_uint8_t_u_u(((p_47 < ((**p_46) = 0x00L)) , (safe_mul_func_int16_t_s_s(p_47, (safe_mod_func_int8_t_s_s((((safe_div_func_int16_t_s_s((l_1393[2] , (&l_1043[l_1175][l_1175] == &l_1043[l_1175][l_1175])), (safe_lshift_func_uint8_t_u_u(g_157, 3)))) , l_1396) < g_108), (**g_64)))))), l_1396)) | g_220[g_141]);
                }
                if (l_1396)
                    goto lbl_1397;
                return (**p_46);
            }
            else
            { 
                int32_t l_1410 = 0x1AE51DB7L;
                g_233 ^= ((g_315[1][1] &= p_47) < (safe_add_func_int32_t_s_s(g_220[1], (safe_div_func_int16_t_s_s((65527UL < (safe_lshift_func_int8_t_s_u(((**p_46) = (**p_46)), 4))), (((*g_615) == (safe_add_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((((p_47 | (l_1410 != (-1L))) >= g_108) && 0xB97B7C77L) < 6UL), 5)) , 0x54L), l_1333.f0)) , 0xE6F165EAECD611DBLL), p_47))) , p_47))))));
            }
            for (g_143 = 0; (g_143 <= 1); g_143 += 1)
            { 
                if (g_157)
                    goto lbl_1397;
                return (**p_46);
            }
        }
        else
        { 
            l_1411 = &g_35;
        }
        (*l_1055) = (safe_rshift_func_int8_t_s_s((~((void*)0 != &g_157)), (safe_add_func_int64_t_s_s(l_1357, p_47))));
        if (p_47)
            continue;
        for (l_1368 = 0; (l_1368 >= 0); l_1368 -= 1)
        { 
            int32_t l_1419 = (-1L);
            int32_t l_1421 = 0x48605703L;
            int32_t l_1422 = 0x5FDFE919L;
            int32_t l_1423 = 0L;
            int32_t l_1424 = 0x0D240736L;
            int32_t l_1425 = (-1L);
            int32_t l_1426 = 0x5E94359EL;
            int32_t l_1429 = (-1L);
            int32_t l_1430 = (-3L);
            int32_t l_1431 = 0xA41B5F51L;
            int32_t l_1432 = 7L;
            int32_t **l_1436 = (void*)0;
            int32_t **l_1437 = &g_129;
            for (l_963 = 0; (l_963 <= 1); l_963 += 1)
            { 
                union U1 l_1417 = {0};
                int32_t *l_1418 = &g_35;
                int32_t *l_1420[6][7] = {{&g_315[1][1],&l_1365,&l_1176,(void*)0,&l_1365,(void*)0,&l_1176},{&l_1365,&l_1365,&l_1176,&g_315[1][1],&l_1020,&l_1176,&l_1020},{&g_315[1][1],&l_1176,&l_1176,&g_315[1][1],(void*)0,&g_315[1][1],&g_315[1][1]},{&g_315[1][1],&l_1020,(void*)0,(void*)0,&l_1020,&g_315[1][1],&l_1176},{&l_1020,&g_315[1][1],&l_1176,&l_1365,&l_1365,&l_1176,&g_315[1][1]},{&l_1020,&l_1176,&g_315[1][1],&l_1020,(void*)0,(void*)0,&l_1020}};
                uint64_t l_1433 = 9UL;
                int i, j;
                g_315[l_1368][(l_1368 + 1)] |= ((l_1417 , ((**p_46) = (*g_65))) ^ (p_47 & 18446744073709551611UL));
                ++l_1433;
            }
            (*l_1437) = &g_35;
        }
        for (g_340 = 0; (g_340 <= 1); g_340 += 1)
        { 
            int16_t ****l_1440 = (void*)0;
            int16_t ****l_1441 = &l_1438[1][3][1];
            int32_t l_1444 = 0x6A692867L;
            union U1 l_1448 = {0};
            int32_t l_1455[3][5][5] = {{{(-5L),0L,(-5L),0L,(-5L)},{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL},{(-5L),0L,(-5L),0L,(-5L)},{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL},{(-5L),0L,(-5L),0L,(-5L)}},{{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL},{(-5L),0L,(-5L),0L,(-5L)},{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL},{(-5L),0L,(-5L),0L,(-5L)},{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL}},{{(-5L),0L,(-5L),0L,(-5L)},{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL},{(-5L),0L,(-5L),0L,(-5L)},{0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL,0xF6B44F8BL},{(-5L),0L,(-5L),0L,(-5L)}}};
            uint64_t *l_1580 = &l_1519;
            int8_t l_1582 = 0xBEL;
            int i, j, k;
            (*l_1441) = l_1438[1][3][1];
        }
    }
    return (**g_64);
}



static int8_t ** func_49(const uint64_t  p_50, int64_t  p_51, uint32_t  p_52)
{ 
    int64_t l_230 = (-1L);
    int32_t l_251[7] = {3L,1L,3L,3L,1L,3L,3L};
    uint64_t **l_364 = (void*)0;
    int64_t l_374 = 0xBE9DE3B3F70EDA4BLL;
    uint16_t l_404 = 1UL;
    uint32_t *l_426 = &g_335;
    int8_t *l_458 = (void*)0;
    int8_t l_475 = 0x98L;
    union U1 * const l_546 = &g_275;
    uint32_t l_693[5] = {0xD005934BL,0xD005934BL,0xD005934BL,0xD005934BL,0xD005934BL};
    int32_t l_694[4] = {(-3L),(-3L),(-3L),(-3L)};
    int64_t l_713[3][3] = {{7L,7L,7L},{0x1CB1EC39194414EDLL,8L,0x1CB1EC39194414EDLL},{7L,7L,7L}};
    const int16_t l_714[7][2][5] = {{{0xDCF0L,(-1L),0xE7CDL,0xA12BL,7L},{0x759CL,1L,1L,0xE7CDL,0xCC98L}},{{0x456DL,0L,1L,0L,0x456DL},{8L,0x5095L,0xE7CDL,0x3BDEL,0x306BL}},{{0L,0xAB6AL,0x8EC8L,0L,0x2110L},{0xAB6AL,0xDCF0L,0x4361L,0x5095L,0x306BL}},{{0xFCD4L,0L,0xDFD9L,0x306BL,0x456DL},{0x306BL,1L,9L,8L,0xCC98L}},{{0x4361L,1L,1L,0x4361L,7L},{0xE7CDL,0L,0x456DL,0xFCD4L,0xDCF0L}},{{0x2110L,0xDCF0L,0L,0x953EL,9L},{8L,0xAB6AL,0xCC98L,0xFCD4L,0L}},{{1L,0x5095L,0x2110L,0x4361L,1L},{(-1L),0L,0x0CC5L,8L,8L}}};
    uint16_t l_717 = 1UL;
    uint8_t l_782 = 0xE0L;
    struct S0 **l_859 = &g_466;
    uint16_t l_866 = 0x0778L;
    uint16_t l_889 = 0xE519L;
    int8_t **l_910 = &l_458;
    union U1 l_917 = {0};
    int64_t * const * const **l_919 = (void*)0;
    uint16_t **l_932 = (void*)0;
    uint16_t *l_944 = &g_63.f1;
    uint16_t * const *l_943 = &l_944;
    uint16_t * const **l_942 = &l_943;
    int i, j, k;
    for (g_143 = 6; (g_143 > 6); g_143++)
    { 
        uint64_t l_236 = 4UL;
        int32_t l_312 = 1L;
        int32_t l_314 = 0x035ACF56L;
        int32_t l_316 = 1L;
        int32_t l_322 = 0xBA61EA9DL;
        const int32_t l_350 = 7L;
        uint8_t l_359[2];
        int32_t l_391 = 4L;
        int32_t l_392 = 0L;
        int32_t l_395[7] = {0xD9A022ACL,0x8A8FA942L,0x8A8FA942L,0xD9A022ACL,0x8A8FA942L,0x8A8FA942L,0xD9A022ACL};
        int32_t l_403 = 0x96326BFEL;
        int32_t *l_407 = (void*)0;
        uint32_t l_440 = 4294967290UL;
        uint64_t **l_522[4] = {&g_361,&g_361,&g_361,&g_361};
        int8_t l_529 = (-1L);
        int8_t **l_657 = &g_65;
        const uint64_t ***l_674 = (void*)0;
        const uint64_t **** const l_673 = &l_674;
        int32_t *l_679 = &g_315[1][1];
        int32_t *l_695 = &l_694[3];
        uint64_t l_712 = 0xC59295EFEB370818LL;
        struct S0 **l_752 = &g_466;
        union U1 l_766 = {0};
        int8_t l_778 = 0xE0L;
        int8_t l_786[6][4] = {{(-9L),(-9L),6L,(-9L)},{(-9L),0xB7L,0xB7L,(-9L)},{0xB7L,(-9L),0xB7L,0xB7L},{(-9L),(-9L),6L,(-9L)},{(-9L),0xB7L,0xB7L,(-9L)},{0xB7L,(-9L),0xB7L,0xB7L}};
        uint16_t l_792 = 65527UL;
        uint16_t l_848 = 65535UL;
        int8_t l_865[5][3][5] = {{{0xB8L,0xF7L,0xB8L,0x24L,0x24L},{0xE1L,0x1EL,0xE1L,1L,0x5BL},{0xB8L,0xF7L,0xB8L,0x24L,0x24L}},{{0xE1L,0x1EL,0xE1L,1L,0x5BL},{0xB8L,0xF7L,0xB8L,0x24L,0x24L},{0xE1L,0x1EL,0xE1L,1L,0x5BL}},{{0xB8L,0xF7L,0xB8L,0xB8L,0xB8L},{(-1L),0L,(-1L),(-5L),0xE1L},{0xF1L,0L,0xF1L,0xB8L,0xB8L}},{{(-1L),0L,(-1L),(-5L),0xE1L},{0xF1L,0L,0xF1L,0xB8L,0xB8L},{(-1L),0L,(-1L),(-5L),0xE1L}},{{0xF1L,0L,0xF1L,0xB8L,0xB8L},{(-1L),0L,(-1L),(-5L),0xE1L},{0xF1L,0L,0xF1L,0xB8L,0xB8L}}};
        uint32_t l_905 = 0UL;
        int64_t ****l_918 = &g_203;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_359[i] = 0x00L;
    }
    l_942 = g_941;
    return &g_65;
}



static int8_t ** func_60(int64_t  p_61, int8_t ** p_62)
{ 
    uint8_t *l_80[7][7] = {{&g_81,&g_81,(void*)0,&g_81,&g_81,(void*)0,&g_81},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,(void*)0,(void*)0,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,&g_81,&g_81,(void*)0,(void*)0,&g_81},{&g_81,&g_81,&g_81,&g_81,&g_81,&g_81,&g_81},{&g_81,&g_81,(void*)0,&g_81,&g_81,(void*)0,&g_81}};
    int32_t l_82 = 0xC3C737ECL;
    int32_t l_83 = 0xC2102935L;
    uint32_t l_84 = 0x5688AFC0L;
    uint64_t *l_86 = &g_87;
    int8_t **l_114 = &g_65;
    int32_t l_151 = 0x8DE78A8BL;
    struct S0 *l_178 = &g_63;
    int32_t *l_181 = &g_35;
    int64_t ***l_206 = &g_204;
    int i, j;
lbl_218:
    if ((safe_add_func_uint64_t_u_u(((*l_86) = (!(safe_mul_func_uint8_t_u_u(((((p_61 <= (((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u((g_63.f0 == (safe_mul_func_uint8_t_u_u((+1L), (l_82 = g_11[3][2][2])))), 1L)) > g_11[3][1][0]) | 65526UL), l_83)), 0xEDFDL)) <= p_61) || l_83)) != l_84) != l_83) && l_84), g_85[0])))), p_61)))
    { 
        int32_t l_92 = 0xD1A1FBCDL;
        uint16_t l_104 = 0x3FBDL;
        int64_t *l_105 = &g_106[4];
        int8_t *l_107[6] = {&g_108,&g_108,&g_108,&g_108,&g_108,&g_108};
        int32_t l_142 = 1L;
        int32_t l_152 = (-1L);
        uint8_t **l_155[4];
        int32_t *l_161 = &l_142;
        int i;
        for (i = 0; i < 4; i++)
            l_155[i] = &l_80[0][1];
        if (((safe_sub_func_uint32_t_u_u(((void*)0 != (*g_64)), (safe_add_func_int16_t_s_s(((l_92 == (safe_lshift_func_int8_t_s_s((**p_62), (**p_62)))) | ((g_108 &= ((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(((*l_105) = ((((l_82 = ((g_81 && (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(g_87)), p_61)) == l_104), g_85[5]))) , l_104)) , 3UL) | p_61) < p_61)), l_92)), 14)) , (**g_64))) | (**p_62))), g_11[0][1][0])))) >= 18446744073709551615UL))
        { 
            return &g_65;
        }
        else
        { 
            const int32_t *l_111 = &l_92;
            for (l_104 = 0; (l_104 <= 13); ++l_104)
            { 
                const int32_t **l_112 = (void*)0;
                const int32_t **l_113 = &l_111;
                (*l_113) = l_111;
                return l_114;
            }
        }
        for (g_87 = (-12); (g_87 <= 8); g_87 = safe_add_func_int64_t_s_s(g_87, 9))
        { 
            uint16_t *l_123 = &g_63.f1;
            int32_t *l_126 = &l_82;
            struct S0 *l_128[5] = {&g_63,&g_63,&g_63,&g_63,&g_63};
            struct S0 **l_127 = &l_128[1];
            int32_t *l_130 = &g_35;
            int32_t *l_131 = (void*)0;
            int32_t *l_132 = &g_35;
            int32_t *l_133 = (void*)0;
            int32_t *l_134 = &l_82;
            int32_t *l_135 = (void*)0;
            int32_t *l_136 = &g_35;
            int32_t *l_137 = (void*)0;
            int32_t *l_138 = &g_35;
            int32_t *l_139 = &g_35;
            int32_t *l_140[5][7] = {{&l_83,&l_83,&g_35,&l_82,&l_82,&g_35,&l_83},{&l_82,(void*)0,&g_35,(void*)0,(void*)0,&g_35,&l_83},{&l_82,&l_82,&g_35,&l_82,&l_83,&l_82,&g_35},{&l_82,&l_82,(void*)0,(void*)0,&l_82,(void*)0,&l_82},{&l_82,&g_35,&g_35,&l_82,&g_35,&g_35,&l_82}};
            int i, j;
            (*l_126) = (p_61 , (safe_mod_func_int64_t_s_s(l_84, (safe_rshift_func_int16_t_s_s((g_11[1][3][0] ^ ((!(~p_61)) > ((*l_123)--))), 1)))));
            (*l_126) |= g_106[0];
            (*l_127) = &g_63;
            g_129 = (void*)0;
            --g_143;
        }
        (*l_161) = ((!((safe_add_func_int8_t_s_s(0x73L, l_83)) , ((g_108 = (**p_62)) ^ ((safe_mod_func_uint8_t_u_u(0UL, (g_81--))) > ((g_156 = l_80[4][4]) != ((&g_106[4] != ((g_160 = (((((safe_rshift_func_uint8_t_u_s(0xFDL, 4)) || (**p_62)) , p_61) == 0x271CF4EE93D3DD4ALL) == (*g_65))) , (void*)0)) , &g_157)))))) && l_83);
    }
    else
    { 
        int32_t **l_162 = &g_129;
        (*l_162) = &g_35;
    }
    for (g_160 = 0; (g_160 != 43); g_160 = safe_add_func_uint8_t_u_u(g_160, 1))
    { 
        int32_t l_172 = 9L;
        uint64_t *l_177 = &g_143;
        int32_t *l_179 = &g_35;
        int32_t **l_180[5][1];
        int32_t **l_182 = &l_179;
        int32_t l_211 = 0L;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_180[i][j] = &g_129;
        }
        (*l_179) = (l_172 = (safe_lshift_func_uint16_t_u_s((((p_61 , ((**p_62) ^ 0L)) < ((safe_unary_minus_func_int16_t_s(((0x94L < ((l_151 = (((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_172, (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_177 == l_86), 0x41C8C056L)), l_151)))), 11)) , (void*)0) == l_178)) , (**g_64))) >= p_61))) < l_82)) != 0x84EBA52EL), g_63.f0)));
        l_181 = (g_129 = &g_35);
        l_182 = (l_180[4][0] = &l_181);
        for (g_143 = 0; (g_143 <= 5); g_143 += 1)
        { 
            int32_t l_183 = 0x1BF98911L;
            int64_t *l_188 = &g_141;
            int64_t **l_187 = &l_188;
            int32_t *l_190 = &l_82;
            int16_t l_214 = 0x6040L;
            for (l_172 = 1; (l_172 <= 5); l_172 += 1)
            { 
                int8_t l_212 = (-1L);
                int32_t l_213 = 0xDD1E6761L;
                for (l_82 = 4; (l_82 >= 0); l_82 -= 1)
                { 
                    (*l_181) = (*g_129);
                }
                for (l_83 = 0; (l_83 <= 5); l_83 += 1)
                { 
                    uint8_t l_184 = 251UL;
                    int64_t ***l_189 = &l_187;
                    --l_184;
                    (*l_189) = l_187;
                    l_190 = &g_35;
                }
                (*l_181) = (*g_129);
                if ((*l_190))
                { 
                    (*g_129) ^= (safe_add_func_int64_t_s_s(((safe_add_func_int64_t_s_s(1L, (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((3L != (((safe_add_func_uint64_t_u_u((--(*l_86)), p_61)) < (**g_64)) >= (g_203 == l_206))), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(g_63.f0, 11)) & 0UL), l_211)))), (**p_62))))) <= 0xF3L), l_212));
                }
                else
                { 
                    int64_t ****l_217 = &g_203;
                    l_183 ^= ((*l_190) = l_213);
                    (*g_129) = (255UL != (l_214 | ((p_61 < ((safe_mod_func_int32_t_s_s(((p_61 && g_87) < ((*l_190) && (((*l_217) = &g_204) != &g_204))), (*l_181))) ^ l_212)) || g_106[1])));
                    if (g_63.f0)
                        goto lbl_218;
                }
                if (p_61)
                    continue;
            }
        }
    }
    return l_114;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_11[i][j][k], "g_11[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_85[i], "g_85[i]", print_hash_value);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_220[i], "g_220[i]", print_hash_value);

    }
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_315[i][j], "g_315[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_402[i][j], "g_402[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1301, "g_1301", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1686, "g_1686", print_hash_value);
    transparent_crc(g_2068, "g_2068", print_hash_value);
    transparent_crc(g_2141, "g_2141", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2179[i][j], "g_2179[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2192, "g_2192", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_2214[i][j][k], "g_2214[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2224, "g_2224", print_hash_value);
    transparent_crc(g_2699, "g_2699", print_hash_value);
    transparent_crc(g_2907.f0, "g_2907.f0", print_hash_value);
    transparent_crc(g_2907.f1, "g_2907.f1", print_hash_value);
    transparent_crc(g_3070, "g_3070", print_hash_value);
    transparent_crc(g_3084, "g_3084", print_hash_value);
    transparent_crc(g_3187, "g_3187", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
