// SPDX-License-Identifier: MIT
// cctest_csmith_ff8bd4bd.c --- cctest case csmith_ff8bd4bd (csmith seed 4287354045)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb74206f0 */

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

// Options:   -s 4287354045 -o /tmp/csmith_gen_f7w2ise4/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 29;
   unsigned : 0;
   const unsigned f1 : 3;
   signed f2 : 2;
};

union U1 {
   const uint16_t  f0;
   const uint32_t  f1;
   int8_t * f2;
   int16_t  f3;
   unsigned f4 : 30;
};

union U2 {
   int16_t  f0;
};

union U3 {
   int8_t  f0;
   uint32_t  f1;
   int16_t  f2;
   signed f3 : 22;
   const int32_t  f4;
};


static int16_t g_2[5] = {0x147BL,0x147BL,0x147BL,0x147BL,0x147BL};
static int32_t g_3 = 0x51CFD1F2L;
static int32_t g_5 = 0L;
static int8_t g_15 = 0L;
static int8_t *g_14 = &g_15;
static int32_t g_17[1] = {1L};
static union U1 g_48 = {65535UL};
static uint16_t g_51 = 0x7D69L;
static uint32_t g_73 = 0UL;
static int32_t g_75 = (-1L);
static uint16_t g_117 = 1UL;
static int32_t g_136 = 0xA0E7310FL;
static int32_t g_143[5] = {1L,1L,1L,1L,1L};
static int32_t *g_192 = &g_143[4];
static int32_t **g_191 = &g_192;
static uint32_t g_199 = 0x03CA480CL;
static uint16_t * const g_211 = &g_51;
static uint16_t * const * const g_210 = &g_211;
static uint64_t g_215 = 9UL;
static struct S0 g_218 = {7699,0,1};
static int8_t g_232 = 0xA9L;
static uint32_t g_255 = 0xF6FB8DCCL;
static union U1 g_261 = {0xB580L};
static union U1 *g_260 = &g_261;
static union U2 g_284 = {0xEDC7L};
static union U3 g_304 = {-1L};
static union U3 *g_303 = &g_304;
static int32_t g_332 = 0L;
static int64_t g_358 = 0x1088FB9B7DB8FE69LL;
static int64_t g_359 = (-6L);
static const struct S0 **g_373 = (void*)0;
static uint8_t g_377 = 0xC6L;
static uint8_t *g_423 = &g_377;
static uint8_t **g_422 = &g_423;
static uint32_t g_451 = 4294967291UL;
static int32_t *g_457 = &g_75;
static union U1 * const g_458 = &g_48;
static const int16_t g_505 = 0xFCD6L;
static const int16_t *g_504 = &g_505;
static int32_t ***g_534[5] = {&g_191,&g_191,&g_191,&g_191,&g_191};
static int32_t **** const g_533 = &g_534[0];
static uint64_t g_553[1][4] = {{1UL,1UL,1UL,1UL}};
static struct S0 ** const g_567 = (void*)0;
static struct S0 ** const *g_566[3][6][4] = {{{(void*)0,&g_567,&g_567,&g_567},{&g_567,&g_567,(void*)0,&g_567},{&g_567,&g_567,&g_567,&g_567},{&g_567,&g_567,&g_567,(void*)0},{&g_567,&g_567,&g_567,(void*)0},{&g_567,(void*)0,(void*)0,(void*)0}},{{&g_567,&g_567,&g_567,(void*)0},{(void*)0,&g_567,&g_567,&g_567},{&g_567,(void*)0,&g_567,&g_567},{&g_567,(void*)0,(void*)0,&g_567},{(void*)0,&g_567,&g_567,(void*)0},{(void*)0,&g_567,(void*)0,&g_567}},{{&g_567,(void*)0,&g_567,&g_567},{&g_567,&g_567,&g_567,(void*)0},{(void*)0,&g_567,&g_567,&g_567},{&g_567,(void*)0,&g_567,&g_567},{&g_567,(void*)0,(void*)0,&g_567},{(void*)0,&g_567,&g_567,(void*)0}}};
static const struct S0 ***g_587 = &g_373;
static const struct S0 ****g_586 = &g_587;
static uint32_t g_627 = 0xDA4A66EBL;
static union U1 **g_709[2] = {&g_260,&g_260};
static const union U1 *g_727 = &g_261;
static const union U1 **g_726 = &g_727;
static uint32_t *g_747 = &g_304.f1;
static uint32_t **g_746 = &g_747;
static uint32_t g_816 = 18446744073709551614UL;
static uint32_t g_841 = 2UL;
static struct S0 g_883 = {1684,1,-0};
static int64_t g_894[5] = {0xF70EF31050944429LL,0xF70EF31050944429LL,0xF70EF31050944429LL,0xF70EF31050944429LL,0xF70EF31050944429LL};
static int16_t g_895 = 0x1533L;
static uint64_t g_947 = 4UL;
static union U1 ****g_1054 = (void*)0;
static int64_t *g_1110 = &g_358;
static int64_t **g_1109 = &g_1110;
static int8_t g_1164[1][3] = {{0xF3L,0xF3L,0xF3L}};
static int32_t g_1242[2][5][6] = {{{0xF76E2DB6L,0x5409C3CDL,0x5409C3CDL,0xF76E2DB6L,1L,0xF76E2DB6L},{0xF76E2DB6L,1L,0xF76E2DB6L,0x5409C3CDL,0x5409C3CDL,0xF76E2DB6L},{0L,0L,0x5409C3CDL,4L,0x5409C3CDL,0L},{0x5409C3CDL,1L,4L,4L,1L,0x5409C3CDL},{0L,0x5409C3CDL,4L,0x5409C3CDL,0L,0L}},{{0xF76E2DB6L,0x5409C3CDL,0x5409C3CDL,0xF76E2DB6L,1L,0xF76E2DB6L},{0xF76E2DB6L,1L,0xF76E2DB6L,0x5409C3CDL,0x5409C3CDL,0xF76E2DB6L},{0L,0L,0x5409C3CDL,4L,0x5409C3CDL,0L},{0x5409C3CDL,1L,4L,4L,1L,0x5409C3CDL},{0L,0x5409C3CDL,4L,0x5409C3CDL,0L,0L}}};
static uint8_t g_1267 = 1UL;
static uint32_t g_1335[3] = {8UL,8UL,8UL};
static struct S0 g_1340 = {3029,1,-0};
static uint64_t *g_1349 = &g_215;
static uint64_t **g_1348 = &g_1349;
static uint64_t **g_1351 = &g_1349;
static int32_t ****g_1353 = &g_534[0];
static int16_t g_1355 = 0L;
static int32_t g_1368 = (-1L);
static const union U3 g_1399 = {0xC0L};
static union U3 **g_1402 = &g_303;
static union U3 **g_1403 = &g_303;
static uint32_t g_1412 = 0xBC59FD4AL;
static const int32_t g_1439[1] = {0x986BA05AL};
static int64_t g_1491 = 1L;
static int8_t *g_1540 = &g_232;
static const union U1 *g_1546 = (void*)0;
static uint16_t g_1643 = 65535UL;
static uint8_t g_1650 = 3UL;
static union U1 g_1667 = {0x72BDL};
static union U3 g_1708 = {0xC7L};
static int32_t g_1758 = (-1L);
static uint64_t g_1772 = 0UL;
static uint8_t g_1857 = 0x50L;
static int64_t g_1915 = 0xA1D3AD9B8685E0D9LL;
static uint16_t g_1916[3] = {1UL,1UL,1UL};
static uint16_t *g_1929 = &g_117;
static uint16_t **g_1928 = &g_1929;
static uint16_t ***g_1927 = &g_1928;
static uint16_t ****g_1926 = &g_1927;
static uint16_t *****g_1925 = &g_1926;
static const uint32_t g_1933 = 0x03CBC93FL;
static int64_t g_1970 = 0x4AC56912D0721FCELL;
static uint8_t ***g_2021 = &g_422;
static int64_t g_2092 = 0x2D911505905A22A5LL;
static union U1 g_2187 = {0xE4CAL};
static struct S0 g_2261 = {16878,0,0};
static int16_t g_2297 = 1L;
static union U2 *g_2413 = &g_284;
static union U2 **g_2412 = &g_2413;
static uint16_t ** const g_2432 = (void*)0;
static uint16_t ** const *g_2431 = &g_2432;



static int32_t  func_1(void);
static uint32_t  func_8(int32_t  p_9, int32_t * p_10, union U1  p_11);
static int32_t  func_12(int8_t * p_13);
static int32_t * func_18(int32_t * p_19, int32_t * p_20, const int32_t  p_21);
static int32_t * func_23(union U2  p_24, const union U3  p_25, uint64_t  p_26, int8_t * p_27);
static union U2  func_28(int32_t  p_29, int64_t  p_30, union U3  p_31, int32_t * p_32, int8_t * p_33);
static int8_t * func_38(struct S0  p_39, int32_t  p_40, uint32_t  p_41);
static int64_t  func_44(int32_t * p_45);




static int32_t  func_1(void)
{ 
    int32_t *l_4[3];
    union U1 l_2064[4] = {{65533UL},{65533UL},{65533UL},{65533UL}};
    uint32_t l_2430 = 0x8E72DA09L;
    int32_t l_2433[1][5][5] = {{{0xC01A14A0L,0x7799A8B8L,0xC01A14A0L,0x7799A8B8L,0xC01A14A0L},{0x6AF30FDBL,0x6AF30FDBL,0x01A75E9CL,0x01A75E9CL,0x6AF30FDBL},{(-6L),0x7799A8B8L,(-6L),0x7799A8B8L,(-6L)},{0x6AF30FDBL,0x01A75E9CL,0x01A75E9CL,0x6AF30FDBL,0x6AF30FDBL},{0xC01A14A0L,0x7799A8B8L,0xC01A14A0L,0x7799A8B8L,0xC01A14A0L}}};
    uint32_t l_2462 = 0x5C49650FL;
    int32_t ** const *l_2472 = &g_191;
    union U3 l_2478 = {0xF8L};
    int32_t l_2525[1][5][2] = {{{0x06B9DCE8L,1L},{1L,0x06B9DCE8L},{1L,1L},{0x06B9DCE8L,1L},{1L,0x06B9DCE8L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_4[i] = &g_5;
lbl_2518:
    for (g_3 = 4; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t *l_2061 = &g_3;
        union U2 l_2062 = {0x43C5L};
        union U2 *l_2063 = &l_2062;
        uint8_t ** const **l_2398 = (void*)0;
        const struct S0 l_2422 = {2036,0,-1};
        int32_t l_2427 = (-1L);
        struct S0 l_2434 = {18681,1,1};
        uint32_t l_2456 = 0xC2EEBBADL;
        int i;
        l_4[0] = (void*)0;
        g_5 = (-3L);
    }
    for (g_1368 = (-16); (g_1368 > 10); g_1368 = safe_add_func_uint64_t_u_u(g_1368, 8))
    { 
        uint64_t *l_2461[2][1][1];
        int32_t l_2467 = (-6L);
        int32_t ***l_2473[3];
        struct S0 l_2485 = {18709,0,0};
        uint64_t l_2490 = 18446744073709551615UL;
        union U1 *** const l_2522 = &g_709[1];
        int16_t l_2524 = 0x8DDCL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_2461[i][j][k] = &g_215;
            }
        }
        for (i = 0; i < 3; i++)
            l_2473[i] = (void*)0;
        (*g_457) &= ((l_2462 |= ((*g_1540) |= (4294967295UL > (safe_lshift_func_uint16_t_u_s((((*g_1348) = (*g_1348)) != l_2461[0][0][0]), 2))))) < ((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_2467, (-3L))), ((*g_14) = ((safe_lshift_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s((l_2472 == l_2473[1]), g_143[4])) > 2L) != (*g_504)) , g_1643) & (-1L)), 9)) < 0x0EL)))) ^ (***l_2472)));
        for (g_199 = 24; (g_199 < 47); g_199++)
        { 
            int32_t l_2491[2][2];
            uint8_t *l_2492[6];
            int16_t *l_2493 = &g_48.f3;
            int32_t l_2494 = 0xA796FAB5L;
            union U2 *l_2510 = &g_284;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_2491[i][j] = 0xCD1A2B12L;
            }
            for (i = 0; i < 6; i++)
                l_2492[i] = (void*)0;
            (****g_1353) |= (safe_mul_func_uint8_t_u_u(((((((*l_2493) &= ((l_2478 , (*g_303)) , ((safe_rshift_func_uint8_t_u_u(((**g_422) = (safe_rshift_func_uint16_t_u_s(((g_1857 &= ((safe_rshift_func_int16_t_s_u(((l_2485 , ((((0xD070CBFEF93A8797LL < (safe_div_func_uint8_t_u_u((*g_423), 0x49L))) <= (((safe_add_func_int32_t_s_s((l_2490 <= l_2491[0][0]), 4294967295UL)) && l_2491[0][0]) && (**g_1928))) ^ 0x58A6L) >= 2UL)) >= l_2491[0][0]), l_2491[0][0])) || (*g_423))) < l_2491[0][0]), (*g_504)))), 6)) > 0x0D24DE93L))) == 1UL) | (**g_1109)) == l_2491[1][0]) || (**g_1351)), l_2494));
            for (g_1650 = 1; (g_1650 <= 4); g_1650 += 1)
            { 
                int32_t l_2523 = (-1L);
                uint32_t l_2526 = 0xA4E82363L;
                int i;
                if ((*g_457))
                    break;
                (***l_2472) |= ((**g_1351) > (safe_add_func_int16_t_s_s(((g_1546 = ((*g_726) = (void*)0)) == (void*)0), (++(****g_1926)))));
                if (((*g_457) = (((((l_2494 |= ((safe_sub_func_uint16_t_u_u((~(*g_1110)), (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_2491[0][0], 0)), (((safe_rshift_func_uint16_t_u_u((**g_210), (**g_210))) ^ ((***l_2472) && (*g_504))) , 0xF5L))))) <= 9UL)) > (*g_423)) | l_2491[1][0]) && (***l_2472)) <= l_2491[0][0])))
                { 
                    union U2 *l_2511 = (void*)0;
                    int32_t l_2516 = 1L;
                    (****g_1353) = (safe_sub_func_uint64_t_u_u((0L != (((*g_1929) >= ((*****g_1925) , (**g_1928))) || ((((*l_2493) = (l_2510 == ((*g_2412) = l_2511))) || ((safe_mul_func_uint16_t_u_u(((***g_1927) = ((*g_211) = ((safe_lshift_func_uint8_t_u_s(255UL, (*g_1540))) || l_2516))), l_2516)) | (***l_2472))) | 0x7A13L))), l_2516));
                }
                else
                { 
                    uint32_t l_2517 = 18446744073709551606UL;
                    uint16_t l_2521 = 0x0DBDL;
                    (*g_192) &= l_2517;
                    if (g_1643)
                        goto lbl_2518;
                    l_2521 = (safe_lshift_func_int16_t_s_s(0x6677L, 5));
                    (*g_457) &= ((void*)0 == l_2522);
                }
                ++l_2526;
            }
            return (*g_192);
        }
    }
    return (***l_2472);
}



static uint32_t  func_8(int32_t  p_9, int32_t * p_10, union U1  p_11)
{ 
    int32_t *l_2065[7][2] = {{(void*)0,&g_332},{(void*)0,&g_3},{&g_1368,&g_1368},{&g_3,(void*)0},{&g_332,(void*)0},{&g_3,&g_1368},{&g_1368,&g_3}};
    int8_t l_2066 = (-1L);
    const union U3 l_2095 = {0xB3L};
    int32_t l_2110 = (-7L);
    union U1 l_2131 = {65535UL};
    uint16_t l_2164 = 65535UL;
    union U1 *l_2186 = &g_2187;
    struct S0 ***l_2189 = (void*)0;
    struct S0 ****l_2188 = &l_2189;
    int8_t l_2235 = (-6L);
    struct S0 l_2248 = {22884,1,-1};
    uint16_t l_2253 = 65535UL;
    uint16_t l_2264 = 65530UL;
    union U1 ****l_2275 = (void*)0;
    uint32_t l_2308 = 18446744073709551612UL;
    int32_t ***l_2371 = &g_191;
    int i, j;
    l_2066 ^= 0x41715717L;
    for (g_816 = 0; (g_816 != 7); g_816 = safe_add_func_int16_t_s_s(g_816, 7))
    { 
        uint32_t l_2073 = 0x43A07E1BL;
        uint8_t *l_2091 = &g_1267;
        int32_t l_2109 = (-1L);
        int32_t l_2135 = 0x920BE853L;
        union U3 l_2141 = {0xB2L};
        uint16_t *** const *l_2157 = &g_1927;
        uint16_t *** const **l_2156[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        union U3 ***l_2158 = &g_1402;
        int32_t l_2161 = 0x2CE17F12L;
        int32_t l_2163 = (-8L);
        union U1 *l_2183[5] = {&l_2131,&l_2131,&l_2131,&l_2131,&l_2131};
        int32_t *l_2218 = &g_1758;
        int32_t l_2232 = 0x494F356FL;
        int32_t l_2233 = (-9L);
        int32_t l_2236 = 8L;
        uint32_t l_2237 = 4294967295UL;
        struct S0 *l_2260 = &g_2261;
        int32_t l_2306 = 0x2BA8E144L;
        uint8_t l_2350[1];
        uint16_t **** const *l_2356 = &g_1926;
        int32_t ***l_2370[6][2][3] = {{{&g_191,&g_191,(void*)0},{&g_191,&g_191,&g_191}},{{&g_191,&g_191,&g_191},{(void*)0,&g_191,&g_191}},{{(void*)0,(void*)0,&g_191},{&g_191,&g_191,&g_191}},{{&g_191,&g_191,&g_191},{&g_191,&g_191,&g_191}},{{(void*)0,&g_191,&g_191},{(void*)0,(void*)0,&g_191}},{{&g_191,&g_191,&g_191},{&g_191,&g_191,&g_191}}};
        int32_t l_2373 = 0xA66E493BL;
        uint32_t l_2375 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2350[i] = 0x36L;
    }
    (***g_533) = (**l_2371);
    return p_11.f0;
}



static int32_t  func_12(int8_t * p_13)
{ 
    uint64_t l_16[1][1][7] = {{{0x2280643B8A277EBDLL,0x2280643B8A277EBDLL,0x2280643B8A277EBDLL,0x2280643B8A277EBDLL,0x2280643B8A277EBDLL,0x2280643B8A277EBDLL,0x2280643B8A277EBDLL}}};
    int32_t *l_22 = (void*)0;
    struct S0 l_42 = {15889,1,-0};
    int8_t *l_797 = &g_232;
    uint8_t l_798 = 0x7CL;
    union U3 l_799 = {-3L};
    union U2 *l_1398 = &g_284;
    int32_t *l_2060 = &g_136;
    int i, j, k;
    for (g_15 = 0; g_15 < 1; g_15 += 1)
    {
        for (g_5 = 0; g_5 < 1; g_5 += 1)
        {
            for (g_17[0] = 0; g_17[0] < 7; g_17[0] += 1)
            {
                l_16[g_15][g_5][g_17[0]] = 0xFFBE5849968CB667LL;
            }
        }
    }
    (*g_191) = func_18(l_22, func_23(((*l_1398) = func_28((safe_lshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((g_14 = func_38(l_42, g_15, l_42.f2)) == ((safe_mul_func_int8_t_s_s(((&l_22 != ((((((l_42.f2 && (-1L)) ^ 0UL) >= l_42.f0) <= g_218.f0) , 0xCBB2L) , (void*)0)) != l_42.f0), 0xF2L)) , l_797)), l_798)) , (*g_504)), g_218.f2)), g_553[0][2], l_799, l_22, p_13)), g_1399, l_42.f1, p_13), g_1340.f2);
    (*l_2060) = l_799.f0;
    return g_947;
}



static int32_t * func_18(int32_t * p_19, int32_t * p_20, const int32_t  p_21)
{ 
    int16_t l_1407 = 0x9CB3L;
    const int8_t *l_1445 = &g_1164[0][2];
    const uint64_t l_1452 = 1UL;
    int32_t l_1472 = 0L;
    uint64_t l_1473[7][5][1] = {{{0x90442420A1CFB98ELL},{1UL},{18446744073709551615UL},{18446744073709551615UL},{0x09F69BC56CD9D6A7LL}},{{18446744073709551615UL},{18446744073709551615UL},{1UL},{0x90442420A1CFB98ELL},{0xC1757FE9BA806B11LL}},{{0x91C2024D1FB63BB4LL},{0UL},{0x91C2024D1FB63BB4LL},{0xC1757FE9BA806B11LL},{0x90442420A1CFB98ELL}},{{1UL},{18446744073709551615UL},{18446744073709551615UL},{0x09F69BC56CD9D6A7LL},{18446744073709551615UL}},{{18446744073709551615UL},{1UL},{0x90442420A1CFB98ELL},{0xC1757FE9BA806B11LL},{0x91C2024D1FB63BB4LL}},{{0UL},{0x91C2024D1FB63BB4LL},{0xC1757FE9BA806B11LL},{0x90442420A1CFB98ELL},{1UL}},{{18446744073709551615UL},{18446744073709551615UL},{0x09F69BC56CD9D6A7LL},{18446744073709551615UL},{18446744073709551615UL}}};
    uint16_t l_1484 = 8UL;
    union U2 l_1629 = {6L};
    const union U1 ** const **l_1649 = (void*)0;
    union U1 ***l_1651 = &g_709[1];
    struct S0 l_1660 = {22088,0,0};
    uint16_t l_1662 = 0xCEB6L;
    int8_t *l_1701 = &g_1164[0][1];
    const union U3 l_1702 = {-6L};
    uint16_t l_1704 = 65535UL;
    uint32_t *l_1714 = &g_816;
    int32_t l_1738[6][2][5] = {{{0xF74A8E1BL,0x6A981205L,0L,0L,0x6A981205L},{0xF74A8E1BL,1L,0x73B52604L,0L,(-7L)}},{{0xF74A8E1BL,(-10L),0xA5E948F2L,0L,0xB34389FBL},{0xF74A8E1BL,0xB34389FBL,0L,0xA5E948F2L,(-10L)}},{{0xF74A8E1BL,(-7L),0L,0x73B52604L,1L},{0xF74A8E1BL,0x6A981205L,0L,0L,0x6A981205L}},{{0xF74A8E1BL,1L,0x73B52604L,0L,(-7L)},{0xF74A8E1BL,(-10L),0xA5E948F2L,0L,0xB34389FBL}},{{0xF74A8E1BL,0xB34389FBL,0L,0xA5E948F2L,(-10L)},{0xF74A8E1BL,(-7L),0L,0x73B52604L,1L}},{{0xF74A8E1BL,0x6A981205L,0L,0L,0x6A981205L},{0xF74A8E1BL,1L,0x73B52604L,0L,(-7L)}}};
    struct S0 *l_1777[5];
    struct S0 **l_1776 = &l_1777[2];
    struct S0 ***l_1775 = &l_1776;
    const uint16_t l_1787 = 0xE83AL;
    uint32_t *l_1788[5];
    struct S0 * const *l_1791 = (void*)0;
    struct S0 * const **l_1790 = &l_1791;
    struct S0 * const ***l_1789[6][3][2] = {{{(void*)0,&l_1790},{&l_1790,(void*)0},{&l_1790,&l_1790}},{{&l_1790,(void*)0},{&l_1790,&l_1790},{(void*)0,&l_1790}},{{&l_1790,(void*)0},{&l_1790,&l_1790},{&l_1790,(void*)0}},{{&l_1790,&l_1790},{(void*)0,&l_1790},{&l_1790,(void*)0}},{{&l_1790,&l_1790},{&l_1790,(void*)0},{&l_1790,&l_1790}},{{(void*)0,&l_1790},{&l_1790,(void*)0},{&l_1790,&l_1790}}};
    uint32_t l_1860 = 0xA3A27FD2L;
    uint16_t *l_1894 = &g_1643;
    uint16_t **l_1893[1];
    uint16_t ***l_1892 = &l_1893[0];
    uint64_t l_1919 = 0xE5030AFB1974F554LL;
    int64_t *l_1941 = &g_1915;
    union U3 ** const l_1975[6] = {&g_303,&g_303,&g_303,&g_303,&g_303,&g_303};
    uint16_t l_2002 = 7UL;
    uint8_t l_2017 = 0x17L;
    uint32_t l_2037[2];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1777[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1788[i] = &g_304.f1;
    for (i = 0; i < 1; i++)
        l_1893[i] = &l_1894;
    for (i = 0; i < 2; i++)
        l_2037[i] = 0x9DC84C23L;
    (*p_20) &= l_1407;
    for (g_1355 = 3; (g_1355 >= 0); g_1355 -= 1)
    { 
        int32_t l_1416 = (-9L);
        union U1 * const *l_1422 = &g_458;
        union U1 ***l_1475 = &g_709[1];
        union U1 ****l_1474 = &l_1475;
        for (g_232 = 1; (g_232 <= 4); g_232 += 1)
        { 
            int32_t *l_1415[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            union U1 ***l_1421 = &g_709[0];
            uint32_t l_1438 = 1UL;
            uint8_t l_1440 = 255UL;
            int32_t *l_1477 = &g_1368;
            int i;
            g_143[g_232] = (safe_rshift_func_uint8_t_u_u(((**g_422) = (safe_mul_func_uint8_t_u_u((1UL < (*g_423)), 1L))), 2));
            g_1412--;
            l_1416 |= (*p_20);
            l_1416 &= (safe_div_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(((((*l_1421) = &g_260) == (l_1422 = l_1422)) || p_21), (safe_lshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((0UL | (((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((1UL > ((p_21 , l_1438) > g_1439[0])), l_1407)), (**g_210))), p_21)))) != p_21) == (-1L))) , p_21), (-7L))) >= 4294967291UL), 6L)), g_218.f2)) >= l_1440), 4)))) && (*p_20)) , p_21), l_1407));
            for (g_1368 = 4; (g_1368 >= 0); g_1368 -= 1)
            { 
                int i;
                if ((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((((p_21 != ((l_1445 != ((((((safe_lshift_func_uint8_t_u_s(p_21, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((&g_1349 == (void*)0), ((void*)0 != l_1421))), 4)))) , (**g_422)) != (*g_423)) <= 0xA743L) > 0L) , &g_232)) && 0xB185L)) || p_21) != (**g_210)) || l_1416), 3)) , p_21), 0xC0L)))
                { 
                    if (l_1452)
                        break;
                }
                else
                { 
                    int8_t l_1467 = 0L;
                    int16_t *l_1468 = &g_48.f3;
                    uint32_t *l_1469 = &g_304.f1;
                    uint32_t *l_1470 = &g_304.f1;
                    uint32_t *l_1471[3][2] = {{(void*)0,&g_255},{(void*)0,(void*)0},{&g_255,(void*)0}};
                    union U1 *****l_1476 = &g_1054;
                    int i, j;
                    (*p_20) = (+(l_1472 ^= (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((**g_1348))), (safe_lshift_func_int16_t_s_s(((*l_1468) = (safe_add_func_uint64_t_u_u((**g_1348), (((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((l_1467 , 0xB258L), ((((void*)0 == &g_422) ^ ((1L > 0xD4L) < p_21)) && (*p_20)))), 0xF6D8FA5FL)), 5)) , (void*)0) != (void*)0)))), 1))))));
                    if (l_1473[4][1][0])
                        break;
                    (*l_1476) = l_1474;
                }
                return l_1477;
            }
        }
        if (l_1416)
            break;
        for (g_136 = 1; (g_136 <= 4); g_136 += 1)
        { 
            int i;
            if (g_143[g_136])
                break;
            (***g_533) = &g_143[g_136];
            for (g_304.f1 = 0; (g_304.f1 <= 2); g_304.f1 += 1)
            { 
                int i;
                g_143[(g_1355 + 1)] = 0xE71CF3A3L;
            }
        }
        if ((*p_20))
            break;
        (*g_191) = &l_1416;
    }
    if (((*p_20) = (((*g_14) = ((safe_mod_func_uint16_t_u_u(0x7B81L, (safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(l_1473[4][2][0], 0x15L)) <= ((*g_423) | 8UL)), p_21)))) | 0xB0L)) | l_1484)))
    { 
        uint32_t l_1498 = 0xFC5B2DFDL;
        uint64_t *l_1505 = &g_215;
        int32_t *l_1547 = (void*)0;
        union U2 l_1556 = {-10L};
        union U3 l_1601[1] = {{0L}};
        union U1 l_1652 = {0x04C9L};
        int32_t l_1653 = 0L;
        int16_t *l_1654[7] = {&g_284.f0,(void*)0,&g_284.f0,&g_284.f0,&g_284.f0,(void*)0,(void*)0};
        union U3 *l_1707 = &g_1708;
        int i;
        for (g_358 = 0; (g_358 != 16); g_358++)
        { 
            int64_t *l_1489 = &g_894[3];
            union U1 l_1494 = {0x869CL};
            union U1 ***l_1508[1];
            uint16_t l_1519 = 65535UL;
            int32_t l_1526 = 0x2E83FD78L;
            int8_t *l_1538 = &g_1164[0][0];
            int32_t l_1561 = 8L;
            const struct S0 *l_1584 = &g_883;
            const struct S0 * const *l_1583 = &l_1584;
            const union U3 l_1630 = {0x54L};
            int32_t *l_1646 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_1508[i] = &g_709[1];
            if ((((*l_1489) = 0x57F5E45B1AC8B9A2LL) && (p_20 == (void*)0)))
            { 
                int32_t ***l_1490 = &g_191;
                uint32_t l_1510 = 4294967292UL;
                uint16_t *l_1516 = &g_51;
                uint16_t **l_1515 = &l_1516;
                uint16_t ***l_1514 = &l_1515;
                uint16_t ****l_1513 = &l_1514;
                uint64_t l_1524[6] = {0x5B7ECF7E7D55C9F4LL,0x5B7ECF7E7D55C9F4LL,0x5B7ECF7E7D55C9F4LL,0x5B7ECF7E7D55C9F4LL,0x5B7ECF7E7D55C9F4LL,0x5B7ECF7E7D55C9F4LL};
                int32_t l_1525 = 7L;
                int i;
                (*g_1353) = l_1490;
                if (g_1491)
                    break;
                for (g_304.f0 = 0; (g_304.f0 != (-1)); --g_304.f0)
                { 
                    const union U1 ***l_1509 = &g_726;
                    uint16_t ***l_1512 = (void*)0;
                    uint16_t ****l_1511[7][3] = {{&l_1512,(void*)0,(void*)0},{&l_1512,&l_1512,&l_1512},{&l_1512,&l_1512,(void*)0},{&l_1512,&l_1512,&l_1512},{&l_1512,(void*)0,(void*)0},{&l_1512,&l_1512,&l_1512},{&l_1512,&l_1512,(void*)0}};
                    int32_t l_1529 = 0L;
                    int i, j;
                    (*p_20) ^= (l_1494 , ((((*g_211)++) ^ ((~l_1498) >= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((0xB9L < (safe_div_func_uint8_t_u_u((((void*)0 == l_1505) != (safe_rshift_func_uint8_t_u_u((l_1508[0] != l_1509), p_21))), l_1498))) <= 0x1E2F24DEL), 1)), p_21)))) >= l_1510));
                    (*p_20) = ((l_1513 = l_1511[5][2]) != &l_1514);
                    (*p_20) = (l_1525 ^= (5L != (safe_mul_func_uint16_t_u_u(0x3E06L, ((*g_504) == ((((l_1519 >= l_1498) , (safe_sub_func_int8_t_s_s((l_1494.f3 & (((safe_lshift_func_int16_t_s_s((*g_504), p_21)) == 6UL) , l_1524[3])), 0x9DL))) , 0x9B68399EL) ^ (*p_20)))))));
                    (*p_20) ^= l_1526;
                    (*p_20) = (safe_rshift_func_int8_t_s_u((0xE3E7L ^ ((**l_1515) = l_1529)), (**g_422)));
                }
            }
            else
            { 
                int32_t *l_1532 = &g_5;
                int64_t **l_1542[3];
                const union U1 *l_1544 = &g_48;
                int i;
                for (i = 0; i < 3; i++)
                    l_1542[i] = &l_1489;
                for (g_15 = 0; (g_15 >= (-6)); g_15 = safe_sub_func_uint64_t_u_u(g_15, 8))
                { 
                    return p_19;
                }
                if ((*p_20))
                    break;
                if (((void*)0 == &g_747))
                { 
                    if (l_1519)
                        break;
                    return l_1532;
                }
                else
                { 
                    int8_t **l_1537 = &g_14;
                    int8_t **l_1539[7][7] = {{(void*)0,&l_1538,&l_1538,&l_1538,&l_1538,&l_1538,&l_1538},{(void*)0,&l_1538,&l_1538,&l_1538,&l_1538,&l_1538,&l_1538},{&l_1538,(void*)0,&l_1538,(void*)0,&l_1538,(void*)0,&l_1538},{&l_1538,(void*)0,(void*)0,&l_1538,&l_1538,&l_1538,&l_1538},{&l_1538,(void*)0,(void*)0,(void*)0,(void*)0,&l_1538,&l_1538},{(void*)0,&l_1538,(void*)0,&l_1538,(void*)0,&l_1538,(void*)0},{&l_1538,&l_1538,(void*)0,&l_1538,&l_1538,(void*)0,&l_1538}};
                    int64_t **l_1543 = &g_1110;
                    const union U1 **l_1545[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1545[i] = &l_1544;
                    (***g_533) = ((((safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((((*l_1537) = &g_1164[0][2]) == (g_1540 = l_1538)), p_21)) == (safe_unary_minus_func_uint8_t_u((**g_422)))), ((0xB7L ^ ((l_1542[0] != l_1543) & l_1498)) < l_1498))) != p_21) & p_21) , &l_1472);
                    g_1546 = ((*g_726) = l_1544);
                    return l_1547;
                }
            }
        }
        if (((((safe_sub_func_int64_t_s_s((g_1650 &= ((*g_1110) ^= (l_1649 != (void*)0))), (l_1651 != (l_1652 , (l_1629.f0 , (void*)0))))) > (l_1472 ^= ((*g_211) , l_1653))) ^ 4UL) , l_1473[1][2][0]))
        { 
            union U1 **l_1661 = &g_260;
            int32_t l_1663 = 7L;
            (*p_20) = ((safe_unary_minus_func_int64_t_s((safe_add_func_int8_t_s_s((l_1652 , p_21), ((l_1662 ^= (safe_rshift_func_int16_t_s_s((l_1660 , ((l_1652 , l_1661) == (void*)0)), 6))) , (&l_1472 != &l_1472)))))) , l_1663);
            for (g_816 = 0; (g_816 == 5); ++g_816)
            { 
                for (g_895 = 4; (g_895 >= 0); g_895 -= 1)
                { 
                    union U1 *l_1666 = &g_1667;
                    int32_t l_1668 = 0x140CA089L;
                    l_1666 = ((&l_1652 == (void*)0) , &l_1652);
                    if (l_1668)
                        continue;
                }
            }
        }
        else
        { 
            uint8_t l_1677[6][3][4] = {{{253UL,1UL,0xBFL,255UL},{1UL,1UL,253UL,249UL},{0xD4L,255UL,0x15L,255UL}},{{0xFDL,251UL,255UL,0x29L},{0xF7L,249UL,0UL,250UL},{0x15L,0x67L,255UL,253UL}},{{0x15L,0xBFL,0UL,1UL},{0xF7L,253UL,255UL,0xD4L},{0xFDL,0x15L,0x15L,0xFDL}},{{0xD4L,255UL,253UL,0xF7L},{1UL,0UL,0xBFL,0x15L},{253UL,255UL,0x67L,0x15L}},{{250UL,0UL,249UL,0xF7L},{0x29L,255UL,251UL,0xFDL},{255UL,0x15L,255UL,0xD4L}},{{249UL,253UL,1UL,1UL},{255UL,0xBFL,1UL,253UL},{249UL,0x67L,1UL,250UL}}};
            int32_t l_1682 = 0x8B1A5025L;
            const int32_t l_1683 = (-1L);
            int32_t l_1687 = (-1L);
            int32_t l_1688 = 0x36483EB5L;
            int i, j, k;
            if (((safe_rshift_func_uint8_t_u_u(p_21, 5)) || (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_1677[0][0][0] = (4294967295UL & 0x8A500DAAL)) ^ (5UL == (safe_rshift_func_uint8_t_u_u(((l_1682 = ((safe_rshift_func_int16_t_s_s((l_1653 = (0xC79A1CA19EAC51D8LL != p_21)), 13)) | l_1682)) | l_1683), 0)))), 14)), (*g_504))), (*g_1540)))))
            { 
                int32_t *l_1684 = (void*)0;
                int32_t *l_1685 = &g_143[2];
                int32_t *l_1686[4] = {&l_1472,&l_1472,&l_1472,&l_1472};
                uint32_t l_1689 = 0UL;
                int64_t *l_1698 = &g_894[1];
                int64_t *l_1699 = &g_1491;
                union U3 l_1700 = {-9L};
                int i;
                l_1689++;
                (***g_1353) = (void*)0;
                (***g_533) = func_23(func_28(p_21, ((*l_1699) = ((0xCFL ^ (safe_mod_func_int8_t_s_s(l_1687, l_1660.f1))) < ((*l_1698) = ((safe_sub_func_uint16_t_u_u(((((((*l_1685) = ((**g_1109) &= 0xABE30CF05B6EBE7ALL)) || (safe_add_func_uint64_t_u_u(((l_1629.f0 , ((*g_587) == (void*)0)) > 0xEEL), p_21))) & (**g_1348)) <= p_21) , p_21), 0x371EL)) == 0x0D2CL)))), l_1700, (***g_533), l_1701), l_1702, (*g_1349), &g_232);
            }
            else
            { 
                int32_t *l_1703[6][2][4] = {{{&g_143[3],&l_1682,&g_17[0],&g_17[0]},{&l_1687,&l_1687,&l_1687,&g_1368}},{{&l_1687,&l_1653,&g_17[0],&l_1687},{&g_143[3],&g_1368,&g_143[3],&g_17[0]}},{{&l_1682,&g_1368,&l_1687,&l_1687},{&g_1368,&l_1653,&l_1653,&g_1368}},{{&g_143[3],&l_1687,&l_1653,&g_17[0]},{&g_1368,&l_1682,&l_1687,&l_1682}},{{&l_1682,&l_1653,&g_143[3],&l_1682},{(void*)0,&g_17[0],&g_143[4],&g_143[4]}},{{&g_143[3],&g_143[3],&l_1687,&l_1653},{&g_143[3],&l_1687,&g_143[4],&g_143[3]}}};
                int i, j, k;
                return p_19;
            }
            (*g_191) = (*g_191);
            ++l_1704;
        }
        l_1707 = &l_1601[0];
    }
    else
    { 
        int32_t *l_1709 = (void*)0;
        uint8_t *l_1715 = &g_1267;
        uint16_t *l_1719 = (void*)0;
        union U1 l_1720 = {0UL};
        union U2 l_1723 = {0x8528L};
        union U3 l_1728[4] = {{1L},{1L},{1L},{1L}};
        int32_t l_1733 = 0x7A09F600L;
        int32_t l_1757 = (-1L);
        int i;
        l_1709 = p_19;
        if (((func_28((((*l_1715) |= (((l_1629.f0 != (0x5948L <= (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(p_21, (((l_1714 != (void*)0) > (6UL != (9L == p_21))) , l_1407))), (**g_1351))))) < (*g_504)) , (*g_423))) < l_1660.f1), p_21, l_1702, p_19, l_1701) , l_1629.f0) > 1L))
        { 
            int16_t l_1718[3];
            uint32_t l_1727[4];
            int32_t *l_1729 = (void*)0;
            int8_t *l_1730 = &g_232;
            union U2 l_1731 = {1L};
            int i;
            for (i = 0; i < 3; i++)
                l_1718[i] = 0x0A41L;
            for (i = 0; i < 4; i++)
                l_1727[i] = 0xC8F53EBEL;
            (*p_20) = (-1L);
            (*g_726) = (void*)0;
            (*p_20) = ((safe_div_func_int64_t_s_s((((((**g_1402) , ((*g_210) != (l_1718[1] , l_1719))) < ((((void*)0 != &l_1407) > (l_1720 , l_1473[5][4][0])) != (*g_1110))) > 0L) < l_1660.f0), (**g_1351))) , (*p_20));
            for (g_304.f1 = 0; (g_304.f1 <= 1); g_304.f1 += 1)
            { 
                int8_t l_1726[2];
                const union U3 l_1732 = {-6L};
                int i;
                for (i = 0; i < 2; i++)
                    l_1726[i] = 0x00L;
                (***g_533) = func_23((l_1731 = func_28((l_1407 ^ ((((p_21 , (safe_add_func_uint32_t_u_u(p_21, (-6L)))) > (l_1723 , ((safe_mul_func_uint16_t_u_u((l_1727[1] &= ((l_1726[0] | p_21) == p_21)), 0x4746L)) == l_1660.f0))) < l_1473[4][1][0]) >= (-1L))), l_1726[0], l_1728[3], l_1729, l_1730)), l_1732, l_1733, l_1701);
            }
            return p_20;
        }
        else
        { 
            const int64_t l_1734 = 0x6A8EB09CFBD72956LL;
            int32_t l_1753 = 0x4AAB71D8L;
            int32_t l_1755 = 0xF36C7AC4L;
            int32_t l_1759 = (-7L);
            int32_t l_1761 = 1L;
            int32_t l_1763 = 8L;
            int32_t l_1765 = (-4L);
            int32_t l_1769 = 0xCE5DB2F7L;
            int32_t l_1770 = 1L;
            int32_t l_1771[6][2] = {{(-7L),(-7L)},{(-1L),(-7L)},{(-7L),(-1L)},{(-7L),(-7L)},{(-1L),(-7L)},{(-7L),(-1L)}};
            int i, j;
            if ((p_21 , l_1734))
            { 
                int32_t l_1739 = 0x97A53E2AL;
                uint64_t l_1750[7] = {0UL,0UL,0x5450DE121F3F955ELL,0UL,0UL,0x5450DE121F3F955ELL,0UL};
                int32_t l_1754 = (-4L);
                int32_t l_1756 = (-7L);
                int32_t l_1760 = 0xC371BB9BL;
                int32_t l_1762 = 0x2BFB58F1L;
                int32_t l_1766 = 0x9E00005AL;
                int32_t l_1767 = 0x3091DBFFL;
                int32_t l_1768[3][4] = {{0xBC4E9AE8L,0xDD6D4224L,0xBC4E9AE8L,0x99BEF761L},{0xBC4E9AE8L,0x99BEF761L,0x99BEF761L,0xBC4E9AE8L},{6L,0x99BEF761L,0x012259E5L,0x99BEF761L}};
                int i, j;
                for (g_947 = (-10); (g_947 != 55); ++g_947)
                { 
                    int32_t *l_1737 = &l_1733;
                    int32_t *l_1740 = &l_1738[3][1][2];
                    int32_t *l_1741 = &l_1738[3][1][2];
                    int32_t *l_1742 = (void*)0;
                    int32_t *l_1743 = &l_1472;
                    int32_t *l_1744 = (void*)0;
                    int32_t *l_1745 = &g_332;
                    int32_t *l_1746 = &g_143[3];
                    int32_t *l_1747 = &g_143[4];
                    int32_t *l_1748 = &g_17[0];
                    int32_t *l_1749[2][7] = {{&g_136,&g_75,&g_75,&g_136,&g_75,&g_75,&g_136},{&g_3,&l_1738[3][1][2],&g_3,&g_3,&l_1738[3][1][2],&g_3,&g_3}};
                    int8_t l_1764 = (-1L);
                    int i, j;
                    l_1750[6]++;
                    ++g_1772;
                    return p_19;
                }
            }
            else
            { 
                for (l_1770 = 0; (l_1770 <= 4); l_1770 += 1)
                { 
                    (*g_191) = &l_1757;
                }
            }
        }
    }
    if (((l_1660.f2 = (((*l_1714) = (l_1660.f0 <= ((l_1775 == (((safe_sub_func_int16_t_s_s((*g_504), (((*g_1110) = ((**g_1109) == (safe_mod_func_uint32_t_u_u((l_1472 |= ((((*p_20) = (((((p_21 | (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s(p_21, (((+(p_21 || (**g_1351))) == l_1660.f2) | l_1787))), 0x0D505B61L))) == 0xEBL) & p_21) & (*g_504)) ^ 0x3CL)) & 1L) , l_1660.f2)), l_1473[3][2][0])))) >= l_1660.f0))) && p_21) , (void*)0)) > 0x2E5BL))) , l_1662)) >= 0x44BDCD10L))
    { 
        struct S0 * const ****l_1792 = &l_1789[5][0][0];
        int32_t l_1840 = (-1L);
        union U1 *****l_1843 = &g_1054;
        int32_t l_1852 = 1L;
        int32_t l_1856[7] = {1L,1L,0x9BC207D5L,1L,1L,0x9BC207D5L,1L};
        uint32_t l_1864 = 4294967295UL;
        uint32_t l_1874 = 1UL;
        int32_t *l_1882 = &g_17[0];
        int32_t *l_1883 = &l_1472;
        int32_t *l_1884 = &g_136;
        int32_t *l_1885 = &l_1472;
        int32_t *l_1886[1][4][1];
        uint16_t l_1887 = 0UL;
        uint16_t ***l_1895 = &l_1893[0];
        const int8_t **l_1898 = (void*)0;
        const int8_t **l_1899 = &l_1445;
        struct S0 l_1901[6] = {{11062,1,-1},{11062,1,-1},{11062,1,-1},{11062,1,-1},{11062,1,-1},{11062,1,-1}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1886[i][j][k] = &g_5;
            }
        }
        if ((((*l_1792) = l_1789[1][2][0]) == (void*)0))
        { 
            uint64_t l_1817[4][2][2] = {{{0x411828D874249438LL,18446744073709551611UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551611UL,0x411828D874249438LL}},{{18446744073709551611UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551611UL},{0x411828D874249438LL,18446744073709551611UL}}};
            uint64_t ***l_1842 = (void*)0;
            int32_t *l_1844 = &g_136;
            int32_t *l_1845 = &l_1472;
            int32_t l_1849 = 0x266B3307L;
            int32_t l_1850 = 0x17658E56L;
            int32_t l_1851 = 0x03371EC3L;
            int32_t l_1853 = 0x98056EA7L;
            int32_t l_1854 = 0x3AF33327L;
            int32_t l_1855[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1855[i] = 0x576B8C6EL;
            for (g_332 = 4; (g_332 >= 0); g_332 -= 1)
            { 
                int64_t l_1794 = 1L;
                const int64_t * const l_1812[7] = {&g_358,&g_358,&g_358,&g_358,&g_358,&g_358,&g_358};
                const int64_t * const *l_1811 = &l_1812[6];
                union U3 l_1819 = {0x57L};
                int32_t l_1847[4][2][5];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1847[i][j][k] = 1L;
                    }
                }
                for (g_304.f2 = 3; (g_304.f2 >= 1); g_304.f2 -= 1)
                { 
                    const int64_t * const *l_1813 = (void*)0;
                    union U1 *l_1816 = &g_1667;
                    int32_t l_1818 = 0x9D8E23A5L;
                    struct S0 * const l_1841 = &g_883;
                    int i;
                    (***g_533) = p_20;
                    (*g_192) = (safe_unary_minus_func_uint32_t_u((l_1794 >= (((*g_211)--) <= ((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(p_21, p_21)), (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((l_1813 = l_1811) != &g_1110), (safe_sub_func_uint16_t_u_u((((**l_1651) = l_1816) != (void*)0), l_1817[0][0][1])))) > (-4L)), p_21)))) != l_1817[0][0][1]), 0x4659L)), (-6L))), p_21)) > l_1818)))));
                    (*p_20) &= 0x0A0CE589L;
                    (**g_191) &= (l_1819 , (((safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((&g_1054 == &g_1054), (*g_504))), p_21)), ((**g_1351) = (safe_div_func_int8_t_s_s(((l_1777[(g_304.f2 + 1)] = l_1777[(g_304.f2 + 1)]) == ((((safe_sub_func_int64_t_s_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u((++(**g_422)), (((safe_unary_minus_func_uint8_t_u((+(((safe_sub_func_int64_t_s_s(((~0xB4A8DFAC25AFB9F6LL) == p_21), l_1840)) <= (**g_1109)) | l_1473[2][1][0])))) || l_1787) , 0UL))))), 18446744073709551606UL)) != 0xE59BF738L) && 0x30D2L) , l_1841)), 0xCCL))))) , (void*)0) != l_1842));
                    l_1738[3][1][2] = ((*g_211) | l_1819.f0);
                }
                l_1843 = &g_1054;
                for (g_255 = 0; (g_255 <= 0); g_255 += 1)
                { 
                    int32_t *l_1846 = (void*)0;
                    int32_t *l_1848[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1848[i] = (void*)0;
                    p_20 = ((***g_533) = l_1844);
                    l_1846 = l_1845;
                    g_1857++;
                }
                if (l_1860)
                    break;
                for (l_1819.f1 = 0; (l_1819.f1 <= 0); l_1819.f1 += 1)
                { 
                    int32_t *l_1861 = &l_1840;
                    int32_t *l_1862[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int64_t l_1863[1][1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1863[i][j] = 0xF406314A73F0CCA2LL;
                    }
                    l_1864++;
                }
            }
        }
        else
        { 
            int32_t *l_1867 = &g_75;
            int32_t *l_1868 = &g_1758;
            int32_t *l_1869 = (void*)0;
            int32_t *l_1870 = &g_143[4];
            int32_t *l_1871 = &g_17[0];
            int32_t *l_1872 = &l_1840;
            int32_t *l_1873[3][7] = {{&l_1738[3][1][2],&l_1738[3][1][2],&l_1852,&l_1852,&l_1738[3][1][2],&l_1738[3][1][2],&l_1852},{&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0],&g_17[0]},{&l_1738[3][1][2],&l_1852,&l_1852,&l_1738[3][1][2],&l_1738[3][1][2],&l_1852,&l_1852}};
            union U1 l_1877 = {0xF83BL};
            int i, j;
            --l_1874;
            (*p_20) |= (l_1877 , (((0x8BE7L == ((65526UL < (++(*g_211))) == 0xCBL)) ^ (((safe_rshift_func_int8_t_s_u(((p_21 > (p_21 >= ((0UL >= (-1L)) <= 1UL))) == (*g_1110)), 2)) <= (**g_1348)) == 1UL)) | (*l_1870)));
        }
        l_1887--;
        l_1738[3][1][2] &= ((safe_div_func_int8_t_s_s((&g_210 == (l_1895 = l_1892)), (safe_rshift_func_int8_t_s_u((((l_1629 , ((*l_1899) = l_1445)) == (void*)0) ^ (((((((g_1340.f0 &= (+(((*g_1349) ^= ((((*l_1701) ^= 0x1FL) , l_1901[3]) , 0UL)) < (*l_1883)))) , 18446744073709551615UL) || (**g_1351)) || p_21) && (*p_20)) >= l_1660.f2) <= p_21)), (**g_422))))) && (-4L));
    }
    else
    { 
        int16_t l_1910 = 0x5EC6L;
        int32_t l_1911 = 3L;
        int32_t l_1914[2];
        struct S0 l_1922 = {7398,0,-0};
        int32_t *l_1934 = &g_75;
        int32_t l_1995 = (-6L);
        uint8_t ***l_2019 = &g_422;
        uint64_t **l_2022 = &g_1349;
        union U1 l_2036 = {3UL};
        union U3 *l_2052 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1914[i] = 0L;
        if (l_1660.f2)
        { 
            int32_t *l_1902 = &l_1472;
            int32_t *l_1903 = (void*)0;
            int32_t *l_1904 = &g_5;
            int32_t *l_1905 = &g_17[0];
            int32_t *l_1906 = &g_136;
            int32_t l_1907 = 0x513FDC7EL;
            int32_t *l_1908 = &l_1738[1][1][4];
            int32_t *l_1909 = &l_1472;
            int32_t *l_1912 = &g_1758;
            int32_t *l_1913[4][2][1] = {{{(void*)0},{&l_1907}},{{(void*)0},{(void*)0}},{{&l_1907},{(void*)0}},{{(void*)0},{&l_1907}}};
            uint16_t ****l_1924 = &l_1892;
            uint16_t *****l_1923 = &l_1924;
            const uint32_t *l_1932 = &g_1933;
            const uint32_t **l_1931 = &l_1932;
            struct S0 ***l_1945[6];
            const int8_t *l_1961 = &g_232;
            int32_t ***l_2016 = &g_191;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_1945[i] = &l_1776;
            g_1916[1]--;
            --l_1919;
            g_1925 = (l_1922 , l_1923);
            if ((p_21 != ((!((**g_422) ^= ((*g_746) != ((*l_1931) = l_1714)))) != p_21)))
            { 
                return p_19;
            }
            else
            { 
                l_1934 = p_19;
                (***g_1353) = (void*)0;
            }
            for (l_1907 = 0; (l_1907 > 15); l_1907 = safe_add_func_uint64_t_u_u(l_1907, 1))
            { 
                uint32_t l_1937[5];
                int8_t l_1948 = (-9L);
                uint8_t l_1968 = 250UL;
                uint16_t l_1971 = 0xA67EL;
                int32_t l_1972 = 9L;
                int32_t ****l_1986 = &g_534[0];
                int32_t l_1992 = 0xE711C68BL;
                int32_t l_1996[1][2][4] = {{{1L,1L,1L,1L},{1L,1L,1L,1L}}};
                union U2 *l_2006[7] = {&g_284,&g_284,&g_284,&g_284,&g_284,&g_284,&g_284};
                union U2 **l_2005 = &l_2006[2];
                int64_t *l_2007 = &g_894[1];
                int16_t *l_2018 = (void*)0;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_1937[i] = 0x10D58B66L;
                if ((l_1937[1] != ((0xA4C52265L >= 0xC33375F0L) , ((+(**g_422)) == ((void*)0 == l_1941)))))
                { 
                    int8_t l_1957[5][1] = {{7L},{0L},{7L},{0L},{7L}};
                    int8_t l_1958 = 0L;
                    uint8_t **l_1969 = (void*)0;
                    int i, j;
                    (*l_1906) |= (safe_unary_minus_func_uint8_t_u((safe_mul_func_uint8_t_u_u(((p_21 > p_21) && ((void*)0 != l_1945[4])), ((*g_423)--)))));
                    if (l_1948)
                        break;
                    if ((*p_20))
                        break;
                    (*l_1906) ^= ((l_1972 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((l_1957[0][0] = (g_553[0][2] = ((**g_1348)--))), 0x2700428C2CD8C473LL)), (((l_1958 , (*g_1402)) == (void*)0) && ((((safe_add_func_int16_t_s_s(((((((&l_1948 == l_1961) != (safe_sub_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((((safe_add_func_int64_t_s_s(l_1484, (**g_1109))) | l_1958) > 255UL), l_1968)) , 0xF6L) ^ l_1937[1]) && 6UL), 0xDDB7AC62L))) <= p_21) == 0x3EC8L) , &g_423) != l_1969), l_1660.f2)) & g_1970) >= l_1971) , 254UL)))), 7))) > 0xC9138BAEL);
                    (*l_1904) = (*p_20);
                }
                else
                { 
                    int32_t l_1989 = 0L;
                    int32_t l_1993 = 1L;
                    int32_t l_1994 = 0xD35BB4FAL;
                    int32_t l_1997 = 0xDC45070AL;
                    int32_t l_1998 = 0xED933635L;
                    int32_t l_1999 = 0xC47EC936L;
                    int32_t l_2000 = 0L;
                    int32_t l_2001 = 0x59E44243L;
                    (*g_1353) = (*g_533);
                    (*l_1902) = (safe_rshift_func_uint16_t_u_u((&g_303 == l_1975[4]), (((g_1242[1][4][2] = (((**g_1348) = (!(safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((+((((safe_mul_func_int32_t_s_s(0xE7BC2D07L, (l_1986 == &g_534[0]))) , ((*g_423) &= (safe_add_func_int8_t_s_s(l_1989, ((safe_rshift_func_int16_t_s_u(0x3769L, 15)) ^ p_21))))) != 8L) ^ 0xF46CB0F92CBE2857LL)) , p_21), l_1407)), 1L)), (-1L))))) & p_21)) , g_284) , 1UL)));
                    --l_2002;
                }
                (*l_2005) = &g_284;
                (*l_1904) = (((g_304.f2 = ((0x42L <= ((void*)0 != l_2007)) <= ((((((*l_1912) &= (1UL < (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(0L, ((safe_mul_func_int8_t_s_s((l_2016 != (void*)0), p_21)) || p_21))), (*p_20))), l_2017)))) ^ p_21) <= (*p_20)) || 0xBB4D921BE430FBDDLL) > 0xC7FF8F8EL))) != p_21) <= l_1704);
            }
        }
        else
        { 
            uint8_t ****l_2020[6] = {&l_2019,&l_2019,&l_2019,&l_2019,&l_2019,&l_2019};
            uint64_t **l_2023 = &g_1349;
            int32_t l_2024 = 0x15F1FCA8L;
            uint64_t l_2047 = 18446744073709551613UL;
            int i;
            g_2021 = l_2019;
            l_2024 |= ((p_21 , l_2022) != l_2023);
            if ((safe_rshift_func_uint8_t_u_u((**g_422), 7)))
            { 
                int8_t l_2031 = 0x54L;
                union U1 * const *l_2044 = &g_458;
                union U1 * const **l_2043 = &l_2044;
                union U1 * const *** const l_2042 = &l_2043;
                int32_t *l_2045 = &l_1911;
                for (l_1995 = 0; (l_1995 < 18); l_1995 = safe_add_func_uint16_t_u_u(l_1995, 3))
                { 
                    int16_t *l_2040 = &l_1910;
                    union U1 ****l_2041[4];
                    int32_t *l_2046[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2041[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_2046[i] = &g_143[4];
                    (*l_1934) = 0x49096B28L;
                    (*l_1934) = (safe_add_func_uint32_t_u_u((l_2031 != ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((l_2036 , l_2037[1]) & (*g_423)) >= (safe_add_func_uint16_t_u_u(((l_2024 = ((*l_2040) ^= p_21)) , (l_2041[3] == l_2042)), (*g_504)))), p_21)), l_2031)) <= 0x91F4L)), (*p_20)));
                    return l_2046[3];
                }
                return p_20;
            }
            else
            { 
                struct S0 l_2051 = {14867,0,0};
                (*l_1934) = l_2047;
                for (g_1915 = 14; (g_1915 >= 15); g_1915 = safe_add_func_int32_t_s_s(g_1915, 1))
                { 
                    int32_t *l_2050[4][4] = {{&g_17[0],&l_1914[0],&l_1914[0],&g_17[0]},{&l_1914[0],&g_17[0],&g_136,&l_1738[0][0][4]},{&l_1914[0],&g_136,&l_1914[0],&g_143[4]},{&g_17[0],&l_1738[0][0][4],&g_143[4],&g_143[4]}};
                    int i, j;
                    if ((*p_20))
                        break;
                    return p_20;
                }
                (*l_1934) &= (l_2051 , (((**g_746) = p_21) <= ((-1L) && ((((void*)0 != l_2052) < 0x845666CA95A44705LL) , (**g_1351)))));
            }
        }
    }
    for (l_1662 = 0; (l_1662 < 14); l_1662 = safe_add_func_uint16_t_u_u(l_1662, 8))
    { 
        uint16_t l_2055[5];
        int i;
        for (i = 0; i < 5; i++)
            l_2055[i] = 65535UL;
        l_2055[0]++;
        l_1660.f2 = ((*g_504) > (safe_add_func_uint16_t_u_u((*g_211), 0UL)));
    }
    return p_20;
}



static int32_t * func_23(union U2  p_24, const union U3  p_25, uint64_t  p_26, int8_t * p_27)
{ 
    union U3 **l_1401 = &g_303;
    union U3 ***l_1400[5][6][4] = {{{(void*)0,(void*)0,&l_1401,&l_1401},{(void*)0,&l_1401,&l_1401,&l_1401},{(void*)0,(void*)0,&l_1401,&l_1401},{&l_1401,(void*)0,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,(void*)0},{&l_1401,&l_1401,&l_1401,&l_1401}},{{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,(void*)0,&l_1401},{&l_1401,&l_1401,(void*)0,&l_1401},{&l_1401,&l_1401,(void*)0,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401}},{{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,(void*)0,&l_1401,&l_1401},{&l_1401,(void*)0,&l_1401,&l_1401},{&l_1401,(void*)0,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401}},{{(void*)0,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{(void*)0,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,(void*)0}},{{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,(void*)0},{&l_1401,&l_1401,&l_1401,&l_1401},{&l_1401,&l_1401,&l_1401,&l_1401}}};
    union U3 **l_1404 = &g_303;
    int32_t l_1405 = 0xDCEEC50FL;
    int32_t *l_1406 = &g_17[0];
    int i, j, k;
    l_1405 ^= ((g_1402 = &g_303) == (l_1404 = (g_1403 = (void*)0)));
    return l_1406;
}



static union U2  func_28(int32_t  p_29, int64_t  p_30, union U3  p_31, int32_t * p_32, int8_t * p_33)
{ 
    union U2 l_802[1] = {{0xD11BL}};
    union U1 ** const * const l_809[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_822 = 0xEC1AE361L;
    int32_t l_824 = 1L;
    int32_t l_827 = 0x04D30B73L;
    int32_t l_832[3];
    struct S0 l_872 = {7258,0,1};
    int8_t *l_893 = (void*)0;
    uint8_t l_928 = 255UL;
    uint8_t ***l_945 = &g_422;
    uint64_t *l_957 = &g_947;
    uint32_t **l_982 = &g_747;
    uint16_t ***l_990 = (void*)0;
    int32_t ***l_1161 = &g_191;
    uint32_t l_1192[4][4];
    int32_t l_1205 = 0x09AA10A4L;
    int32_t l_1266 = (-1L);
    int16_t l_1274 = 0x540AL;
    uint64_t l_1294[3][2];
    const uint8_t l_1300 = 0UL;
    union U2 l_1397 = {0x2B02L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_832[i] = 0x1EA0679AL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_1192[i][j] = 18446744073709551609UL;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1294[i][j] = 0xB097EC540E338864LL;
    }
    for (g_5 = 26; (g_5 == 7); g_5 = safe_sub_func_uint16_t_u_u(g_5, 7))
    { 
        return l_802[0];
    }
    for (g_284.f0 = 0; (g_284.f0 >= 19); g_284.f0 = safe_add_func_int16_t_s_s(g_284.f0, 1))
    { 
        int64_t l_808[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
        union U1 ***l_811 = &g_709[1];
        union U1 ****l_810 = &l_811;
        int32_t *l_817 = &g_136;
        int32_t l_823 = 0x4706D608L;
        int32_t l_825 = 0L;
        int32_t l_826 = (-1L);
        int32_t l_828 = 0xDE4D17C0L;
        int32_t l_829 = 0x192D8297L;
        int32_t l_830 = 0x77B3B6B9L;
        int32_t l_831 = 3L;
        int32_t l_833 = (-8L);
        int32_t l_834 = 1L;
        int32_t l_835 = (-1L);
        int32_t l_836 = 0xAA0F5ED9L;
        int32_t l_837 = 0x97383E18L;
        int32_t l_838 = (-1L);
        int32_t l_839 = 0L;
        int32_t l_840 = 0L;
        int32_t *l_921 = &g_17[0];
        int32_t *l_922 = &l_835;
        int32_t *l_923 = &l_833;
        int32_t *l_924 = &l_824;
        int32_t *l_925 = &l_822;
        int32_t *l_926 = &l_832[1];
        int32_t *l_927[6][6] = {{&l_826,&g_75,(void*)0,&g_136,(void*)0,(void*)0},{(void*)0,&l_823,(void*)0,&l_833,(void*)0,&l_833},{&g_136,&g_75,&g_136,&l_824,&l_830,&l_823},{(void*)0,&l_827,&l_836,(void*)0,&l_826,&l_830},{&g_136,&l_833,&l_824,(void*)0,(void*)0,&l_824},{(void*)0,(void*)0,&g_75,&l_824,&l_836,&g_136}};
        int32_t l_946 = 0x8EAC2C35L;
        int16_t *l_958 = &l_802[0].f0;
        uint16_t l_1008 = 65535UL;
        int8_t l_1017 = 0xFDL;
        int i, j;
        (*l_817) = ((((p_30 = (safe_lshift_func_int16_t_s_s((((*g_211) = (l_808[0] != (((((*g_504) ^ (((l_809[0] == ((*l_810) = (g_284 , &g_709[0]))) && l_808[0]) ^ ((safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((*p_33), g_816)), l_808[0])) >= 0x2BBDE9A31260953ALL))) ^ (*p_33)) == l_802[0].f0) == l_808[2]))) ^ 0xB095L), p_30))) != p_31.f0) , 0xECL) ^ (*p_33));
        for (g_816 = 0; (g_816 <= 24); g_816++)
        { 
            int32_t *l_820 = &g_143[1];
            int32_t *l_821[4][4][1] = {{{&g_332},{&g_5},{&g_17[0]},{&g_5}},{{&g_332},{&g_143[1]},{&g_332},{&g_5}},{{&g_17[0]},{&g_5},{&g_332},{&g_143[1]}},{{&g_332},{&g_5},{&g_17[0]},{&g_5}}};
            uint8_t **l_869[3][7] = {{&g_423,(void*)0,&g_423,(void*)0,&g_423,(void*)0,&g_423},{&g_423,&g_423,&g_423,&g_423,&g_423,&g_423,&g_423},{&g_423,(void*)0,&g_423,(void*)0,&g_423,(void*)0,&g_423}};
            uint8_t l_880[3];
            int8_t *l_892 = &g_304.f0;
            uint16_t *l_902 = &g_51;
            uint16_t **l_901 = &l_902;
            const union U2 * const l_920 = &g_284;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_880[i] = 0UL;
            if (p_31.f0)
                break;
            ++g_841;
            p_32 = ((*g_191) = p_32);
            for (l_839 = 12; (l_839 >= 23); l_839 = safe_add_func_uint64_t_u_u(l_839, 2))
            { 
                int64_t *l_857[2][1][2];
                uint16_t *l_861 = &g_51;
                uint16_t **l_860 = &l_861;
                uint16_t ***l_862 = &l_860;
                uint32_t l_873 = 0UL;
                struct S0 *l_882 = &g_883;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_857[i][j][k] = &l_808[1];
                    }
                }
                if ((~(safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((safe_sub_func_int64_t_s_s((((p_31.f0 , g_5) ^ ((*l_817) ^= g_218.f2)) ^ ((((l_822 || p_30) , ((safe_rshift_func_uint16_t_u_s(p_30, 6)) && (((*l_862) = l_860) == (void*)0))) != (-1L)) > l_832[2])), p_30)) , 0xADL), 0xF5L)), 0x86F8D07A963CE53CLL)) , 0xF4B7L), 7)) || g_255), (**g_210)))))
                { 
                    (*l_820) &= (p_30 > ((&g_553[0][3] == l_857[0][0][1]) != (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_869[2][0] != &g_423), (((*g_726) = (void*)0) != (((**g_422) = (safe_mul_func_int16_t_s_s(((((l_872 , 9UL) ^ l_873) <= p_31.f0) & 0xC1A0EE94E5230D5ALL), 0x5EEDL))) , (void*)0)))), 0x75L)), (*g_504)))));
                }
                else
                { 
                    (*g_191) = (*g_191);
                }
                for (l_823 = 0; (l_823 < (-14)); --l_823)
                { 
                    const union U1 ***l_877 = &g_726;
                    const union U1 ****l_878 = &l_877;
                    union U1 ***l_879 = &g_709[0];
                    (*l_820) |= ((~((0xE566L == 0x3B0CL) , l_873)) < g_359);
                    l_880[2] |= ((*l_820) = (((*l_878) = l_877) == l_879));
                    (*g_191) = p_32;
                    (*l_820) = ((l_882 = (void*)0) != ((((safe_mul_func_int8_t_s_s(((*p_33) ^= ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_873, (0x34A80DE41524CE3ALL ^ ((l_873 >= (l_892 == l_893)) || l_827)))), l_802[0].f0)) ^ l_873)), 255UL)) | 0x8CL) && (**g_422)) , (void*)0));
                }
                for (l_838 = 0; (l_838 <= 2); l_838 += 1)
                { 
                    (*l_820) = g_894[1];
                    if (g_895)
                        continue;
                    if (l_873)
                        break;
                }
                l_832[0] = p_30;
                for (g_75 = 24; (g_75 != 8); g_75--)
                { 
                    uint16_t **l_900 = &l_861;
                    int16_t *l_919 = &g_48.f3;
                    l_817 = (*g_191);
                    p_31.f3 = ((*l_820) ^= (safe_sub_func_uint64_t_u_u((((*g_211) && ((*p_33) ^ (l_900 == l_901))) || ((safe_div_func_uint32_t_u_u((~(safe_rshift_func_uint16_t_u_s((((*l_919) = (safe_mul_func_uint16_t_u_u((~((((safe_mod_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((*g_423), (safe_add_func_uint64_t_u_u((((g_894[1] ^= g_261.f0) == (safe_mod_func_uint16_t_u_u(p_30, 9L))) | 0x2A210F4DL), l_822)))) >= p_30), 0x36L)) , (void*)0) == (void*)0) && 0x96L)), l_873))) <= p_31.f0), 12))), p_30)) < l_873)), l_873)));
                    return g_284;
                }
            }
            l_872.f2 |= (1L <= (l_920 == (void*)0));
        }
        --l_928;
    }
    return l_1397;
}



static int8_t * func_38(struct S0  p_39, int32_t  p_40, uint32_t  p_41)
{ 
    uint8_t l_43 = 0UL;
    int32_t *l_46 = (void*)0;
    int16_t l_448 = 0xD9F1L;
    uint32_t *l_449 = &g_304.f1;
    uint32_t *l_450 = &g_451;
    int32_t *l_452 = &g_5;
    int32_t l_463 = (-3L);
    int32_t l_466 = 0xBA660FA8L;
    int32_t l_468[2];
    int8_t l_469 = (-7L);
    uint8_t l_471 = 0x87L;
    uint8_t **l_479 = &g_423;
    int16_t l_494 = (-1L);
    uint64_t *l_496 = &g_215;
    const struct S0 l_539 = {22454,0,-1};
    int64_t l_542 = 8L;
    union U1 l_589[5] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
    uint64_t l_617 = 18446744073709551611UL;
    const int32_t ****l_631 = (void*)0;
    const int32_t *****l_630[3];
    struct S0 *l_673 = (void*)0;
    struct S0 **l_672 = &l_673;
    struct S0 ***l_671 = &l_672;
    struct S0 ****l_670 = &l_671;
    const int64_t l_743 = 0x38E86800EC09602BLL;
    int8_t *l_794 = &g_15;
    int i;
    for (i = 0; i < 2; i++)
        l_468[i] = 0xAA35A334L;
    for (i = 0; i < 3; i++)
        l_630[i] = &l_631;
    if (((*l_452) = (l_43 >= (func_44(l_46) >= (((*l_450) |= ((*l_449) = ((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((**g_422) = (p_39.f2 == (safe_sub_func_uint32_t_u_u(0UL, ((((l_448 | (p_39.f0 , p_39.f0)) == 255UL) , 1UL) > l_43))))) <= 0xA3L) , 0x24L), p_39.f2)), p_41)))), p_39.f2)) || (*g_423)))) != 0xE3760A9BL)))))
    { 
        int32_t * const l_453 = (void*)0;
        int32_t l_460 = 0x102AE1CFL;
        int32_t l_461 = 0L;
        int32_t l_462 = 1L;
        int32_t l_464 = (-7L);
        int32_t l_465 = 0xDF76C4CFL;
        int32_t l_467[3];
        int64_t l_495[6] = {0x1285E740721D79ECLL,0x1285E740721D79ECLL,0x4A23D146A1226D7FLL,0x1285E740721D79ECLL,0x1285E740721D79ECLL,0x4A23D146A1226D7FLL};
        int32_t l_518[1][3][3];
        union U1 l_549 = {0x3C3BL};
        uint8_t **l_557 = &g_423;
        const uint8_t *l_563 = &l_471;
        uint32_t l_636 = 0xEF130F37L;
        int32_t ***l_650 = &g_191;
        int16_t l_654[6][2][5] = {{{0L,0L,0x54D5L,0L,0L},{(-1L),0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,(-1L)},{0L,0L,0x54D5L,0L,0L}},{{(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L)}},{{0L,0L,0x54D5L,0L,0L},{(-1L),0L,(-1L),(-1L),0L}},{{0L,(-1L),(-1L),0L,(-1L)},{0L,0L,0x54D5L,0L,0L}},{{(-1L),0L,(-1L),(-1L),0L},{0L,(-1L),(-1L),0L,(-1L)}}};
        int8_t *l_656 = &g_15;
        int32_t l_659 = 0xF7F00FDDL;
        int8_t l_660 = 0xBAL;
        int64_t l_665 = 8L;
        int16_t *l_674 = (void*)0;
        int16_t *l_675 = &l_589[3].f3;
        int16_t *l_676 = &g_261.f3;
        int16_t *l_677 = &g_304.f2;
        int32_t ****l_679 = (void*)0;
        int32_t *****l_678[7][5] = {{&l_679,&l_679,&l_679,(void*)0,&l_679},{&l_679,&l_679,(void*)0,&l_679,&l_679},{&l_679,&l_679,(void*)0,(void*)0,(void*)0},{&l_679,&l_679,&l_679,(void*)0,&l_679},{&l_679,&l_679,(void*)0,&l_679,&l_679},{&l_679,&l_679,(void*)0,(void*)0,(void*)0},{&l_679,&l_679,&l_679,(void*)0,&l_679}};
        uint16_t *l_680[6] = {&g_117,&g_117,&g_117,&g_117,&g_117,&g_117};
        uint32_t *l_681 = &l_636;
        uint64_t l_706 = 0xB6F05C924A605273LL;
        union U1 **l_708[1][4];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_467[i] = 0x7B69FDC1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_518[i][j][k] = 0L;
            }
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_708[i][j] = &g_260;
        }
        (*g_191) = l_453;
        for (g_5 = 0; (g_5 == 14); g_5 = safe_add_func_uint64_t_u_u(g_5, 2))
        { 
            int32_t **l_456[4][6] = {{&l_452,&l_46,&l_46,&l_46,&l_46,&l_46},{(void*)0,(void*)0,&l_452,&l_46,&l_46,&l_46},{&l_452,&l_452,&l_46,&l_46,&l_46,&l_452},{&l_46,&l_452,&l_46,(void*)0,(void*)0,&l_46}};
            union U1 **l_459 = &g_260;
            int32_t l_470 = (-8L);
            uint8_t ***l_478[4] = {&g_422,&g_422,&g_422,&g_422};
            int16_t *l_503 = &g_48.f3;
            uint32_t *l_509 = &g_304.f1;
            int8_t l_531 = 0xC9L;
            int32_t l_554 = (-10L);
            const struct S0 ***l_569 = &g_373;
            union U2 l_583 = {0x92F0L};
            uint8_t l_611[2];
            int32_t ** const *** const l_632 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
                l_611[i] = 255UL;
            g_457 = ((*g_191) = (*g_191));
            (*l_459) = g_458;
            l_471++;
            if (p_40)
                continue;
            if ((p_39.f2 = (!(((!p_40) , ((*l_496) = ((safe_sub_func_int16_t_s_s(0x38EFL, (((((l_479 = &g_423) == ((safe_div_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((((*g_14) ^= ((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((((0x8006L < p_41) ^ 0x18L) != ((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((p_41 <= g_284.f0), (**g_210))), p_39.f2)) && 4294967287UL)), (-10L))) && p_39.f1) <= g_358), 0x35E695EDL)) & p_39.f1)) <= l_494), l_495[5])) ^ p_40) & 0L), 0x4254FF86L)) , p_39.f2), 0xBDL)) , &g_423)) > g_218.f2) , l_496) != &g_215))) | 0x684DC878FACCACDCLL))) && p_39.f1))))
            { 
                int16_t l_517 = 1L;
                int16_t l_530 = 0x2012L;
                int32_t l_532[4] = {(-1L),(-1L),(-1L),(-1L)};
                struct S0 ** const *l_568 = (void*)0;
                union U2 l_580 = {-1L};
                struct S0 *l_582 = (void*)0;
                struct S0 **l_581 = &l_582;
                const struct S0 ****l_588 = (void*)0;
                int64_t *l_604 = (void*)0;
                int64_t *l_605 = &l_542;
                uint32_t l_606 = 1UL;
                union U3 l_651 = {0x50L};
                int32_t ***l_652[7][6][2] = {{{(void*)0,&g_191},{&g_191,&g_191},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,&g_191},{(void*)0,&g_191}},{{&g_191,&g_191},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,&g_191}},{{&g_191,&g_191},{(void*)0,&g_191},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,&g_191},{&g_191,&g_191}},{{(void*)0,&g_191},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,&g_191},{&g_191,&g_191},{(void*)0,&g_191}},{{(void*)0,&g_191},{&g_191,(void*)0},{&g_191,&g_191},{&g_191,(void*)0},{&g_191,&g_191},{(void*)0,&g_191}},{{&g_191,(void*)0},{&g_191,&g_191},{&g_191,(void*)0},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,(void*)0}},{{&g_191,&g_191},{&g_191,(void*)0},{&g_191,&g_191},{(void*)0,&g_191},{&g_191,(void*)0},{&g_191,&g_191}}};
                int i, j, k;
                for (p_40 = 0; (p_40 >= 0); p_40 -= 1)
                { 
                    int32_t l_516 = 0x380C46BBL;
                    int i;
                    g_17[p_40] ^= (safe_mod_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((0x805EB39CBF23005CLL || (safe_mul_func_int8_t_s_s((l_503 == (g_504 = &g_2[4])), ((safe_mul_func_uint16_t_u_u(((**g_210) = (l_467[p_40] > (((((safe_unary_minus_func_int16_t_s(((&g_255 != l_509) >= ((safe_div_func_uint32_t_u_u(((*l_449) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(p_39.f0, 1)), g_261.f0))), l_467[p_40])) & (*l_452))))) == 0x3DA5C225L) < l_467[p_40]) < l_516) , g_73))), p_41)) > (*g_423))))) & (*l_452)) > 0x04AEL), 0x48L)) >= 3L) || g_359), 1L));
                    l_518[0][2][2] = l_517;
                }
                if ((((1UL | p_41) <= ((l_532[1] = (((safe_mul_func_uint8_t_u_u(((**l_479) = ((((((((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_unary_minus_func_int64_t_s((((*l_496)--) && (p_39.f2 >= (65530UL > (safe_div_func_int64_t_s_s(((**g_422) || (l_530 < 6UL)), 0x0A312520063B204CLL))))))), 0x6F964277D6217F93LL)), 0xB9L)) , (void*)0) != &g_255) | p_39.f1) & l_531) <= (*g_504)) <= p_41) | g_232)), p_40)) | 0xA4CE7ECFL) & p_39.f2)) == l_517)) <= g_73))
                { 
                    int32_t ****l_536 = (void*)0;
                    int32_t *****l_535 = &l_536;
                    int32_t l_552 = 0L;
                    int32_t l_555 = 1L;
                    (*l_535) = g_533;
                    p_39.f2 = (safe_lshift_func_int8_t_s_u((g_232 < (l_495[1] >= ((l_539 , p_39.f0) && ((void*)0 != &g_423)))), ((safe_sub_func_int16_t_s_s((((p_39 , &g_260) == (void*)0) == p_39.f0), (*g_504))) > 5L)));
                    l_542 = p_39.f0;
                    l_555 |= (((p_41 <= 0x03A0447DC45C7E5ALL) <= (g_332 || (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((l_549 , (((safe_add_func_int64_t_s_s(p_39.f1, (0xDD07L & ((((*g_423) = (l_552 |= (p_39 , (*g_423)))) , 1UL) > p_39.f1)))) != 0UL) == (*g_14))), 1UL)) & 0x50B703F0L) | 4L), 0x7EA3C22BL)), g_553[0][2])))) & l_554);
                    p_39.f2 |= (*l_452);
                }
                else
                { 
                    uint8_t l_556[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
                    uint32_t *l_560 = &g_73;
                    const struct S0 ****l_570 = &l_569;
                    int32_t l_579 = 0xFB2869BFL;
                    int i;
                    l_556[2] &= p_39.f1;
                    l_467[2] ^= (((((**g_422) , &g_533) == (void*)0) , l_557) != l_479);
                    p_39.f2 = (safe_div_func_int64_t_s_s(((*g_422) == ((++(*l_560)) , l_563)), (safe_mod_func_int16_t_s_s((((l_568 = g_566[0][1][2]) != ((*l_570) = l_569)) > (((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((safe_add_func_int8_t_s_s((l_579 ^= (*g_14)), ((l_580 , ((0x4BL ^ (*g_423)) <= (*g_504))) , (*g_14)))) >= 0x83L), (-1L))), 1)) > 0x2077L) != p_39.f1) & 0x52L) , l_532[1]), 6)) < p_39.f1) == g_304.f3)), (*g_504)))));
                }
                (*l_581) = &p_39;
                if (((l_583 , (safe_sub_func_uint32_t_u_u(((l_588 = g_586) == (l_589[3] , ((safe_sub_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((**l_479) = (((safe_mul_func_int16_t_s_s((l_539 , (p_39.f0 || (safe_rshift_func_int16_t_s_s(((*g_458) , (safe_add_func_int32_t_s_s(((((*l_605) = (safe_mul_func_int8_t_s_s((&l_539 != (void*)0), p_39.f1))) && (-5L)) ^ l_606), 0x372C19ACL))), 4)))), (*g_211))) >= p_39.f0) >= g_358)), g_17[0])), 1UL)), (*l_452))) , &g_587))), (-1L)))) > (*l_452)))
                { 
                    int32_t l_607 = 1L;
                    int32_t l_608 = 0x24234F19L;
                    int32_t l_609 = 0xD9224112L;
                    int32_t l_610[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_610[i] = 0x7A591F04L;
                    --l_611[1];
                    (***g_533) = &l_532[1];
                }
                else
                { 
                    union U3 l_614 = {0x52L};
                    uint32_t **l_620 = &l_450;
                    uint32_t ***l_621 = &l_620;
                    uint32_t **l_623 = &l_509;
                    uint32_t ***l_622 = &l_623;
                    int32_t l_624 = (-1L);
                    int32_t l_625 = 8L;
                    int32_t l_626[6] = {2L,0x91053611L,0x91053611L,2L,0x91053611L,0x91053611L};
                    int i;
                    p_39.f2 = ((l_614 , (((8L > (safe_mul_func_uint8_t_u_u(l_532[1], (p_40 ^ ((*g_260) , 0xD4A7C5A1L))))) ^ p_39.f2) || 1UL)) <= p_39.f2);
                    l_617--;
                    (*l_622) = ((*l_621) = l_620);
                    if ((*l_452))
                        break;
                    g_627++;
                }
                if ((l_532[1] ^= (l_630[0] != l_632)))
                { 
                    int64_t l_633 = 0x040F8BC58BA291CELL;
                    union U2 *l_641[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    const uint8_t l_644 = 0x2AL;
                    int8_t *l_645 = &g_304.f0;
                    int i, j;
                    l_633 = (-9L);
                    l_468[0] = (l_462 &= (((safe_mul_func_int16_t_s_s((((l_636 && ((*g_211) = (safe_rshift_func_int8_t_s_s(2L, (((g_143[1] | ((safe_add_func_int8_t_s_s((l_641[4][1] != (void*)0), (safe_sub_func_uint8_t_u_u((((&g_284 == (((l_606 , g_3) < p_40) , l_641[4][1])) | (-3L)) , 0UL), 0xD0L)))) , l_633)) | 0x1915L) >= 0x73F9F30DL))))) , l_644) <= p_40), p_39.f2)) ^ p_40) | 0L));
                    return l_645;
                }
                else
                { 
                    union U1 **l_646[5] = {&g_260,&g_260,&g_260,&g_260,&g_260};
                    union U1 **l_647 = (void*)0;
                    int32_t l_653 = 0xBE607874L;
                    int8_t *l_655 = &g_15;
                    int i;
                    p_39.f2 = (p_39.f2 > (((l_646[1] != (l_647 = l_646[1])) != (((*l_452) && (safe_sub_func_uint32_t_u_u((l_650 == (l_651 , l_652[6][5][1])), p_39.f1))) ^ l_653)) | g_261.f3));
                    l_654[4][0][1] = p_41;
                    return l_655;
                }
            }
            else
            { 
                return l_656;
            }
        }
lbl_688:
        p_39.f2 = (safe_sub_func_uint32_t_u_u(((*l_681) = ((*l_450) = ((((l_659 == (l_660 , (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((g_117 |= (l_665 ^ ((**g_210) = ((*g_504) & (((safe_unary_minus_func_int16_t_s((g_284.f0 = ((*l_677) = ((*l_676) = ((*l_675) |= ((((!(((safe_div_func_uint32_t_u_u(((g_284 , (((((((**g_422) , (**g_210)) ^ 0UL) , 65535UL) < (*g_504)) ^ p_39.f0) , &g_587)) == l_670), g_73)) == 0x56L) == 0x0D66L)) != (**g_422)) != p_39.f0) > p_41))))))) , l_678[2][4]) == &l_631))))) , (*g_504)), p_40)) != (*g_423)), p_39.f0)))) & p_41) , p_39.f1) < p_40))), p_41));
        for (g_73 = 0; (g_73 > 26); g_73++)
        { 
            int32_t l_733 = (-8L);
            for (g_359 = 0; (g_359 != 23); ++g_359)
            { 
                for (l_43 = (-1); (l_43 > 59); l_43++)
                { 
                    int16_t *l_697 = &g_2[0];
                    const int32_t l_705[5] = {0x95026E1BL,0x95026E1BL,0x95026E1BL,0x95026E1BL,0x95026E1BL};
                    int i;
                    if (g_5)
                        goto lbl_688;
                    (*l_452) = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((g_117 = ((!(((*l_676) = p_39.f1) != (((void*)0 != l_697) <= p_39.f1))) & (safe_mul_func_uint16_t_u_u(((**g_210) = p_39.f0), (*g_504))))), ((((((!(((safe_lshift_func_int16_t_s_s(((*l_675) = (safe_lshift_func_int16_t_s_s(((p_40 <= p_39.f2) == 0x05ECEF850B0D7B61LL), p_39.f0))), 5)) & (*g_504)) || (*g_504))) || l_705[2]) , 0xE67BEFBFL) , &g_451) != (void*)0) , l_706))) || 0xCAF479F9A70A8088LL), 0x3BL)), 0x48L))));
                }
                p_39.f2 = (g_284 , (((**g_422) = (((((+((g_709[1] = l_708[0][1]) == &g_458)) > ((0x743CD3CB295DA0C4LL < (safe_mul_func_int8_t_s_s((18446744073709551615UL || (safe_div_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(0x69F856DCL, (*l_452))) && p_39.f1), p_39.f0))), 0x6FL))) && p_39.f0)) , 0x8A25103045B23A8FLL) | g_358) < p_39.f0)) | (-1L)));
                for (l_617 = (-28); (l_617 == 24); l_617 = safe_add_func_int16_t_s_s(l_617, 9))
                { 
                    union U1 **l_725 = (void*)0;
                    const union U1 ***l_728[1][6];
                    uint8_t *l_734 = &l_471;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_728[i][j] = &g_726;
                    }
                    (*l_452) &= p_40;
                    (*l_452) = 9L;
                    (*l_452) = (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((*l_734) ^= (((*l_681) ^= ((p_39.f0 | p_41) ^ ((**g_422) = (safe_div_func_uint16_t_u_u((!(p_39.f1 != ((*l_496) = (((l_725 == (g_726 = g_726)) & (*g_211)) && (safe_div_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((p_41 < p_39.f1) == (*g_14)), p_39.f0)) || 1L), p_39.f0)))))), l_733))))) > p_41)), p_41)), l_733)) > p_39.f0) ^ g_3);
                }
            }
        }
    }
    else
    { 
        uint32_t l_735 = 0x69D00A26L;
        int32_t *l_748 = &g_136;
        int64_t *l_765 = &g_358;
        int64_t **l_764 = &l_765;
        int32_t l_766 = (-1L);
        uint64_t l_767 = 18446744073709551615UL;
        int32_t l_791 = 1L;
        l_735 &= 0x2711BA8DL;
        p_39.f2 = ((*g_457) = (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((*g_504), (~((((p_39.f1 >= ((safe_mul_func_int16_t_s_s(((**g_422) >= ((l_743 >= (((safe_lshift_func_uint8_t_u_s(p_39.f1, p_40)) || g_304.f3) < 0UL)) && (*g_211))), p_41)) >= l_735)) , g_746) == &g_747) ^ p_39.f1)))), (-1L))));
lbl_774:
        (*g_191) = l_748;
        (*l_452) ^= (p_40 & (+(safe_rshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(((**g_210) ^= 0xDA8EL), (*g_504))) && (safe_rshift_func_uint16_t_u_s((*g_211), (p_39.f0 != ((l_767 = ((safe_mul_func_uint8_t_u_u((((*g_747) = (((*l_764) = ((safe_sub_func_uint32_t_u_u(4294967292UL, (safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((((*l_748) == 0x16L) >= (*g_504)) | g_3) && (*g_504)), 5L)), (*g_504))))) , &l_542)) == &l_542)) ^ l_766), 0x30L)) & p_39.f1)) , p_41))))), (*g_504)))));
        for (g_15 = 20; (g_15 < 5); --g_15)
        { 
            int32_t *l_779 = (void*)0;
            uint64_t l_792 = 0x8E31BCD39A1B2BF9LL;
            for (p_40 = (-5); (p_40 <= (-25)); p_40 = safe_sub_func_uint64_t_u_u(p_40, 7))
            { 
                for (g_451 = 7; (g_451 != 27); g_451 = safe_add_func_int64_t_s_s(g_451, 5))
                { 
                    (*g_191) = (void*)0;
                }
                if (g_48.f3)
                    goto lbl_774;
                return &g_232;
            }
            for (g_75 = 8; (g_75 < 21); g_75++)
            { 
                uint16_t l_780 = 4UL;
                int32_t l_793 = 0xE4B51BFAL;
                for (g_136 = 20; (g_136 <= 25); g_136 = safe_add_func_uint32_t_u_u(g_136, 7))
                { 
                    l_779 = l_779;
                    if (p_39.f1)
                        continue;
                    if (p_40)
                        continue;
                    return &g_15;
                }
                (**g_191) = 0x83BE466BL;
                if (l_780)
                    continue;
                l_793 &= ((((-3L) > (((65535UL != (safe_sub_func_int32_t_s_s(((**g_191) = (p_39.f2 = (((**g_210)++) , (p_41 == ((safe_lshift_func_uint8_t_u_u(p_41, 7)) > (**g_191)))))), ((((((*l_452) ^= p_40) < (((((((safe_mul_func_int8_t_s_s(((((l_791 = ((*l_496) = p_40)) , p_39.f0) <= (-2L)) > 0L), 0x69L)) & l_792) , l_780) || p_39.f0) || p_39.f1) | p_39.f0) < 0xA232B040E7A1E656LL)) <= 18446744073709551611UL) & 0x905BL) || 0x097E58B2L)))) , 0x7AL) | 255UL)) || (*g_211)) , p_41);
            }
        }
    }
    return l_794;
}



static int64_t  func_44(int32_t * p_45)
{ 
    int16_t l_49 = 0x41CEL;
    union U1 l_54 = {1UL};
    int32_t l_84 = (-2L);
    union U2 l_98 = {0x9954L};
    uint16_t *l_99 = &g_51;
    const int8_t * const l_103 = (void*)0;
    int32_t l_145 = 0L;
    int32_t l_147 = 0x603A3F67L;
    int32_t l_197[7][5] = {{0xFDD1E5F5L,0L,0L,0L,0L},{1L,0x9D7F6DF0L,0x647E8494L,(-1L),(-1L)},{(-1L),0x39FD564FL,(-1L),0L,(-9L)},{0x4D3F9AC4L,8L,(-1L),8L,0x4D3F9AC4L},{(-1L),0xFDD1E5F5L,0x39FD564FL,0L,0x39FD564FL},{1L,1L,(-1L),0x4D3F9AC4L,0xF32749C2L},{0xFDD1E5F5L,(-1L),(-1L),0xFDD1E5F5L,0x39FD564FL}};
    int16_t l_198 = 0x8B90L;
    struct S0 l_226 = {20224,1,0};
    int i, j;
    if ((safe_unary_minus_func_uint32_t_u((g_48 , 4294967289UL))))
    { 
        uint16_t *l_50 = &g_51;
        int8_t *l_55 = &g_15;
        int32_t l_56 = 0x1F56A6D9L;
        int32_t l_71 = 0xFF98E47BL;
        int32_t l_72 = 0x211ABD84L;
        int32_t *l_74[3];
        union U3 l_76 = {0xB2L};
        uint32_t l_77 = 0x11F73439L;
        uint16_t **l_100 = &l_50;
        int64_t l_101 = 7L;
        int16_t l_102 = 0xCD71L;
        int i;
        for (i = 0; i < 3; i++)
            l_74[i] = &g_75;
        g_75 ^= ((g_73 = (((*l_50) = l_49) , ((safe_div_func_uint32_t_u_u(((((l_54 , l_55) != &g_15) && l_56) , (safe_sub_func_uint16_t_u_u((!((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_72 ^= (safe_mod_func_uint16_t_u_u((((*l_50) = (((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((+((void*)0 != &g_3)) , l_56), l_71)), g_48.f3)) && g_5) >= 18446744073709551615UL)) , g_2[4]), g_15))), g_17[0])), g_48.f3)) || 0xE235BD639B6AF4A9LL)), g_17[0]))), l_56)) != g_17[0]))) ^ l_56);
        g_75 ^= ((((l_76 , l_77) || ((g_48 , (0xF156DE04L | ((((g_2[3] | (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((0L > g_51), g_2[2])), g_3)) == 0xF566449D4C0F6006LL), l_54.f0))) & l_84) , (void*)0) == &g_15))) || 7UL)) , g_17[0]) <= l_49);
        l_102 = (safe_div_func_uint16_t_u_u((((!((safe_div_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((&l_84 == p_45), (((l_101 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_98 , (((*l_100) = l_99) == &g_51)) || (((g_48 , (*l_100)) == (void*)0) <= l_49)), 0UL)), l_54.f0))) || g_75) , l_49))), l_98.f0)) == g_5), g_17[0])) && 0x56L)) > 18446744073709551608UL) != g_17[0]), g_48.f3));
    }
    else
    { 
        int32_t *l_104 = &g_75;
        int32_t *l_105 = &g_17[0];
        uint16_t *l_116 = &g_117;
        const int16_t l_118 = 0x5EE0L;
        int32_t l_142 = 0x6A9ED742L;
        int32_t l_144 = (-8L);
        int32_t l_146[6][5] = {{0xA17625E3L,0x9A732090L,(-10L),(-10L),0x9A732090L},{0x9A732090L,0x1753070AL,0xA17625E3L,0x9A732090L,(-10L)},{0x162D90DDL,0x9A732090L,(-1L),0x9A732090L,0x162D90DDL},{0xA17625E3L,5L,0x1753070AL,(-10L),5L},{0x162D90DDL,0x1753070AL,0x1753070AL,0x162D90DDL,(-10L)},{0x9A732090L,0x162D90DDL,(-1L),5L,5L}};
        int32_t l_148 = 0x0AAE426BL;
        int32_t *l_194 = &l_147;
        int32_t *l_195 = &g_143[4];
        int32_t *l_196[1][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_196[i][j] = &l_146[0][4];
        }
        (*l_105) &= ((*l_104) = (l_84 &= (l_103 == (void*)0)));
lbl_155:
        if ((safe_sub_func_uint64_t_u_u(0xA93D2D6DA1B12C12LL, ((g_3 && (safe_rshift_func_uint16_t_u_u(g_51, 1))) != (l_84 | (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((g_2[3] <= (g_48.f0 <= (safe_lshift_func_uint16_t_u_u(((*l_116) = 0xDB05L), (*l_105))))), l_118)), 5UL)))))))
        { 
            uint32_t l_134 = 4294967287UL;
            int32_t *l_135 = &g_136;
            (*l_135) &= (safe_add_func_int16_t_s_s((g_48.f3 & (((g_51 > (*l_104)) , g_5) || ((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_98.f0, ((+(safe_add_func_uint64_t_u_u(((g_75 , (safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(l_84, l_134)), l_49))) < (*l_105)), 0xB8C3E15B557241B9LL))) == (*l_104)))), l_134)) < l_49))), 0x44FFL));
        }
        else
        { 
            int32_t l_139 = 1L;
            int32_t l_149 = (-1L);
            int32_t *l_154 = &g_143[3];
            (*l_105) |= g_3;
            for (g_73 = (-1); (g_73 <= 44); g_73++)
            { 
                int32_t *l_140 = &g_75;
                int32_t *l_141[3][5][3] = {{{&l_139,&l_84,&l_139},{(void*)0,&l_139,(void*)0},{&l_139,&l_84,&l_139},{(void*)0,&l_139,(void*)0},{&l_139,&l_84,&l_139}},{{(void*)0,&l_139,(void*)0},{&l_139,&l_84,&l_139},{(void*)0,&l_139,(void*)0},{&l_139,&l_84,&l_139},{(void*)0,&l_139,(void*)0}},{{&l_139,&l_84,&l_139},{(void*)0,&l_139,(void*)0},{&l_139,&l_84,&l_139},{(void*)0,&l_139,(void*)0},{&l_139,&l_84,&l_139}}};
                uint16_t l_150 = 1UL;
                int32_t **l_153[5][4][5] = {{{&l_104,&l_141[2][1][1],&l_104,&l_105,&l_141[2][1][1]},{&l_141[2][1][1],&l_104,&l_105,(void*)0,&l_105},{&l_141[0][3][0],&l_141[0][3][0],&l_141[0][0][0],&l_141[2][1][1],&l_105},{&l_141[2][1][1],&l_140,&l_105,&l_105,&l_105}},{{&l_105,&l_141[0][0][0],&l_105,&l_105,(void*)0},{&l_105,&l_140,&l_141[2][1][1],&l_140,&l_105},{&l_105,&l_104,&l_141[0][0][0],(void*)0,&l_104},{&l_105,&l_104,(void*)0,&l_104,&l_105}},{{&l_105,&l_141[2][1][1],&l_141[0][3][0],&l_104,&l_104},{&l_141[2][1][1],&l_104,&l_141[2][1][1],&l_105,&l_105},{&l_104,&l_141[0][0][0],(void*)0,&l_104,(void*)0},{&l_141[2][2][2],(void*)0,&l_141[2][1][1],&l_104,&l_105}},{{&l_105,&l_105,(void*)0,(void*)0,&l_105},{&l_105,&l_104,&l_141[2][1][1],&l_140,&l_105},{&l_141[2][1][1],&l_105,&l_141[0][3][0],&l_105,&l_141[2][1][1]},{&l_141[2][1][1],(void*)0,(void*)0,&l_105,&l_141[2][2][2]}},{{&l_141[2][1][1],&l_141[0][0][0],&l_141[0][0][0],&l_141[2][1][1],(void*)0},{&l_105,&l_104,&l_141[2][1][1],(void*)0,&l_141[2][2][2]},{&l_105,&l_141[2][1][1],&l_105,(void*)0,&l_141[2][1][1]},{&l_141[2][2][2],&l_104,&l_105,(void*)0,&l_105}}};
                int i, j, k;
                l_150--;
                l_154 = p_45;
                l_154 = p_45;
            }
            g_75 ^= ((void*)0 != p_45);
        }
        for (g_5 = 0; (g_5 <= 4); g_5 += 1)
        { 
            int16_t l_156[3][2] = {{(-4L),(-4L)},{(-4L),(-4L)},{(-4L),(-4L)}};
            int32_t l_159 = 0L;
            int32_t l_161 = 0x293169C2L;
            uint16_t *l_184 = &g_117;
            union U1 l_190 = {0x23A5L};
            int i, j;
            if (l_49)
                goto lbl_155;
            if (l_156[1][1])
                continue;
        }
        if (g_15)
            goto lbl_193;
lbl_193:
        (*g_191) = (*g_191);
        ++g_199;
    }
    if ((safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((((*g_191) = (*g_191)) != p_45), (safe_sub_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u(((g_210 != (l_84 , &l_99)) > 0xA0L), ((l_99 == (*g_210)) >= g_48.f3))) , &l_99) != (void*)0) != 0xCAA67D54L), 0x43L)))) & l_49), l_198)))
    { 
        uint64_t *l_214 = &g_215;
        const int32_t l_225[1] = {0x0D24C40AL};
        int32_t l_240 = 0xE815A875L;
        int32_t l_241 = (-1L);
        int32_t l_242 = 0x85CAF21FL;
        int8_t l_249 = 0L;
        uint32_t l_281 = 4294967292UL;
        int32_t **l_287 = (void*)0;
        union U1 l_297 = {9UL};
        int i;
        (**g_191) = (safe_div_func_uint64_t_u_u(((*l_214) = (0x8FL ^ 0x28L)), (l_49 , ((safe_rshift_func_int8_t_s_u((((g_218 , (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s((l_225[0] && ((l_226 , l_54) , l_225[0])), l_225[0])) , (*g_14)) != 4L) || (**g_210)), 0)), l_225[0]))) && l_54.f3) , 1L), g_5)) | l_225[0]))));
        if ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_197[2][0], 14)), ((255UL ^ 0x6FL) && g_2[1]))))
        { 
            int32_t *l_231[5] = {&l_84,&l_84,&l_84,&l_84,&l_84};
            uint32_t l_233 = 0xCBD07F21L;
            int8_t *l_236[3];
            int i;
            for (i = 0; i < 3; i++)
                l_236[i] = &g_15;
            --l_233;
            (*g_192) = (l_236[1] != l_236[0]);
            if ((*g_192))
            { 
                int32_t l_237 = 0x29538176L;
                int32_t l_238 = 4L;
                int32_t l_239 = 0xFC442DDCL;
                uint64_t l_243 = 1UL;
                uint32_t *l_250 = (void*)0;
                uint32_t *l_251 = &l_233;
                uint32_t *l_254 = &g_255;
                l_243++;
                for (l_243 = 0; (l_243 == 30); l_243++)
                { 
                    const union U2 l_248 = {-4L};
                    (**g_191) &= (0xADE7L != (l_248 , l_249));
                    return l_145;
                }
                (**g_191) = (((*l_251)++) <= (++(*l_254)));
            }
            else
            { 
                int32_t *l_258 = &l_147;
                union U1 *l_259 = (void*)0;
                int32_t l_280 = 0x831BCBC3L;
                const uint64_t l_292 = 0xB6A064B616523478LL;
                (**g_191) |= l_197[6][3];
                (*g_191) = l_258;
                g_260 = l_259;
                for (g_117 = 22; (g_117 == 24); g_117 = safe_add_func_int8_t_s_s(g_117, 9))
                { 
                    int32_t **l_264 = &l_231[1];
                    union U3 l_269 = {-7L};
                    uint64_t *l_279 = &g_215;
                    union U2 *l_285 = &g_284;
                    int32_t ***l_286 = &g_191;
                    uint32_t *l_300 = &l_269.f1;
                    uint32_t *l_301[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_301[i][j] = &l_281;
                    }
                    if ((*g_192))
                        break;
                    (*l_264) = ((*g_191) = (*g_191));
                }
            }
            return g_2[0];
        }
        else
        { 
            int32_t l_302[6] = {0x98A7DEDDL,0x98A7DEDDL,0x98A7DEDDL,0x98A7DEDDL,0x98A7DEDDL,0x98A7DEDDL};
            int i;
            return l_302[4];
        }
    }
    else
    { 
        union U3 **l_305 = (void*)0;
        union U3 **l_306 = &g_303;
        struct S0 *l_308 = &l_226;
        struct S0 **l_307 = &l_308;
        int32_t l_329 = 0x2D434661L;
        uint32_t l_330 = 18446744073709551613UL;
        const int32_t *l_335 = &l_329;
        const int32_t **l_334 = &l_335;
        const int32_t ***l_333 = &l_334;
        int32_t l_355 = 0L;
        int32_t l_356[1][6][5] = {{{(-1L),(-1L),0L,0L,(-1L)},{0x0CEF4032L,0x7A985E60L,0x0CEF4032L,0x7A985E60L,0x0CEF4032L},{(-1L),0L,0L,(-1L),(-1L)},{0xC5710775L,0x7A985E60L,0xC5710775L,0x7A985E60L,0xC5710775L},{(-1L),(-1L),0L,0L,(-1L)},{0x0CEF4032L,0x7A985E60L,0x0CEF4032L,0x7A985E60L,0x0CEF4032L}}};
        int32_t l_357 = 0L;
        union U3 ** const l_399 = &g_303;
        int32_t l_434[4][5] = {{1L,1L,(-9L),1L,1L},{0L,1L,0L,0L,1L},{1L,0L,0L,1L,0L},{1L,1L,(-9L),1L,1L}};
        int i, j, k;
        (*g_191) = (*g_191);
        (*l_306) = g_303;
        (*l_307) = &l_226;
        for (g_199 = (-19); (g_199 == 56); g_199++)
        { 
            uint64_t l_321 = 0x70DDD1128F465AA6LL;
            uint16_t **l_326 = &l_99;
            int16_t *l_331 = &l_198;
            int32_t l_344 = 0x56A60A03L;
            int32_t l_350[2];
            int32_t l_354 = 1L;
            uint32_t l_360 = 0x7B42C44EL;
            union U3 *l_425 = &g_304;
            union U1 *l_437 = (void*)0;
            union U1 **l_438 = &l_437;
            int i;
            for (i = 0; i < 2; i++)
                l_350[i] = (-1L);
        }
    }
    return l_226.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_261.f0, "g_261.f0", print_hash_value);
    transparent_crc(g_261.f3, "g_261.f3", print_hash_value);
    transparent_crc(g_284.f0, "g_284.f0", print_hash_value);
    transparent_crc(g_304.f0, "g_304.f0", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_553[i][j], "g_553[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_883.f0, "g_883.f0", print_hash_value);
    transparent_crc(g_883.f1, "g_883.f1", print_hash_value);
    transparent_crc(g_883.f2, "g_883.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_894[i], "g_894[i]", print_hash_value);

    }
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_947, "g_947", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1164[i][j], "g_1164[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1242[i][j][k], "g_1242[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1267, "g_1267", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1335[i], "g_1335[i]", print_hash_value);

    }
    transparent_crc(g_1340.f0, "g_1340.f0", print_hash_value);
    transparent_crc(g_1340.f1, "g_1340.f1", print_hash_value);
    transparent_crc(g_1340.f2, "g_1340.f2", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1368, "g_1368", print_hash_value);
    transparent_crc(g_1399.f0, "g_1399.f0", print_hash_value);
    transparent_crc(g_1412, "g_1412", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1439[i], "g_1439[i]", print_hash_value);

    }
    transparent_crc(g_1491, "g_1491", print_hash_value);
    transparent_crc(g_1643, "g_1643", print_hash_value);
    transparent_crc(g_1650, "g_1650", print_hash_value);
    transparent_crc(g_1667.f0, "g_1667.f0", print_hash_value);
    transparent_crc(g_1667.f3, "g_1667.f3", print_hash_value);
    transparent_crc(g_1708.f0, "g_1708.f0", print_hash_value);
    transparent_crc(g_1758, "g_1758", print_hash_value);
    transparent_crc(g_1772, "g_1772", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    transparent_crc(g_1915, "g_1915", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1916[i], "g_1916[i]", print_hash_value);

    }
    transparent_crc(g_1933, "g_1933", print_hash_value);
    transparent_crc(g_1970, "g_1970", print_hash_value);
    transparent_crc(g_2092, "g_2092", print_hash_value);
    transparent_crc(g_2187.f0, "g_2187.f0", print_hash_value);
    transparent_crc(g_2187.f3, "g_2187.f3", print_hash_value);
    transparent_crc(g_2261.f0, "g_2261.f0", print_hash_value);
    transparent_crc(g_2261.f1, "g_2261.f1", print_hash_value);
    transparent_crc(g_2261.f2, "g_2261.f2", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
