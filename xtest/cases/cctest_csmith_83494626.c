// SPDX-License-Identifier: MIT
// cctest_csmith_83494626.c --- cctest case csmith_83494626 (csmith seed 2202617382)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc4e879a4 */

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

// Options:   -s 2202617382 -o /tmp/csmith_gen_1twqg8rk/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int16_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int16_t  f3;
};

union U1 {
   int32_t  f0;
   int8_t * f1;
   uint64_t  f2;
   struct S0  f3;
   int16_t  f4;
};


static int32_t g_3 = 1L;
static int32_t *g_2 = &g_3;
static union U1 g_15 = {1L};
static int8_t g_21[4][4][2] = {{{1L,0x0FL},{0x57L,1L},{0x74L,0x74L},{0x74L,2L}},{{0x57L,(-1L)},{2L,0x0FL},{0xF5L,2L},{0x74L,0x74L}},{{0x74L,2L},{0xF5L,0x0FL},{2L,(-1L)},{0x57L,2L}},{{0x74L,0x74L},{0x74L,1L},{0x57L,0x0FL},{1L,0x0FL}}};
static int32_t g_27 = 7L;
static int64_t g_62 = 0x6D35DF961DFA2398LL;
static struct S0 g_67[1][4] = {{{-1L,4L,0x06C165AAL,1L},{-1L,4L,0x06C165AAL,1L},{-1L,4L,0x06C165AAL,1L},{-1L,4L,0x06C165AAL,1L}}};
static int8_t * const *g_72 = (void*)0;
static uint64_t g_75 = 2UL;
static uint8_t g_87[2] = {0x19L,0x19L};
static uint32_t g_94 = 0xEE4ADB81L;
static int32_t **g_98 = &g_2;
static int32_t ***g_97 = &g_98;
static uint8_t g_112[2][4][7] = {{{3UL,4UL,4UL,3UL,4UL,4UL,3UL},{0UL,0UL,1UL,1UL,0UL,1UL,1UL},{4UL,4UL,3UL,4UL,4UL,3UL,4UL},{0UL,1UL,1UL,0UL,1UL,1UL,0UL}},{{0UL,4UL,0UL,0UL,4UL,0UL,0UL},{0UL,0UL,251UL,0UL,0UL,251UL,0UL},{4UL,0UL,0UL,4UL,0UL,0UL,4UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL}}};
static int64_t g_124 = 0x22C56DE09DF947B4LL;
static uint32_t g_144 = 6UL;
static uint16_t g_154 = 1UL;
static uint32_t g_160 = 1UL;
static uint8_t g_174 = 0xFEL;
static int8_t g_182[3] = {(-7L),(-7L),(-7L)};
static int32_t g_209 = 0xB272FC51L;
static int8_t g_210 = 0xC8L;
static int32_t g_213 = 0x8D3E8134L;
static int32_t g_214 = 0x142A211DL;
static int16_t g_215[2] = {0xFF3DL,0xFF3DL};
static uint32_t g_216 = 4294967295UL;
static const int32_t *g_235 = &g_27;
static const int32_t **g_234 = &g_235;
static const union U1 *g_241 = &g_15;
static int32_t g_277 = 9L;
static int32_t g_281 = 0xC8AD918AL;
static int64_t g_282 = 0xB3D443CF4879BB8ALL;
static int32_t g_283[5][1][5] = {{{1L,1L,(-1L),1L,(-1L)}},{{1L,1L,(-1L),1L,(-1L)}},{{1L,1L,(-1L),1L,(-1L)}},{{1L,1L,(-1L),1L,(-1L)}},{{1L,1L,(-1L),1L,(-1L)}}};



static union U1  func_1(void);
static uint32_t  func_9(uint8_t  p_10, union U1  p_11, const int32_t * p_12, int32_t ** p_13, int64_t  p_14);
static int32_t ** func_16(int8_t * p_17, int8_t  p_18, uint32_t  p_19);
static int16_t  func_32(int8_t * p_33, const union U1  p_34, int8_t * p_35, int8_t * p_36, int32_t  p_37);
static int8_t * func_38(uint32_t  p_39);
static const int32_t ** func_40(struct S0  p_41, int32_t * p_42);
static struct S0  func_43(int32_t * const  p_44, int32_t  p_45, const uint8_t  p_46, int32_t ** p_47, uint64_t  p_48);
static int32_t * func_49(int32_t * p_50, int32_t ** p_51, uint32_t  p_52, const uint32_t  p_53);




static union U1  func_1(void)
{ 
    int32_t **l_4 = &g_2;
    int64_t l_5[4];
    uint64_t l_8 = 1UL;
    int8_t *l_20 = &g_21[2][3][1];
    uint64_t l_279 = 2UL;
    int32_t *l_280[1];
    int64_t l_284 = 1L;
    int16_t l_285 = 2L;
    uint8_t l_286[4] = {1UL,1UL,1UL,1UL};
    union U1 l_289 = {1L};
    int i;
    for (i = 0; i < 4; i++)
        l_5[i] = 0xCC14173BF38C0887LL;
    for (i = 0; i < 1; i++)
        l_280[i] = &g_281;
    (*l_4) = g_2;
    for (g_3 = 0; (g_3 <= 3); g_3 += 1)
    { 
        g_2 = (*l_4);
    }
    for (g_3 = 3; (g_3 <= (-18)); g_3 = safe_sub_func_int32_t_s_s(g_3, 3))
    { 
        if (l_8)
            break;
    }
    g_281 ^= (((**l_4) == 1UL) == ((**l_4) & ((func_9(g_3, g_15, (*l_4), func_16(l_20, (**l_4), g_3), g_215[0]) & g_215[0]) ^ l_279)));
    ++l_286[2];
    return l_289;
}



static uint32_t  func_9(uint8_t  p_10, union U1  p_11, const int32_t * p_12, int32_t ** p_13, int64_t  p_14)
{ 
    uint8_t l_278 = 0xE7L;
    for (p_14 = 0; p_14 < 2; p_14 += 1)
    {
        for (g_214 = 0; g_214 < 4; g_214 += 1)
        {
            for (g_209 = 0; g_209 < 7; g_209 += 1)
            {
                g_112[p_14][g_214][g_209] = 254UL;
            }
        }
    }
    return l_278;
}



static int32_t ** func_16(int8_t * p_17, int8_t  p_18, uint32_t  p_19)
{ 
    uint32_t l_25 = 0x8AF16DE6L;
    int32_t *l_26 = &g_27;
    uint32_t *l_54 = &l_25;
    const int32_t **l_236[2][4][3] = {{{&g_235,&g_235,&g_235},{&g_235,(void*)0,&g_235},{&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235}},{{&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235},{&g_235,&g_235,&g_235}}};
    uint32_t *l_237 = &g_94;
    uint32_t *l_238 = &g_144;
    const union U1 l_272[6] = {{0L},{0L},{0L},{0L},{0L},{0L}};
    int8_t *l_273 = (void*)0;
    uint32_t l_275 = 0x4ACED059L;
    int32_t *l_276 = &g_277;
    int i, j, k;
    for (p_19 = 0; (p_19 > 55); ++p_19)
    { 
        uint64_t l_24 = 0UL;
        if (l_24)
            break;
    }
    (*l_26) |= l_25;
    (*l_276) ^= (safe_sub_func_int16_t_s_s(((*l_26) = ((((((safe_div_func_int16_t_s_s(func_32(func_38(((*l_238) = ((*l_237) = ((l_236[1][1][2] = func_40((((void*)0 == &g_3) , func_43(func_49(&g_27, &l_26, ((*l_54) = 0x77771FDAL), (!((((((((safe_lshift_func_int16_t_s_u(g_27, ((safe_mod_func_int32_t_s_s(0x57DE97EEL, p_18)) || (*l_26)))) || p_18) , l_54) == (void*)0) != (*g_2)) , g_15.f0) , p_19) >= (*l_26)))), g_15.f0, g_15.f0, &l_26, g_21[2][1][0])), l_26)) == (void*)0)))), l_272[1], l_273, &g_182[0], (***g_97)), g_209)) <= (*p_17)) , g_124) < l_275) == g_21[2][3][1]) && (*l_26))), g_209));
    return (*g_97);
}



static int16_t  func_32(int8_t * p_33, const union U1  p_34, int8_t * p_35, int8_t * p_36, int32_t  p_37)
{ 
    int32_t *l_274 = &g_27;
    (*l_274) &= p_34.f4;
    return g_15.f4;
}



static int8_t * func_38(uint32_t  p_39)
{ 
    int32_t *l_242 = &g_27;
    const uint32_t l_243 = 0x9B12F1D4L;
    struct S0 * const l_254 = &g_67[0][0];
    struct S0 * const *l_253 = &l_254;
    int8_t *l_271 = (void*)0;
    for (g_210 = 16; (g_210 != 16); g_210 = safe_add_func_uint64_t_u_u(g_210, 7))
    { 
        uint64_t l_250 = 18446744073709551609UL;
        int32_t l_251 = 0xF94D6FDCL;
        int32_t *l_252 = &g_27;
        uint64_t *l_255 = &l_250;
        uint16_t *l_258 = &g_154;
        l_252 = func_49(((&g_15 != g_241) , l_242), (*g_97), ((l_243 < (safe_add_func_int64_t_s_s(((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((l_250 |= (*l_242)) && (0xAA098A50L ^ p_39)) , g_216), p_39)), l_251)) || 0x2C02139C095ABA82LL), (*l_242)))) | g_160), (*l_242));
        (**l_253) = func_43(&l_251, (((void*)0 != l_253) < (1UL != (((((*l_255) = p_39) == (((safe_add_func_int8_t_s_s(((*l_242) <= (&g_154 == l_258)), (*l_242))) ^ p_39) <= (*l_242))) < p_39) || g_3))), (*l_242), (*g_97), p_39);
        for (g_75 = (-1); (g_75 >= 13); ++g_75)
        { 
            int16_t l_261[3];
            int32_t l_262 = 5L;
            int i;
            for (i = 0; i < 3; i++)
                l_261[i] = 0L;
            l_261[1] ^= (*l_242);
            for (l_251 = 0; (l_251 <= 0); l_251 += 1)
            { 
                int32_t l_266 = (-1L);
                uint32_t l_268 = 0x20FE3B47L;
                (*g_234) = &l_251;
                for (g_27 = 0; (g_27 >= 0); g_27 -= 1)
                { 
                    int32_t *l_263 = &l_262;
                    int32_t *l_264 = &l_262;
                    int32_t *l_265 = &l_262;
                    int32_t *l_267 = &l_262;
                    --l_268;
                }
            }
        }
    }
    return l_271;
}



static const int32_t ** func_40(struct S0  p_41, int32_t * p_42)
{ 
    uint32_t *l_159 = &g_160;
    int8_t **l_164 = (void*)0;
    union U1 *l_166 = &g_15;
    union U1 **l_165 = &l_166;
    int32_t l_167 = 0x43784C60L;
    int32_t l_172[5];
    int32_t **l_231 = &g_2;
    const int32_t *l_233 = &l_167;
    const int32_t **l_232 = &l_233;
    int i;
    for (i = 0; i < 5; i++)
        l_172[i] = 0L;
    (*p_42) &= (safe_add_func_int16_t_s_s(g_21[2][0][1], (((++(*l_159)) > (((safe_unary_minus_func_uint32_t_u(g_144)) , l_164) == ((((void*)0 == l_165) , ((((0xE9AEL <= (p_41.f1 , 65535UL)) < 4UL) , (-1L)) > l_167)) , l_164))) <= 18446744073709551615UL)));
    for (g_144 = 0; (g_144 <= 1); g_144 += 1)
    { 
        int32_t l_168[1];
        int32_t *l_169 = (void*)0;
        int32_t *l_170 = (void*)0;
        int32_t *l_171[5][2] = {{&l_167,&l_167},{&l_167,&l_167},{&l_167,&l_167},{&l_167,&l_167},{&l_167,&l_167}};
        int64_t l_173 = 0xFF4735756157937CLL;
        union U1 *l_180 = &g_15;
        int32_t *l_181[6];
        uint16_t l_204 = 0UL;
        int8_t *l_224 = &g_182[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_168[i] = 1L;
        for (i = 0; i < 6; i++)
            l_181[i] = &l_168[0];
        g_174--;
    }
    return g_234;
}



static struct S0  func_43(int32_t * const  p_44, int32_t  p_45, const uint8_t  p_46, int32_t ** p_47, uint64_t  p_48)
{ 
    int32_t *l_63 = (void*)0;
    uint16_t l_64 = 0xBC07L;
    union U1 l_76 = {-1L};
    struct S0 * const l_100[5] = {&g_67[0][0],&g_67[0][0],&g_67[0][0],&g_67[0][0],&g_67[0][0]};
    int8_t l_127[5][4] = {{0x13L,(-8L),0x13L,(-8L)},{0x13L,(-8L),0x13L,(-8L)},{0x13L,(-8L),0x13L,(-8L)},{0x13L,(-8L),0x13L,(-8L)},{0x13L,(-8L),0x13L,(-8L)}};
    int32_t ****l_129 = &g_97;
    const union U1 *l_130 = &l_76;
    int32_t l_152 = 0x7E3BC08CL;
    int i, j;
    l_64++;
    for (g_62 = 1; (g_62 >= 0); g_62 -= 1)
    { 
        return g_67[0][0];
    }
    for (g_62 = 0; (g_62 == 12); ++g_62)
    { 
        int8_t * const l_71 = &g_21[2][3][1];
        int8_t * const * const l_70[4][4] = {{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71},{&l_71,&l_71,&l_71,&l_71}};
        uint64_t *l_73 = (void*)0;
        uint64_t *l_74[6];
        int32_t l_84[7];
        int32_t l_88 = 1L;
        int16_t l_93 = 0xD0F0L;
        struct S0 l_106 = {1L,0x0D895055L,18446744073709551614UL,-1L};
        struct S0 *l_121 = &g_67[0][1];
        struct S0 **l_120 = &l_121;
        uint16_t l_135[2][6][1] = {{{65526UL},{65527UL},{65526UL},{65527UL},{65526UL},{65527UL}},{{65526UL},{65527UL},{65526UL},{65527UL},{65526UL},{65527UL}}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_74[i] = &g_75;
        for (i = 0; i < 7; i++)
            l_84[i] = 5L;
    }
    return g_67[0][0];
}



static int32_t * func_49(int32_t * p_50, int32_t ** p_51, uint32_t  p_52, const uint32_t  p_53)
{ 
    int64_t *l_60 = (void*)0;
    int64_t *l_61 = &g_62;
    (*p_50) = (p_52 > (((*l_61) = p_53) , 0L));
    return &g_27;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f4, "g_15.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_67[i][j].f0, "g_67[i][j].f0", print_hash_value);
            transparent_crc(g_67[i][j].f1, "g_67[i][j].f1", print_hash_value);
            transparent_crc(g_67[i][j].f2, "g_67[i][j].f2", print_hash_value);
            transparent_crc(g_67[i][j].f3, "g_67[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_112[i][j][k], "g_112[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_182[i], "g_182[i]", print_hash_value);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_215[i], "g_215[i]", print_hash_value);

    }
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_283[i][j][k], "g_283[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
