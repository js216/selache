// SPDX-License-Identifier: MIT
// cctest_csmith_1e0f172b.c --- cctest case csmith_1e0f172b (csmith seed 504305451)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf5b8fab2 */

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

// Options:   -s 504305451 -o /tmp/csmith_gen_go_co3il/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
   uint8_t  f1;
   uint64_t  f2;
};

struct S2 {
   uint32_t  f0;
   uint16_t  f1;
};

struct S3 {
   struct S2  f0;
};

union U4 {
   const uint32_t  f0;
};


static const int32_t g_9 = 1L;
static struct S2 g_17 = {0x88D96753L,65528UL};
static struct S3 g_21 = {{0x9FACD4A7L,65526UL}};
static int8_t g_24[2] = {0xB3L,0xB3L};
static uint32_t g_29 = 0UL;
static uint32_t g_35[5][3] = {{0xBA7C3387L,0x8909FF4CL,0x8909FF4CL},{0xBA7C3387L,0x8909FF4CL,0x8909FF4CL},{0xBA7C3387L,0x8909FF4CL,0x8909FF4CL},{0xBA7C3387L,0x8909FF4CL,0x8909FF4CL},{0xBA7C3387L,0x8909FF4CL,0x8909FF4CL}};
static struct S0 g_37 = {0xD2L,0x26L,1UL};
static int64_t g_45 = (-1L);
static int16_t g_60 = 0L;
static union U4 g_70 = {1UL};
static int8_t g_73 = 0xECL;
static uint32_t g_84 = 18446744073709551608UL;
static int64_t g_91 = (-1L);
static int16_t g_93[2][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
static int16_t g_94 = 0L;
static int64_t g_96[2][5][3] = {{{(-5L),0x908204A9F0E05C4BLL,(-5L)},{0x02D43064C2CD367FLL,(-1L),0x02D43064C2CD367FLL},{(-5L),0x908204A9F0E05C4BLL,(-5L)},{0x02D43064C2CD367FLL,(-1L),0x02D43064C2CD367FLL},{(-5L),0x908204A9F0E05C4BLL,(-5L)}},{{0x02D43064C2CD367FLL,(-1L),0x02D43064C2CD367FLL},{(-5L),7L,(-10L)},{(-4L),0x02D43064C2CD367FLL,(-4L)},{(-10L),7L,(-10L)},{(-4L),0x02D43064C2CD367FLL,(-4L)}}};
static int8_t g_97 = (-9L);
static uint64_t g_128 = 18446744073709551615UL;
static uint32_t g_130 = 1UL;
static uint8_t g_135 = 0x6BL;



static uint32_t  func_1(void);
static int64_t  func_2(uint64_t  p_3, const uint32_t  p_4);
static uint64_t  func_5(const uint32_t  p_6, int8_t  p_7, int8_t  p_8);
static int8_t  func_11(uint64_t  p_12, struct S2  p_13, struct S0  p_14);




static uint32_t  func_1(void)
{ 
    int8_t l_10 = 0xECL;
    struct S0 l_18 = {4L,6UL,0UL};
    int32_t l_43 = 0L;
    int32_t l_44 = 0x9846C248L;
    int32_t l_72[4] = {0xB2529581L,0xB2529581L,0xB2529581L,0xB2529581L};
    int i;
lbl_86:
    g_45 |= (l_44 = (l_43 = (func_2(func_5(g_9, l_10, func_11(((((safe_add_func_uint16_t_u_u(0UL, (-1L))) , g_9) < 0x0AD8EA5FL) , l_10), g_17, l_18)), g_24[0]) > g_24[0])));
    for (g_21.f0.f1 = 5; (g_21.f0.f1 < 16); g_21.f0.f1 = safe_add_func_uint8_t_u_u(g_21.f0.f1, 7))
    { 
        for (l_18.f0 = 15; (l_18.f0 > (-9)); l_18.f0 = safe_sub_func_uint32_t_u_u(l_18.f0, 5))
        { 
            struct S3 l_52 = {{0xAA6F69A7L,6UL}};
            for (l_44 = 0; (l_44 == 4); l_44++)
            { 
                l_43 = g_37.f2;
            }
            if (g_21.f0.f0)
                continue;
            l_52 = g_21;
        }
        if (g_21.f0.f1)
            continue;
    }
    if (l_18.f0)
    { 
        int32_t l_71 = 0x75C22552L;
        for (g_29 = (-14); (g_29 != 58); g_29 = safe_add_func_uint32_t_u_u(g_29, 2))
        { 
            g_21.f0 = g_21.f0;
        }
        for (g_37.f1 = 0; (g_37.f1 < 20); g_37.f1 = safe_add_func_int64_t_s_s(g_37.f1, 8))
        { 
            for (g_45 = 0; (g_45 <= (-21)); g_45--)
            { 
                int32_t l_59 = 1L;
                int32_t l_74 = 1L;
                union U4 l_75[2][2] = {{{9UL},{9UL}},{{9UL},{9UL}}};
                uint8_t l_83 = 0xCCL;
                int32_t l_85 = (-7L);
                int i, j;
                g_60 |= (l_59 || 0x5CL);
                l_74 = ((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(l_43)) > (safe_sub_func_uint64_t_u_u((((-7L) >= (l_72[0] = (safe_div_func_int16_t_s_s((g_70 , l_71), g_24[0])))) && l_59), g_73))), 0x7BL)) , g_37.f0), g_37.f2)) ^ 0x8C3F75B2L);
                l_85 = ((((((l_75[1][1] , ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((((safe_div_func_int64_t_s_s(g_70.f0, 0x92811E285A49BCD9LL)) || (+((l_83 >= g_84) < l_83))) | 4294967291UL), l_71)), l_71)) < g_17.f0)) , 0xB78F42CBA3753CE4LL) >= g_45) <= g_17.f1) ^ g_24[0]) && 0x1CD8L);
            }
            if (g_21.f0.f0)
                break;
        }
    }
    else
    { 
        uint16_t l_108[4];
        int32_t l_113 = (-7L);
        int i;
        for (i = 0; i < 4; i++)
            l_108[i] = 0UL;
        if (g_70.f0)
            goto lbl_86;
        for (l_43 = 18; (l_43 < 19); l_43++)
        { 
            uint32_t l_98 = 0xAE7F845CL;
            for (g_37.f2 = 0; (g_37.f2 > 30); ++g_37.f2)
            { 
                int64_t l_92[5][4] = {{0x82A0B0D0ED264C9DLL,0x102B4660DC513BADLL,0x102B4660DC513BADLL,0x82A0B0D0ED264C9DLL},{0x102B4660DC513BADLL,0x82A0B0D0ED264C9DLL,0x102B4660DC513BADLL,0x102B4660DC513BADLL},{0x82A0B0D0ED264C9DLL,0x82A0B0D0ED264C9DLL,(-8L),0x82A0B0D0ED264C9DLL},{0x82A0B0D0ED264C9DLL,0x102B4660DC513BADLL,0x102B4660DC513BADLL,0x82A0B0D0ED264C9DLL},{0x102B4660DC513BADLL,0x82A0B0D0ED264C9DLL,0x102B4660DC513BADLL,0x102B4660DC513BADLL}};
                int32_t l_95[3][3] = {{1L,0x06A0B719L,1L},{1L,1L,1L},{1L,0x06A0B719L,1L}};
                int i, j;
                if (g_21.f0.f1)
                    break;
                ++l_98;
                l_113 |= (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((+((((l_108[2] | (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_91 == g_24[0]), (0x7AL && l_95[0][1]))), g_60)) != (-1L)) , 4UL)) == 0x09EDL) != 0xD1L) || 1UL)), g_17.f0)), 0)), 7));
            }
            if ((((safe_add_func_int8_t_s_s((g_97 = (-5L)), (safe_sub_func_int32_t_s_s(g_93[0][3], ((safe_div_func_int32_t_s_s(g_60, l_98)) , l_98))))) , l_10) != 0x33D78BCCA947FBA1LL))
            { 
                const int32_t l_127 = 0x6941ECE2L;
                uint64_t l_129 = 0x2AB38CAC1D9AC4ABLL;
                g_128 |= ((safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(1L, (~(l_44 ^= 8L)))) == l_98), ((g_84 < 0x45L) > g_97))) | 0x10L) && l_127) == (-1L)), 1)) > g_93[0][3]);
                if (l_129)
                    break;
                g_130++;
            }
            else
            { 
                if (g_29)
                    break;
            }
        }
        for (g_37.f2 = 0; (g_37.f2 == 31); g_37.f2 = safe_add_func_int8_t_s_s(g_37.f2, 6))
        { 
            ++g_135;
        }
    }
    return g_96[1][1][0];
}



static int64_t  func_2(uint64_t  p_3, const uint32_t  p_4)
{ 
    uint16_t l_41 = 65530UL;
    int32_t l_42 = 0x6BB026EBL;
    l_42 = (p_4 != l_41);
    return g_37.f1;
}



static uint64_t  func_5(const uint32_t  p_6, int8_t  p_7, int8_t  p_8)
{ 
    int32_t l_27[1][3][3] = {{{0L,0L,0L},{1L,(-9L),1L},{0L,0L,0L}}};
    int32_t l_28 = (-5L);
    uint8_t l_32 = 0x9FL;
    struct S0 l_36 = {-1L,2UL,0xEA9177C83BE7680DLL};
    struct S2 l_38 = {0x08336182L,65529UL};
    struct S0 l_40 = {0x60L,0xB6L,0xE3176A90D2634D7FLL};
    int i, j, k;
    for (g_17.f1 = 10; (g_17.f1 >= 7); g_17.f1 = safe_sub_func_uint16_t_u_u(g_17.f1, 3))
    { 
        int32_t l_25 = (-1L);
        int32_t l_26[4];
        int i;
        for (i = 0; i < 4; i++)
            l_26[i] = 1L;
        ++g_29;
        l_32--;
        for (p_8 = 0; (p_8 >= 0); p_8 -= 1)
        { 
            struct S2 l_39[3] = {{0UL,0x4AC9L},{0UL,0x4AC9L},{0UL,0x4AC9L}};
            int i;
            if (((((0x9195C588L | 0x5C74600EL) || 1L) < (g_24[p_8] >= l_26[1])) , g_21.f0.f0))
            { 
                g_35[3][2] = g_21.f0.f0;
                if (p_8)
                    continue;
            }
            else
            { 
                if (p_8)
                    break;
            }
            if (g_9)
                break;
            for (g_17.f0 = 0; (g_17.f0 <= 1); g_17.f0 += 1)
            { 
                g_37 = l_36;
                l_39[2] = l_38;
            }
            for (l_38.f0 = 0; (l_38.f0 <= 1); l_38.f0 += 1)
            { 
                int i, j, k;
                return l_27[p_8][(l_38.f0 + 1)][(p_8 + 1)];
            }
        }
    }
    l_40 = g_37;
    return g_37.f0;
}



static int8_t  func_11(uint64_t  p_12, struct S2  p_13, struct S0  p_14)
{ 
    int16_t l_19[2];
    struct S3 l_20 = {{9UL,0x4CE3L}};
    int i;
    for (i = 0; i < 2; i++)
        l_19[i] = 0xCD3BL;
    l_19[0] = g_9;
    g_21 = l_20;
    return l_19[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_21.f0.f0, "g_21.f0.f0", print_hash_value);
    transparent_crc(g_21.f0.f1, "g_21.f0.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_24[i], "g_24[i]", print_hash_value);

    }
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_35[i][j], "g_35[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_93[i][j], "g_93[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
