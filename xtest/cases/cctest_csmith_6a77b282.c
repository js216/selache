// SPDX-License-Identifier: MIT
// cctest_csmith_6a77b282.c --- cctest case csmith_6a77b282 (csmith seed 1786229378)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9788749e */
/* @exp_ticks 0x41f8 */

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

// Options:   -s 1786229378 -o /tmp/csmith_gen_hpqh1d30/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
};

union U1 {
   int32_t  f0;
};

union U2 {
   struct S0  f0;
   uint8_t  f1;
};


static int32_t g_2 = (-1L);
static uint32_t g_20[4] = {0x05B8B78AL,0x05B8B78AL,0x05B8B78AL,0x05B8B78AL};
static int16_t g_21[1][4][5] = {{{0x6D21L,0x6D21L,0x8B15L,(-6L),0x8B15L},{0x6D21L,0x6D21L,0x8B15L,(-6L),0x8B15L},{0x6D21L,0x6D21L,0x8B15L,(-6L),0x8B15L},{0x6D21L,0x6D21L,0x8B15L,(-6L),0x8B15L}}};
static uint8_t g_22 = 2UL;
static int8_t g_25 = 0xDFL;
static uint16_t g_32 = 0x7017L;
static uint64_t g_46 = 0x270BB1DCEDE6A6B9LL;
static union U1 g_70[3][3][2] = {{{{0x0EE42AC9L},{0x0EE42AC9L}},{{0x0EE42AC9L},{0x0EE42AC9L}},{{0x0EE42AC9L},{0x0EE42AC9L}}},{{{0x0EE42AC9L},{0x0EE42AC9L}},{{0x0EE42AC9L},{0x0EE42AC9L}},{{0x0EE42AC9L},{0x0EE42AC9L}}},{{{0x0EE42AC9L},{0x0EE42AC9L}},{{0x0EE42AC9L},{0x0EE42AC9L}},{{0x0EE42AC9L},{0x0EE42AC9L}}}};
static uint32_t g_91 = 4294967292UL;
static int32_t g_107 = (-7L);
static uint64_t g_108 = 18446744073709551615UL;
static int8_t g_110 = 1L;
static uint16_t g_112 = 0x7F5DL;
static uint8_t g_154[2] = {0x5BL,0x5BL};
static int32_t g_169 = (-8L);
static struct S0 g_172 = {0xAA0BFB30L,1L};
static int64_t g_176 = 0x0F98853BCE19DED1LL;
static uint32_t g_177 = 0x538CC87CL;
static uint32_t g_194 = 8UL;
static int32_t g_197 = 6L;
static int32_t g_198 = (-1L);
static int32_t g_199 = 0x7E0CC145L;
static struct S0 g_214 = {0xE9FFE65BL,-1L};
static uint8_t g_264 = 0UL;
static int16_t g_267 = 0x6C21L;
static uint32_t g_322[4] = {2UL,2UL,2UL,2UL};



static int16_t  func_1(void);
static struct S0  func_6(union U1  p_7, int8_t  p_8, union U1  p_9, uint32_t  p_10);
static union U1  func_11(int16_t  p_12);
static uint16_t  func_17(int32_t  p_18);




static int16_t  func_1(void)
{ 
    uint32_t l_216 = 0xB03B6C18L;
    union U2 l_280[4] = {{{4294967287UL,-1L}},{{4294967287UL,-1L}},{{4294967287UL,-1L}},{{4294967287UL,-1L}}};
    int16_t l_292 = 3L;
    union U1 l_306[3] = {{8L},{8L},{8L}};
    uint32_t l_319 = 0UL;
    int32_t l_321 = 0xC8C10A26L;
    int i;
    for (g_2 = 0; (g_2 < (-1)); --g_2)
    { 
        int16_t l_19 = 0L;
        int32_t l_266[5][2][4] = {{{0xE041CE7FL,(-1L),0x218C28FCL,(-1L)},{0x07D733AEL,0x013EDE44L,1L,0x218C28FCL}},{{(-1L),0x013EDE44L,0x013EDE44L,(-1L)},{0x013EDE44L,(-1L),0x07D733AEL,0xE041CE7FL}},{{0x013EDE44L,0x07D733AEL,0x013EDE44L,1L},{(-1L),0xE041CE7FL,1L,1L}},{{0x07D733AEL,0x07D733AEL,0x218C28FCL,0xE041CE7FL},{0xE041CE7FL,(-1L),0x218C28FCL,(-1L)}},{{0x07D733AEL,0x013EDE44L,1L,0x218C28FCL},{(-1L),0x013EDE44L,0x013EDE44L,(-1L)}}};
        uint8_t l_268 = 0x1EL;
        uint8_t l_269 = 0UL;
        union U2 l_274 = {{7UL,0L}};
        int i, j, k;
        g_197 = (+(g_2 , (((func_6(func_11(((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(func_17((g_25 = (g_2 != ((g_22 = (g_21[0][1][0] = (g_20[3] = l_19))) , (((safe_add_func_uint32_t_u_u((g_20[3] && 0x1B40E11A796D402DLL), l_19)) , 0xCCD2L) & 0xFD03L))))), 0x3119L)), g_2)) != 0UL)), g_172.f0, g_70[1][1][0], l_216) , l_216) , l_19) > g_176)));
        if (g_20[3])
            break;
        if (((safe_lshift_func_int8_t_s_s(g_21[0][1][0], ((safe_add_func_int32_t_s_s(l_216, (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((g_264 = g_169), (g_267 = ((((l_266[1][1][3] = (+g_199)) == l_19) >= l_216) & g_197)))) >= l_216), l_268)))) , l_216))) && 3UL))
        { 
            int32_t l_279 = 1L;
            --l_269;
            if (((((l_266[1][1][3] = (safe_sub_func_int16_t_s_s((((l_274 , g_25) ^ (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_279, g_264)), l_279))) || l_279), l_266[2][0][1]))) <= g_20[3]) , l_280[3]) , g_110))
            { 
                return l_279;
            }
            else
            { 
                uint64_t l_287[5][4][2] = {{{0UL,0x3A494EFE83E42A8CLL},{0x9311DF522524D29CLL,8UL},{18446744073709551606UL,0UL},{0xE55EC79DE541012FLL,18446744073709551606UL}},{{18446744073709551614UL,18446744073709551615UL},{18446744073709551614UL,18446744073709551606UL},{0xE55EC79DE541012FLL,0UL},{18446744073709551606UL,8UL}},{{0x9311DF522524D29CLL,0x3A494EFE83E42A8CLL},{0UL,0x1FC11684F62FEAE6LL},{0x1FC11684F62FEAE6LL,0x1FC11684F62FEAE6LL},{0UL,0x3A494EFE83E42A8CLL}},{{0x9311DF522524D29CLL,8UL},{18446744073709551606UL,0UL},{0xE55EC79DE541012FLL,18446744073709551606UL},{18446744073709551614UL,18446744073709551615UL}},{{18446744073709551614UL,18446744073709551606UL},{0xE55EC79DE541012FLL,0UL},{18446744073709551606UL,8UL},{0x9311DF522524D29CLL,0x3A494EFE83E42A8CLL}}};
                int32_t l_288 = (-1L);
                int16_t l_289[3][1];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_289[i][j] = 0L;
                }
                l_288 ^= (6UL ^ ((safe_div_func_uint16_t_u_u((g_70[2][0][1] , ((safe_add_func_int32_t_s_s(g_154[1], (safe_add_func_int8_t_s_s((l_287[0][3][0] >= g_172.f0), 0x73L)))) && g_194)), l_280[3].f0.f1)) < g_214.f0));
                l_289[0][0] |= (-1L);
            }
            return g_110;
        }
        else
        { 
            int32_t l_299 = 1L;
            if ((g_91 & (((safe_lshift_func_uint8_t_u_u((--g_154[1]), ((g_21[0][1][1] > ((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(g_25, 0xF614L)), g_197)) <= 0x95F2L)) || g_110))) & 0x48E4L) > g_91)))
            { 
                if (g_91)
                    break;
                l_299 = (l_280[3].f0.f1 = g_154[1]);
                if (g_176)
                    break;
            }
            else
            { 
                struct S0 l_300 = {4294967291UL,0xABCD3A8AL};
                g_172 = l_300;
            }
        }
    }
    for (g_91 = 0; (g_91 >= 12); g_91 = safe_add_func_uint32_t_u_u(g_91, 2))
    { 
        uint32_t l_303 = 0x037EAE16L;
        struct S0 l_318 = {0x87A40E00L,-1L};
        int32_t l_320 = (-4L);
        if ((g_107 = g_194))
        { 
            ++l_303;
        }
        else
        { 
            struct S0 l_311 = {2UL,0L};
            l_311 = func_6(g_70[2][0][1], g_21[0][1][0], l_306[1], ((g_172.f1 |= (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((1UL < g_197), 0x3172L)), l_216))) >= l_303));
        }
        if ((((g_22 = (g_154[0] = (safe_rshift_func_int16_t_s_u((((0x3346647AL == l_303) , (g_110 < (safe_add_func_uint64_t_u_u(((safe_div_func_int64_t_s_s((l_318.f1 = ((g_172 = l_318) , 0xD9E755F99B6F88C8LL)), 0x82BF0B190B9EC8A6LL)) & l_318.f0), 0UL)))) || g_154[0]), l_319)))) < g_107) || g_32))
        { 
            ++g_322[0];
        }
        else
        { 
            int64_t l_342 = 9L;
            int32_t l_343 = 0x91A60AADL;
            int32_t l_344 = 0L;
            int32_t l_345 = 0xB06B825BL;
            uint32_t l_346 = 0x88CFFDCCL;
            l_318.f1 = (safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((g_198 = (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s((g_112 = ((0x011069D0L || l_318.f1) < (safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((2L && (safe_lshift_func_uint8_t_u_u(((((g_214.f1 ^= ((((l_342 == g_177) < 0xB509B9A7E04E4066LL) < (-1L)) || g_177)) > l_342) >= l_320) > 7L), 0))), l_280[3].f0.f1)) ^ l_342), g_197)) < l_320), 0xA12DL)))), 14)))), l_320))) & l_216), 1UL)), g_20[3]));
            l_346--;
        }
    }
    return g_70[2][0][1].f0;
}



static struct S0  func_6(union U1  p_7, int8_t  p_8, union U1  p_9, uint32_t  p_10)
{ 
    struct S0 l_219 = {0xDEBE93CEL,-9L};
    if ((safe_rshift_func_int8_t_s_s(g_108, 4)))
    { 
        g_172.f1 = 0x1F3A0D9AL;
        return l_219;
    }
    else
    { 
        uint16_t l_229 = 3UL;
        int32_t l_230 = 0x46776D98L;
        struct S0 l_244 = {4294967295UL,0x0B849918L};
        g_169 = ((p_9 , (-1L)) > 0x50B3776BL);
        if (p_7.f0)
        { 
            uint32_t l_228 = 18446744073709551611UL;
            int32_t l_245 = 1L;
            if (((g_214 = g_214) , (safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_9.f0, 9)), ((l_230 ^= (((((((g_21[0][1][0] & (safe_rshift_func_int16_t_s_s((l_228 && l_219.f0), g_2))) ^ l_229) & l_219.f1) || g_91) > 0x854EL) < p_7.f0) > 0UL)) < p_7.f0))) ^ 1L), 0x2E5B4F79F911611CLL))))
            { 
                return g_172;
            }
            else
            { 
                const int32_t l_237 = 0x15BE2F3EL;
                int32_t l_246 = 1L;
                l_246 ^= (safe_add_func_uint64_t_u_u((l_230 = ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_237, (safe_sub_func_uint32_t_u_u((p_7.f0 & ((safe_rshift_func_int8_t_s_u(((p_7.f0 > (safe_mod_func_int32_t_s_s(((((g_214 = l_244) , g_32) | l_245) > g_20[2]), p_8))) <= 0x2FL), l_229)) == l_219.f1)), p_7.f0)))), 0x3AL)) | p_9.f0)), p_7.f0));
            }
        }
        else
        { 
            struct S0 l_247 = {0xC1BBC447L,0L};
            return l_247;
        }
        l_230 = (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_8 = (safe_lshift_func_int16_t_s_s((((g_112 ^= l_229) | p_10) && l_219.f1), ((safe_mul_func_int8_t_s_s(0x77L, p_9.f0)) != g_214.f0)))), 1UL)), l_229));
    }
    return l_219;
}



static union U1  func_11(int16_t  p_12)
{ 
    uint32_t l_115[4] = {0xA1103C6CL,0xA1103C6CL,0xA1103C6CL,0xA1103C6CL};
    int32_t l_147[2];
    struct S0 l_174[2] = {{0x721F5EDDL,0x6F6008F0L},{0x721F5EDDL,0x6F6008F0L}};
    int i;
    for (i = 0; i < 2; i++)
        l_147[i] = 9L;
    if (l_115[2])
    { 
        int16_t l_116 = 0x220CL;
        int32_t l_142[2][4][5] = {{{1L,0L,1L,1L,0L},{(-5L),0x5174218AL,0x5174218AL,(-5L),0x5174218AL},{0L,0L,0x5629ED7CL,0L,0L},{0x5174218AL,(-5L),0x5174218AL,0x5174218AL,(-5L)}},{{0L,1L,1L,0L,1L},{(-5L),(-5L),(-7L),(-5L),(-5L)},{1L,0L,1L,1L,0L},{(-5L),0x5174218AL,0x5174218AL,(-5L),0x5174218AL}}};
        int32_t l_143 = 0xE535D5B9L;
        int i, j, k;
        l_116 &= p_12;
        if (l_116)
            goto lbl_158;
lbl_158:
        if ((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((((((safe_sub_func_uint64_t_u_u((g_110 || (safe_add_func_uint32_t_u_u((((p_12 > (((((safe_rshift_func_int16_t_s_u(0x28F0L, 10)) & (((safe_mul_func_uint8_t_u_u(0xFCL, 4L)) | p_12) < (-9L))) <= g_21[0][1][0]) || g_20[3]) <= l_115[2])) , 0xB4L) == 0x50L), 0x077B2A72L))), 0x772E7DE2CA422C17LL)) & p_12) ^ l_116) | g_108) != g_20[0]) , 0L) ^ l_116), p_12)), p_12)))
        { 
            int32_t l_141 = 0x2FAF5C71L;
            int32_t l_144 = 0xA65F88FAL;
            g_107 |= (p_12 || (l_143 = (l_142[0][3][1] = (l_116 , ((((l_116 || (safe_sub_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(0xE2B7L, l_115[2])) & 1UL), 12)), l_141)), p_12)) <= l_141) ^ 1L), l_116))) && g_21[0][1][0]) | l_141) <= l_115[2])))));
            l_144 ^= 1L;
            l_147[0] &= (g_107 = ((((p_12 == ((p_12 && ((p_12 < (g_21[0][1][0] = ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, 0x9F6E7EE216E9B388LL)) < 0L))) == 0UL)) || l_116)) && 9UL) <= p_12) || l_144));
        }
        else
        { 
            int64_t l_150 = 1L;
            for (g_25 = 0; (g_25 == 24); ++g_25)
            { 
                int32_t l_151 = (-8L);
                int32_t l_152 = 0xDFA604D7L;
                int32_t l_153 = (-7L);
                --g_154[1];
                l_143 = (+(l_142[0][3][1] |= 0L));
            }
        }
        l_143 |= (g_2 | ((safe_mod_func_uint16_t_u_u(g_154[1], (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((g_169 = (safe_mod_func_uint32_t_u_u((g_20[3] | (g_25 , (-1L))), l_142[0][3][1]))), g_21[0][2][4])), p_12)) != g_91), g_21[0][1][0])))) < 1UL));
    }
    else
    { 
        union U1 l_183 = {0x1645DA59L};
        int32_t l_189 = 0L;
        int32_t l_190 = (-1L);
        struct S0 l_215 = {4UL,-7L};
        for (g_169 = 3; (g_169 >= 6); ++g_169)
        { 
            const struct S0 l_173 = {4294967295UL,0x0B7F3AE8L};
            int32_t l_175 = 0x5E2246E6L;
            l_174[0] = (g_172 , l_173);
            for (g_32 = 0; (g_32 <= 1); g_32 += 1)
            { 
                g_177++;
                g_107 = 0xAED9211EL;
            }
        }
        if (((g_91 = g_32) & ((safe_div_func_int16_t_s_s((((+g_154[1]) >= ((g_110 = (((l_183 , g_2) | g_2) <= p_12)) && g_110)) | 18446744073709551615UL), p_12)) <= g_21[0][2][0])))
        { 
            struct S0 l_184 = {0xFC0C8250L,0x07C83248L};
            l_174[1] = l_184;
        }
        else
        { 
            int8_t l_186 = 0x38L;
            int32_t l_188 = 0x3AA45CE9L;
            int32_t l_193 = 0x57CE5D3BL;
            if (g_32)
            { 
                int32_t l_185 = 0x4227FBC6L;
                int32_t l_187 = (-8L);
                int32_t l_191 = 0x2FEEB18FL;
                int32_t l_192 = 0L;
                g_194++;
            }
            else
            { 
                uint64_t l_200 = 1UL;
                int32_t l_213[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_213[i] = 0x6F1CC891L;
                l_200++;
                l_213[0] = (safe_sub_func_int16_t_s_s((l_189 &= (safe_mul_func_uint16_t_u_u(((0x291253B8L ^ (((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(p_12, 4)), p_12)), l_174[0].f1)) || 0x4D311D999481441DLL) || g_172.f1)) <= l_174[0].f0), l_190))), l_115[2]));
            }
            l_215 = g_214;
        }
        g_214 = g_172;
    }
    return g_70[2][0][1];
}



static uint16_t  func_17(int32_t  p_18)
{ 
    int32_t l_31 = (-8L);
    int32_t l_74 = 1L;
    int32_t l_111 = 5L;
    for (p_18 = 0; (p_18 <= (-28)); p_18 = safe_sub_func_int32_t_s_s(p_18, 7))
    { 
        uint32_t l_47 = 0x73B020B2L;
        int32_t l_68 = 3L;
        int8_t l_71 = 0xD9L;
        for (g_25 = 11; (g_25 < (-10)); g_25 = safe_sub_func_int32_t_s_s(g_25, 2))
        { 
            int32_t l_30 = 1L;
            int32_t l_35 = 0L;
            if ((p_18 > (l_31 = l_30)))
            { 
                g_32++;
                l_35 &= 0L;
                l_47 &= ((g_46 = ((((safe_mul_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s((l_31 > g_2), (((4294967295UL == (safe_sub_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((((g_25 == g_32) | l_31) < g_20[1]) == g_22), p_18)) < p_18), g_32)) == g_2) , l_31), p_18))) >= 0x555DL) || g_32))) && 0x4CL), 1L)) , p_18) == 0L) < 0xAE0512EDL)) == p_18);
            }
            else
            { 
                const uint32_t l_67 = 0x9032B814L;
                int32_t l_69[5] = {0xF0427242L,0xF0427242L,0xF0427242L,0xF0427242L,0xF0427242L};
                int i;
                l_69[0] &= ((safe_add_func_int8_t_s_s((l_68 = ((safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_32 ^ (safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_u(1L, 3))))), (safe_div_func_uint64_t_u_u(g_32, ((safe_mul_func_int8_t_s_s(g_22, g_20[2])) & 65535UL))))), 0xDEDCL)) != l_67) && g_2), l_31)) ^ l_67), g_22)) & l_67), l_47)) > g_2)), g_46)) && p_18);
                l_35 = (g_70[2][0][1] , (((0x75L ^ p_18) >= (p_18 || l_47)) <= p_18));
                if (p_18)
                    continue;
            }
            if (l_31)
                break;
            if (((0xB7L ^ l_71) && (((safe_mul_func_int8_t_s_s((l_35 ^= (4294967295UL >= 0UL)), l_31)) <= g_20[3]) != p_18)))
            { 
                if (l_30)
                    break;
            }
            else
            { 
                int64_t l_78 = (-4L);
                l_68 = ((l_74 = l_68) | (~((safe_lshift_func_int16_t_s_u(l_78, 11)) < (p_18 ^ (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((-6L), p_18)), 0))))));
                if (p_18)
                    break;
                return l_35;
            }
        }
    }
    if (((l_31 , l_31) & (+0x1FF7B51EF177DAE0LL)))
    { 
        uint8_t l_84 = 0x54L;
        for (g_32 = 0; (g_32 <= 1); g_32 += 1)
        { 
            int i;
            return g_20[g_32];
        }
        for (g_32 = 0; (g_32 <= 1); g_32 += 1)
        { 
            int i;
            l_84++;
            p_18 = g_20[(g_32 + 1)];
            for (p_18 = 0; (p_18 <= 1); p_18 += 1)
            { 
                int16_t l_87 = 1L;
                l_87 = 0x614AC9ACL;
                if (l_84)
                    continue;
            }
        }
    }
    else
    { 
        uint16_t l_92 = 65535UL;
        int32_t l_97 = 9L;
        int32_t l_109 = (-1L);
        for (g_46 = 13; (g_46 <= 60); ++g_46)
        { 
            int32_t l_90 = 0x7DC5EB77L;
            p_18 = l_90;
            g_91 ^= g_46;
        }
        ++l_92;
        l_111 = (safe_rshift_func_int8_t_s_u((l_97 = 0x5CL), (safe_sub_func_uint64_t_u_u((l_74 = 18446744073709551615UL), (((safe_unary_minus_func_uint64_t_u(p_18)) != ((g_110 |= (((safe_mul_func_int8_t_s_s((l_109 = ((g_21[0][1][0] |= ((g_108 = (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((g_107 |= ((0x0C381FEC7F1FF5BALL ^ g_20[1]) , l_31)), p_18)) || 0UL), l_92))) || l_92)) > p_18)), g_46)) & 0xD8L) > l_92)) || 0x0DB06F5C0CD63D7CLL)) && p_18)))));
    }
    g_112--;
    return l_31;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_20[i], "g_20[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_21[i][j][k], "g_21[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_70[i][j][k].f0, "g_70[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_154[i], "g_154[i]", print_hash_value);

    }
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_172.f0, "g_172.f0", print_hash_value);
    transparent_crc(g_172.f1, "g_172.f1", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_322[i], "g_322[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
