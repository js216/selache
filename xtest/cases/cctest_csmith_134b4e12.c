// SPDX-License-Identifier: MIT
// cctest_csmith_134b4e12.c --- cctest case csmith_134b4e12 (csmith seed 323702290)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfbfc31b5 */

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

// Options:   -s 323702290 -o /tmp/csmith_gen_j9f7xbnh/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   const uint32_t  f1;
};

union U1 {
   uint64_t  f0;
};

union U2 {
   const uint16_t  f0;
   uint16_t  f1;
   int16_t  f2;
};


static uint8_t g_27 = 0UL;
static union U2 g_37[4][4] = {{{0x7218L},{0x305AL},{0x7218L},{0x7218L}},{{0x305AL},{0x305AL},{0x8436L},{0x305AL}},{{0x305AL},{0x7218L},{0x7218L},{0x305AL}},{{0x7218L},{0x305AL},{0x7218L},{0x7218L}}};
static uint8_t g_47[5] = {249UL,249UL,249UL,249UL,249UL};
static uint8_t g_52 = 0xEDL;
static uint16_t g_57[2][3] = {{0x9564L,0xD727L,0x9564L},{0x9564L,0xD727L,0x9564L}};
static uint32_t g_83 = 0UL;
static uint32_t g_88 = 18446744073709551608UL;
static int16_t g_102 = (-9L);
static uint32_t g_106 = 0UL;
static uint32_t g_122 = 0UL;
static int32_t g_124 = (-7L);
static int64_t g_129[5] = {0x5C8CE6C9421085DALL,0x5C8CE6C9421085DALL,0x5C8CE6C9421085DALL,0x5C8CE6C9421085DALL,0x5C8CE6C9421085DALL};
static int8_t g_133[4][2] = {{0x42L,4L},{0x42L,0x42L},{4L,0x42L},{0x42L,4L}};
static uint64_t g_147 = 0xFF3A2FA3D26D738FLL;
static uint8_t g_157 = 0x52L;
static uint8_t g_169 = 248UL;
static int8_t g_206 = 1L;
static uint64_t g_221 = 18446744073709551615UL;
static uint64_t g_233 = 0x4978895D7F4E7944LL;
static int32_t g_258 = 0xE5E2D9EDL;
static uint32_t g_311 = 0UL;
static uint64_t g_316 = 18446744073709551615UL;
static uint16_t g_325 = 0UL;
static uint8_t g_328[3] = {0x38L,0x38L,0x38L};
static uint64_t g_342 = 0UL;
static uint8_t g_351 = 0x1EL;
static uint32_t g_353 = 18446744073709551613UL;



static union U2  func_1(void);
static int32_t  func_3(int32_t  p_4);
static const uint32_t  func_9(union U2  p_10, union U2  p_11, uint64_t  p_12, int32_t  p_13, int32_t  p_14);
static union U2  func_15(uint16_t  p_16, int32_t  p_17, int8_t  p_18, int32_t  p_19);




static union U2  func_1(void)
{ 
    const int64_t l_2 = 0x772304B25B3B9DA4LL;
    int64_t l_34 = 0xBB2C593C86992F1ELL;
    int32_t l_35 = 0L;
    uint16_t l_36 = 0x1F06L;
    union U1 l_79 = {1UL};
    uint64_t l_91 = 18446744073709551611UL;
    int32_t l_105 = 0xAD406D4EL;
    uint8_t l_307 = 0x4EL;
    uint32_t l_308 = 0x24A96F26L;
    if (l_2)
    { 
        uint32_t l_20 = 4294967288UL;
        union U2 l_45[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
        int i;
        if (func_3((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_2 , (func_9(func_15(l_20, (((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(g_27, 4)) > (safe_add_func_int8_t_s_s((l_35 = (safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_34, g_27)) > 0x4BL), g_27))), l_20))) == l_34), 0)) > g_27), g_27)) , 0x6695L) && g_27), l_36, g_27), l_45[4], l_2, l_2, g_37[2][3].f1) <= 6L)), l_20)), 12))))
        { 
            uint64_t l_121 = 18446744073709551615UL;
            uint8_t l_123 = 0UL;
            if (g_57[1][1])
            { 
                int64_t l_82[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_82[i] = 0x1CE175E042358CEDLL;
                l_35 = ((((l_79 , (0L & g_37[2][3].f2)) != (safe_rshift_func_int8_t_s_u(g_52, 1))) , 0x88F4020D70F0D5DCLL) == l_82[3]);
                ++g_83;
            }
            else
            { 
                g_88 = (safe_rshift_func_uint16_t_u_u((0x7B57L | 0L), 10));
            }
            if ((safe_mul_func_uint16_t_u_u(l_91, (safe_mul_func_int16_t_s_s(g_37[2][3].f1, (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_37[2][3].f0, 0UL)), g_37[2][3].f1)), (-7L))) , g_27), 6)))))))
            { 
                int64_t l_103 = 0x16154EA94EDB4A25LL;
                int32_t l_104 = 0L;
                g_102 = 0xAB994F54L;
                g_106++;
            }
            else
            { 
                return g_37[2][3];
            }
            if (((safe_rshift_func_uint16_t_u_u((g_37[2][3].f1 = (safe_rshift_func_uint8_t_u_s(g_47[0], 6))), 7)) != 0x2DDDEE64L))
            { 
                l_123 = (g_122 ^= (safe_div_func_uint64_t_u_u((((g_52 >= (((safe_rshift_func_int16_t_s_s((g_102 = (safe_mul_func_uint16_t_u_u(g_37[2][3].f0, 0x977DL))), 14)) && (safe_add_func_int16_t_s_s(g_106, l_121))) || g_47[0])) || g_37[2][3].f0) > 0x2DL), g_37[2][3].f1)));
                g_124 = 1L;
            }
            else
            { 
                return g_37[2][0];
            }
        }
        else
        { 
            int8_t l_127 = 0xE2L;
            for (l_36 = 2; (l_36 >= 18); l_36 = safe_add_func_uint32_t_u_u(l_36, 1))
            { 
                if (l_34)
                    break;
                if (l_127)
                    break;
                g_129[3] = ((safe_unary_minus_func_uint32_t_u(l_79.f0)) || l_127);
            }
        }
        return g_37[1][2];
    }
    else
    { 
        int32_t l_132 = 9L;
        uint32_t l_136 = 5UL;
        uint32_t l_168 = 0UL;
        uint16_t l_170 = 65529UL;
        int32_t l_190[5];
        int32_t l_231 = (-2L);
        int32_t l_232 = (-9L);
        int i;
        for (i = 0; i < 5; i++)
            l_190[i] = 0x2652A429L;
        g_133[0][1] = (g_27 != ((0L | 3UL) <= (safe_div_func_int64_t_s_s(l_132, 9UL))));
        g_147 &= (safe_mul_func_uint8_t_u_u((g_47[0] | ((l_136 | (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_35 = g_83), (safe_div_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_124, 11)), g_133[0][1])) <= g_129[2]) < g_37[2][3].f1), 0x930E3A44L)))), l_132))) >= g_37[2][3].f2)), g_83));
        if ((((g_147 = (safe_lshift_func_uint16_t_u_s((g_129[3] < ((safe_mod_func_int8_t_s_s(7L, ((l_35 ^= ((((safe_add_func_int8_t_s_s(g_47[0], (g_27 = l_136))) >= l_132) >= l_91) != 3UL)) , (-1L)))) < g_57[1][2])), g_133[3][0]))) != 1UL) <= 0x678E9A5FL))
        { 
            uint64_t l_156[2];
            int32_t l_158[1];
            int i;
            for (i = 0; i < 2; i++)
                l_156[i] = 18446744073709551615UL;
            for (i = 0; i < 1; i++)
                l_158[i] = (-10L);
            l_158[0] = ((safe_mod_func_int64_t_s_s(0xA3F393C2DF5847FBLL, (l_156[1] , ((g_52 , (g_157 ^= (((g_133[0][0] , g_106) <= l_34) > g_47[0]))) ^ l_2)))) ^ l_34);
            for (l_132 = 0; (l_132 != (-1)); l_132--)
            { 
                int32_t l_163 = 8L;
                g_169 = ((safe_rshift_func_uint16_t_u_s(l_163, l_163)) & ((safe_lshift_func_uint8_t_u_s(((g_57[1][2] | ((g_88 , g_133[0][1]) > l_168)) && l_163), l_163)) > 0L));
            }
            l_170++;
        }
        else
        { 
            const int8_t l_187 = 0xA2L;
            uint32_t l_188 = 0xC19A244BL;
            uint16_t l_189[5];
            union U2 l_201 = {0xACE6L};
            int32_t l_219[5][5] = {{0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL},{0x2A9E99FBL,0x2A9E99FBL,0x2A9E99FBL,0x2A9E99FBL,0x2A9E99FBL},{0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL},{0x2A9E99FBL,0x2A9E99FBL,0x2A9E99FBL,0x2A9E99FBL,0x2A9E99FBL},{0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL,0x6AD5B22CL}};
            int32_t l_220 = 0x07EEBA36L;
            int i, j;
            for (i = 0; i < 5; i++)
                l_189[i] = 4UL;
            l_190[1] |= (g_47[0] >= (safe_mul_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(((l_91 >= ((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((((safe_lshift_func_uint16_t_u_u(4UL, ((safe_rshift_func_int16_t_s_s((g_47[2] || l_187), g_27)) && 4294967295UL))) && l_136) <= 0UL) , l_188), l_168)), l_189[2])), g_129[3])) || 4UL)) && g_133[0][0]), l_34)) || l_188) ^ 0x47L) | l_132), 0xAECAL)));
            for (g_88 = 2; (g_88 > 36); g_88 = safe_add_func_int64_t_s_s(g_88, 1))
            { 
                int64_t l_216 = 0xD7AAF5FA4EC0DFECLL;
                g_206 = (((l_188 ^ ((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_201 , ((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(65535UL, 5)) > (0L >= 0x33L)) && g_106) > 0x2F53L), g_37[2][3].f2)) ^ g_129[3])), l_168)), 7)) || g_57[0][1]) == l_91) != l_201.f1), g_106)) == 7L)) || l_2) | 65526UL);
                g_221 = (+((g_122 = ((g_83 == (g_169 = (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((g_102 = ((l_220 = (safe_mod_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((l_216 , (safe_rshift_func_uint8_t_u_s(g_47[1], l_216))), l_219[3][0])) , g_27), g_37[2][3].f2))) > g_88)), l_190[3])), 2UL)))) >= g_37[2][3].f0)) && g_27));
                g_233 = (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((!(l_91 & (l_190[2] = ((((safe_sub_func_int8_t_s_s(l_91, ((safe_add_func_uint32_t_u_u((g_47[0] & (0xC2L || l_79.f0)), g_37[2][3].f0)) >= l_231))) ^ l_232) > l_216) <= g_106)))), g_157)), g_52));
            }
        }
    }
    for (g_52 = 23; (g_52 == 53); ++g_52)
    { 
        const int64_t l_236 = (-8L);
        int32_t l_285 = 1L;
        int32_t l_302 = (-10L);
        int16_t l_326[3][3] = {{8L,8L,8L},{0xF84DL,0xF84DL,0xF84DL},{8L,8L,8L}};
        int i, j;
        g_258 |= (l_236 ^ (safe_rshift_func_uint8_t_u_s((((safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((l_79.f0 , g_52))) ^ ((((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x57L, l_236)), l_236)), g_57[0][1])) ^ 2UL) , l_36) == 0x311D30B9L) != 7UL), g_129[3])), (-6L))), 0x908BL)) < (-9L)), (-1L))), 7)) & g_37[2][3].f2) != l_236) >= g_37[2][3].f1)), 0xF7L)) && l_236) != g_147), 2)));
        l_285 = ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((g_133[0][1] = (safe_mod_func_int64_t_s_s(((safe_div_func_int64_t_s_s(((+(safe_add_func_uint16_t_u_u((g_47[0] || ((((safe_add_func_int16_t_s_s(((((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_37[2][3].f2 |= (((l_105 = (~(safe_mul_func_uint16_t_u_u(l_236, (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_102, l_236)), l_236)))))) >= 0L) >= (-1L))), 11)), 1)), g_47[0])) && 0xC056L) == l_236) <= 0x6AL), (-5L))) || g_37[2][3].f0) , l_236) || l_79.f0)), g_124))) , l_79.f0), 0xA5EF5FE06BF84ECCLL)) , l_79.f0), g_52))), g_122)), 9)) >= 4L);
        if ((safe_lshift_func_uint16_t_u_s((l_105 = ((g_47[0] = ((safe_lshift_func_int8_t_s_s((((((((((safe_add_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((((l_35 = l_236) >= (safe_rshift_func_uint8_t_u_s((0xE663L ^ ((safe_div_func_int16_t_s_s(((safe_add_func_uint64_t_u_u(((l_307 = (safe_mul_func_uint16_t_u_u((((((l_302 && (safe_div_func_uint32_t_u_u((++g_83), 0x69E2DF59L))) , g_37[2][3].f0) != 4294967295UL) <= g_37[2][3].f0) ^ g_57[1][0]), 1L))) && 0xCEF92868L), 0x46F7589B656CCA36LL)) >= g_122), 0xEA07L)) ^ 0L)), 0))) || g_37[2][3].f0) == l_285), l_105)), 0xE3L)) < l_308) ^ l_236) & l_91) , g_83) , 1L) && g_157) | 18446744073709551607UL) && 1L), 0)) && g_233)) | g_157)), l_308)))
        { 
            int8_t l_324[5][3] = {{1L,1L,0xB8L},{(-7L),(-7L),(-1L)},{1L,1L,0xB8L},{(-7L),(-7L),(-1L)},{1L,1L,0xB8L}};
            int i, j;
            for (l_35 = 0; (l_35 >= (-10)); l_35 = safe_sub_func_int8_t_s_s(l_35, 1))
            { 
                uint32_t l_312 = 0x867E643AL;
                g_311 = (-1L);
                l_312 |= ((0xB2BD5D16L <= (g_206 ^ 0xCB0C8A60L)) != 0x5DD4L);
            }
            for (l_307 = 0; (l_307 <= 27); l_307 = safe_add_func_int32_t_s_s(l_307, 8))
            { 
                uint32_t l_315 = 1UL;
                int32_t l_327 = 0L;
                g_316 = l_315;
                l_285 = (safe_lshift_func_int8_t_s_s(0xB4L, ((l_327 = (((g_57[1][2] >= ((~(((safe_div_func_uint64_t_u_u(0xADAC5A14F6FAD5A6LL, (safe_rshift_func_uint16_t_u_u((l_36 , g_122), l_324[3][1])))) < 0x0FDD9300L) || g_122)) > 1UL)) , g_325) < l_326[1][0])) ^ 6L)));
            }
        }
        else
        { 
            int64_t l_341[3][1][5] = {{{1L,0xB6A7BBCEECF209D3LL,1L,0xB6A7BBCEECF209D3LL,1L}},{{(-7L),(-7L),(-7L),(-7L),(-7L)}},{{1L,0xB6A7BBCEECF209D3LL,1L,0xB6A7BBCEECF209D3LL,1L}}};
            uint64_t l_352 = 1UL;
            int i, j, k;
            g_328[2] = ((((g_124 || g_221) , (((g_88 & l_326[1][0]) && l_285) == 0xA13051B3F8993EC0LL)) , 0x18L) | 1UL);
            g_342 = (((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((g_52 , ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(g_133[0][1], 8)) < (safe_mod_func_int32_t_s_s((((((safe_add_func_int16_t_s_s(l_79.f0, (l_79.f0 != 0x3D3E3130C64E29DALL))) ^ g_57[1][2]) > 0x8523BB9FAC3A7E16LL) && g_37[2][3].f1) , l_302), 0xA16ACC42L))), g_311)) > 0xA2L)) != 251UL) < 0xEDDAC26045AEA8CCLL), l_341[0][0][0])) || l_236), l_341[0][0][0])) & g_106) ^ 8UL);
            g_353 |= (l_352 |= (l_105 = (((safe_lshift_func_int16_t_s_s(l_341[1][0][0], ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((g_258 = (0L != (0UL | ((func_15((safe_add_func_int32_t_s_s((g_351 = g_37[2][3].f0), l_341[1][0][4])), g_47[0], g_133[1][0], g_342) , l_341[1][0][4]) , (-6L))))) , l_236), 4)), (-10L))) >= g_325))) <= 5UL) < 0x20A4L)));
        }
    }
    for (g_157 = (-2); (g_157 <= 22); g_157 = safe_add_func_int8_t_s_s(g_157, 1))
    { 
        uint8_t l_356[5][3] = {{0xD3L,0xD3L,255UL},{0x8FL,0x8FL,0x6FL},{0xD3L,0xD3L,255UL},{0x8FL,0x8FL,0x6FL},{0xD3L,0xD3L,255UL}};
        int i, j;
        l_356[0][1] = 0x2242C101L;
    }
    return g_37[2][3];
}



static int32_t  func_3(int32_t  p_4)
{ 
    int64_t l_67 = (-7L);
    int32_t l_73[2][1];
    int32_t l_74 = 0x6ABB25A5L;
    int32_t l_75 = (-1L);
    uint8_t l_76 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_73[i][j] = 0x973F91A6L;
    }
    l_75 = (l_74 |= (safe_add_func_int32_t_s_s((g_57[1][0] ^ ((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(0UL, (l_73[0][0] &= (safe_unary_minus_func_int64_t_s(((safe_unary_minus_func_uint32_t_u(l_67)) != (!(safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(1UL, 0x546B77D8L)), 0xC39FBD05L))))))))) >= g_52), l_67)) >= 0x0AL)), 0xE384C7D0L)));
    --l_76;
    return l_73[0][0];
}



static const uint32_t  func_9(union U2  p_10, union U2  p_11, uint64_t  p_12, int32_t  p_13, int32_t  p_14)
{ 
    struct S0 l_46 = {0xB5BDDDD5D57D38C4LL,4294967295UL};
    int32_t l_58[5][3] = {{1L,6L,6L},{6L,0xA13735CAL,0L},{1L,0xA13735CAL,1L},{0x08DDD7ADL,6L,0L},{0x08DDD7ADL,0x08DDD7ADL,6L}};
    int i, j;
    g_47[0] = (l_46 , (p_11.f2 , g_27));
    p_13 ^= (-3L);
    l_58[2][1] = (l_46.f0 , (safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s((g_52 = 8L), (safe_mod_func_int32_t_s_s((g_57[1][2] = (0xB395B915L > ((((--p_12) , (l_46.f1 >= 1UL)) != 0x33DF47B5L) != p_14))), p_11.f2)))), g_47[0])));
    return g_52;
}



static union U2  func_15(uint16_t  p_16, int32_t  p_17, int8_t  p_18, int32_t  p_19)
{ 
    uint16_t l_40 = 0x4707L;
    uint64_t l_41 = 18446744073709551615UL;
    int32_t l_42 = (-8L);
    int32_t l_43 = 0x43DEE6EEL;
    union U2 l_44 = {0x4846L};
    l_43 &= ((((g_27 ^ (g_37[2][3] , (safe_rshift_func_uint8_t_u_u(((l_40 |= p_17) || (l_42 = (((((l_41 == g_27) < 0UL) || g_27) != 0L) & g_37[2][3].f1))), 7)))) >= p_19) , p_16) > 0x59L);
    return l_44;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_37[i][j].f0, "g_37[i][j].f0", print_hash_value);
            transparent_crc(g_37[i][j].f1, "g_37[i][j].f1", print_hash_value);
            transparent_crc(g_37[i][j].f2, "g_37[i][j].f2", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_57[i][j], "g_57[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_328[i], "g_328[i]", print_hash_value);

    }
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
