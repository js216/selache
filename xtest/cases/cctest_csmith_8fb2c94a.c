// SPDX-License-Identifier: MIT
// cctest_csmith_8fb2c94a.c --- cctest case csmith_8fb2c94a (csmith seed 2410858826)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x822741b4 */
/* @exp_ticks 0x3bb9 */

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

// Options:   -s 2410858826 -o /tmp/csmith_gen__2y5ztbh/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int64_t  f1;
};

union U1 {
   int64_t  f0;
};

union U2 {
   uint64_t  f0;
   const int32_t  f1;
   uint32_t  f2;
};


static int32_t g_2 = (-1L);
static int32_t g_22[2] = {0x81A82E77L,0x81A82E77L};
static uint16_t g_23[5][4] = {{0x5EBDL,0x5EBDL,0x5EBDL,0x5EBDL},{0x5EBDL,0x5EBDL,0x5EBDL,0x5EBDL},{0x5EBDL,0x5EBDL,0x5EBDL,0x5EBDL},{0x5EBDL,0x5EBDL,0x5EBDL,0x5EBDL},{0x5EBDL,0x5EBDL,0x5EBDL,0x5EBDL}};
static uint32_t g_49[3][2] = {{0x9F4802D1L,0x9F4802D1L},{0x9F4802D1L,0x9F4802D1L},{0x9F4802D1L,0x9F4802D1L}};
static uint32_t g_94 = 0xEA850200L;
static union U1 g_96 = {1L};
static int16_t g_99 = 0x6C45L;
static int32_t g_113 = 0x4D153B42L;
static union U2 g_116[3] = {{3UL},{3UL},{3UL}};
static struct S0 g_160 = {0x6FE5E69EL,0x1D6552DC662D5AFFLL};
static uint16_t g_205 = 0xEF57L;
static uint16_t g_223 = 2UL;
static struct S0 g_236 = {0xF20A964BL,9L};



static union U2  func_1(void);
static int32_t  func_5(uint16_t  p_6);
static uint16_t  func_7(union U1  p_8, union U1  p_9, uint16_t  p_10);
static union U1  func_11(int64_t  p_12, uint32_t  p_13, const uint64_t  p_14);




static union U2  func_1(void)
{ 
    struct S0 l_207 = {0x04B5BEC4L,0L};
    int32_t l_229 = (-1L);
    int32_t l_237 = 5L;
    int32_t l_238 = 0xE0652BE2L;
    int32_t l_239 = 0x7EBAF8E3L;
    int32_t l_240[3];
    int32_t l_241 = (-7L);
    int32_t l_242 = 1L;
    uint16_t l_243[1][3][4];
    uint16_t l_250 = 0x17ADL;
    uint8_t l_259 = 0x62L;
    int8_t l_260 = 0xBFL;
    union U2 l_261 = {18446744073709551615UL};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_240[i] = 0xF84625BBL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
                l_243[i][j][k] = 4UL;
        }
    }
    for (g_2 = 17; (g_2 < (-7)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 1))
    { 
        uint64_t l_17 = 0x7ADF1ADB2BC40ED3LL;
        if (func_5(func_7(func_11(g_2, ((safe_rshift_func_int16_t_s_s(l_17, 1)) , 0x0D658EDFL), l_17), g_96, g_96.f0)))
        { 
            struct S0 l_206 = {0x5C750724L,0L};
            for (g_160.f0 = 0; g_160.f0 < 3; g_160.f0 += 1)
            {
                for (g_96.f0 = 0; g_96.f0 < 2; g_96.f0 += 1)
                {
                    g_49[g_160.f0][g_96.f0] = 0x4C0B326BL;
                }
            }
            l_207 = l_206;
        }
        else
        { 
            uint8_t l_212 = 1UL;
            union U1 l_228 = {0xBB9CBAC53C36080ELL};
            struct S0 l_231 = {4294967291UL,0x73A2E64CDA43A824LL};
            int32_t l_235 = 0x58F65C06L;
            for (g_160.f1 = 0; (g_160.f1 <= (-9)); g_160.f1 = safe_sub_func_int32_t_s_s(g_160.f1, 9))
            { 
                uint16_t l_211 = 65526UL;
                g_22[0] = 0x3EF8ABBAL;
                g_22[1] &= (!l_211);
                --l_212;
            }
            for (g_113 = 0; (g_113 <= 15); ++g_113)
            { 
                int64_t l_224[3];
                int32_t l_225 = 1L;
                int i;
                for (i = 0; i < 3; i++)
                    l_224[i] = 0x317E4DA9278B1CBCLL;
                g_22[1] = (safe_sub_func_uint64_t_u_u((l_225 = ((g_205 & (g_223 = (((g_23[1][2] = (((((((safe_mod_func_int16_t_s_s(8L, g_116[1].f2)) || ((g_116[1].f0 = (g_116[1] , 0x4154FC8DD5CAA878LL)) && 0L)) | l_17) & l_212) > 0x0A8872ADL) , l_212) && l_207.f1)) || g_116[1].f0) >= g_99))) <= l_224[2])), 0x88BA0BCDD2221DAELL));
            }
            if ((safe_add_func_uint32_t_u_u((l_228 , l_17), ((((l_229 = g_23[3][1]) >= (((9UL ^ 1L) && l_207.f1) & 0UL)) | g_160.f0) , 0UL))))
            { 
                const struct S0 l_230 = {0UL,-1L};
                l_231 = l_230;
            }
            else
            { 
                uint32_t l_234 = 0xDA9CE404L;
                l_235 &= ((safe_rshift_func_uint8_t_u_s(g_23[0][3], 6)) > (g_23[0][2] || l_234));
                g_22[1] = (-1L);
                g_236 = (g_160 = g_160);
            }
        }
    }
    --l_243[0][2][3];
    l_260 ^= (safe_add_func_int64_t_s_s(((((safe_mod_func_uint16_t_u_u((l_250 & g_22[1]), (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_s(l_207.f0, 3)) && (safe_sub_func_int16_t_s_s(l_259, g_116[1].f1))) < l_242), g_205)), 255UL)))) || l_250) != g_116[1].f1) == l_237), 0x33A4172F5B41CB99LL));
    return l_261;
}



static int32_t  func_5(uint16_t  p_6)
{ 
    uint8_t l_112 = 0xD3L;
    int32_t l_115 = (-1L);
    int32_t l_133[1][2][5] = {{{(-3L),(-3L),0x285FCF45L,(-3L),(-3L)},{0x8FD6DDE4L,(-3L),0x8FD6DDE4L,0x8FD6DDE4L,(-3L)}}};
    uint32_t l_136 = 0xF8E9B140L;
    uint16_t l_189[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_189[i] = 0x8A26L;
    for (p_6 = 18; (p_6 <= 52); p_6 = safe_add_func_uint16_t_u_u(p_6, 7))
    { 
        uint64_t l_111 = 0x14B0E7A36831ADECLL;
        int32_t l_114 = 0x0B6C34CEL;
        int32_t l_130 = 0x420A5A07L;
        int32_t l_132[1];
        uint32_t l_153 = 0xC349BFD9L;
        int i;
        for (i = 0; i < 1; i++)
            l_132[i] = 0x3C6A4C7FL;
        for (g_99 = (-2); (g_99 <= 8); g_99 = safe_add_func_int64_t_s_s(g_99, 4))
        { 
            int16_t l_110 = 5L;
            int32_t l_131 = 0xD2EF88E3L;
            int32_t l_134 = 0xBD86D4A0L;
            int32_t l_135 = 9L;
            uint8_t l_139 = 1UL;
            int32_t l_140 = 5L;
            int32_t l_141 = 0x481B1F86L;
            int32_t l_142 = 0xB2DE1998L;
            int32_t l_143 = (-1L);
            int32_t l_144 = 0xC22C6A01L;
            int32_t l_145 = (-4L);
            int32_t l_146 = 0L;
            int32_t l_147 = 0x151E35FFL;
            int32_t l_148 = 0x055D8751L;
            int32_t l_149 = 7L;
            int32_t l_150 = (-1L);
            int32_t l_151 = 0xE4FB37E2L;
            int32_t l_152[1];
            int i;
            for (i = 0; i < 1; i++)
                l_152[i] = (-3L);
            l_115 = (l_114 = ((((((g_113 &= (p_6 > (safe_rshift_func_int8_t_s_u((l_112 |= (0x8DE9L ^ ((safe_sub_func_int8_t_s_s((l_111 = (0xB006L & (safe_div_func_uint16_t_u_u(l_110, p_6)))), g_23[4][1])) ^ g_49[1][1]))), 1)))) >= g_99) , l_112) != g_2) >= p_6) , l_112));
            l_133[0][1][3] = ((g_116[1] , g_49[0][1]) | (safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((+((l_110 <= ((~(((((safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_uint64_t_u((((((safe_mod_func_int32_t_s_s(((--l_136) > ((p_6 <= g_94) || l_133[0][0][0])), p_6)) <= p_6) & 0xEAEF02C85B7FF5A8LL) < 0xC2L) >= l_133[0][1][1]))) >= 1UL), l_114)) , p_6) ^ g_49[0][1]) ^ (-8L)) < g_94)) | 0x65CE0FBC7DB13CF2LL)) || 0x919FL)) == p_6), p_6)), l_139)) , g_22[1]), 0xF5F8L)));
            ++l_153;
        }
        for (g_96.f0 = 0; (g_96.f0 == (-30)); --g_96.f0)
        { 
            uint8_t l_169 = 0UL;
            int32_t l_170 = 0x5BD87C1AL;
            g_22[1] ^= ((g_23[0][0] ^ 5L) , (safe_div_func_int32_t_s_s(0x2668A2AEL, (-1L))));
            for (g_113 = 0; (g_113 >= 0); g_113 -= 1)
            { 
                struct S0 l_161[1][4][2] = {{{{0x03F9351EL,0x6C2B630719000718LL},{0x2DF3E0A3L,0x95B5E54AC5FBAF3FLL}},{{0x03F9351EL,0x6C2B630719000718LL},{0x2DF3E0A3L,0x95B5E54AC5FBAF3FLL}},{{0x03F9351EL,0x6C2B630719000718LL},{0x2DF3E0A3L,0x95B5E54AC5FBAF3FLL}},{{0x03F9351EL,0x6C2B630719000718LL},{0x2DF3E0A3L,0x95B5E54AC5FBAF3FLL}}}};
                int i, j, k;
                l_161[0][2][0] = g_160;
                l_132[g_113] &= (safe_unary_minus_func_uint32_t_u(0x55F3680CL));
            }
            for (g_99 = (-18); (g_99 != 14); ++g_99)
            { 
                uint64_t l_173 = 0x22F5C3AA76F27FDALL;
                l_130 = (((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(l_169, (l_170 &= (p_6 ^ g_160.f1)))) < (safe_add_func_uint8_t_u_u(1UL, p_6))) , g_116[1].f2), l_173)) , p_6) || l_114);
                if (p_6)
                    break;
                if (p_6)
                    break;
            }
        }
        return g_49[0][1];
    }
    for (g_113 = 19; (g_113 > 26); g_113 = safe_add_func_uint16_t_u_u(g_113, 1))
    { 
        int32_t l_178 = (-6L);
        int32_t l_179[4][4][2] = {{{0L,1L},{0x32948FFDL,0L},{1L,0x5407840EL},{0xBA70242FL,0xBA70242FL}},{{0x32948FFDL,0xBA70242FL},{0xBA70242FL,0x5407840EL},{1L,0L},{0x32948FFDL,1L}},{{0L,0x5407840EL},{0L,1L},{0x32948FFDL,0L},{1L,0x5407840EL}},{{0xBA70242FL,0xBA70242FL},{0x32948FFDL,0xBA70242FL},{0xBA70242FL,0x5407840EL},{1L,0L}}};
        int i, j, k;
        for (l_136 = 0; (l_136 > 24); l_136++)
        { 
            int64_t l_180 = 0x3CD2035C0580E9A8LL;
            int32_t l_181 = 0x5194D588L;
            int32_t l_182 = 1L;
            int32_t l_183 = 0x445193B0L;
            int32_t l_184 = 0L;
            int32_t l_185 = 0xCF2B2128L;
            int32_t l_186 = 0L;
            int32_t l_187 = 0xCD2030A4L;
            int32_t l_188 = 0L;
            l_189[0]--;
        }
        if (l_115)
            break;
        for (g_160.f0 = 8; (g_160.f0 != 38); g_160.f0 = safe_add_func_uint32_t_u_u(g_160.f0, 3))
        { 
            uint16_t l_194 = 0UL;
            l_194--;
            l_133[0][0][0] &= ((safe_rshift_func_int16_t_s_u(((g_205 = ((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(254UL, g_99)), (safe_add_func_uint8_t_u_u(l_179[3][0][0], 255UL)))) != g_116[1].f2)) <= g_94), 4)) & 1L);
        }
    }
    return p_6;
}



static uint16_t  func_7(union U1  p_8, union U1  p_9, uint16_t  p_10)
{ 
    g_99 ^= (g_22[1] || (safe_mul_func_int8_t_s_s(g_22[0], g_22[0])));
    return p_8.f0;
}



static union U1  func_11(int64_t  p_12, uint32_t  p_13, const uint64_t  p_14)
{ 
    int32_t l_21 = 0xE64F6CBCL;
    int8_t l_26 = 0x60L;
    const int32_t l_41 = (-1L);
    int32_t l_56[3];
    uint32_t l_91[2];
    uint32_t l_92 = 0xE999AA20L;
    int16_t l_93 = (-6L);
    union U1 l_95 = {-9L};
    int i;
    for (i = 0; i < 3; i++)
        l_56[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_91[i] = 1UL;
    for (p_12 = 0; (p_12 <= (-28)); p_12--)
    { 
        int64_t l_20 = 0xEDA8ED40A1650187LL;
        int8_t l_40 = 0x4FL;
        int32_t l_53[4][3] = {{0x02E9D3B0L,0x02E9D3B0L,0x02E9D3B0L},{0xEC7F5175L,0xEC7F5175L,0xEC7F5175L},{0x02E9D3B0L,0x02E9D3B0L,0x02E9D3B0L},{0xEC7F5175L,0xEC7F5175L,0xEC7F5175L}};
        int64_t l_54 = 8L;
        int64_t l_61[5][2];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
                l_61[i][j] = 0xA42286E0DAEE2552LL;
        }
        if (((((((l_20 || ((l_26 = (g_23[4][1]--)) < ((l_21 = (safe_div_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(0x2B56L)), (safe_sub_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u((3UL <= ((p_13 && 0x656540F213ED423CLL) , g_22[0])), 4L)) , g_22[1]), p_12)))), g_22[1])), g_22[0])) && 0UL), 0x5DB0L))) <= g_22[1]))) < 18446744073709551614UL) , l_40) && 0x325CF162C80F3BBALL) >= l_41) , l_21))
        { 
            uint32_t l_55 = 0x879B6842L;
            l_56[2] &= ((safe_div_func_int32_t_s_s((!((l_21 = ((4294967295UL < (safe_div_func_int64_t_s_s((((l_53[1][0] = ((safe_mod_func_int8_t_s_s((g_49[0][1] = g_22[1]), ((safe_sub_func_uint32_t_u_u(((~((4294967295UL >= g_23[2][2]) ^ 0xB293C34FL)) ^ 0x802EEDA7L), 1L)) , p_13))) , p_13)) , 0x4171B3FE78DE6117LL) , p_13), g_22[1]))) | p_14)) , l_54)), l_55)) == p_13);
            for (l_20 = (-29); (l_20 > 10); l_20 = safe_add_func_int8_t_s_s(l_20, 7))
            { 
                l_21 = p_14;
            }
        }
        else
        { 
            uint32_t l_62 = 18446744073709551612UL;
            int32_t l_63 = 0L;
            int32_t l_77 = 0x8E54706CL;
            if ((((l_56[0] &= (g_49[0][1] ^ (l_63 = (l_62 = (((safe_sub_func_uint8_t_u_u((((l_61[1][1] & (0xAAC4L == ((0xC4L == p_13) && p_12))) , 0x3394210AB9CA2468LL) , l_26), 0x62L)) >= g_23[1][1]) , g_23[4][1]))))) || l_56[2]) <= p_14))
            { 
                int16_t l_76 = 0x9C81L;
                g_22[1] |= ((safe_add_func_int32_t_s_s(((((((g_23[0][3] <= g_2) <= p_13) , ((-9L) ^ p_12)) == g_49[0][1]) != l_63) == p_13), p_13)) ^ p_13);
                if (l_62)
                    break;
                l_77 = ((safe_lshift_func_uint16_t_u_s(p_13, 1)) || (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((((safe_div_func_uint8_t_u_u((l_63 = p_12), (l_62 && g_22[1]))) , p_13) ^ l_76), p_13)) != l_62), p_12)), 2)));
            }
            else
            { 
                if (l_62)
                    break;
                l_21 |= g_2;
            }
        }
    }
    g_94 |= ((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((l_21 &= ((p_14 , (((p_12 = ((!(l_93 = (p_14 ^ (safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(((l_56[0] = 0x7FL) && (safe_mod_func_int32_t_s_s((l_91[0] = (-1L)), g_22[1]))), 0x50L)) != l_92), l_92)), l_41))))) == p_12)) > g_23[3][2]) , 0xB0D2L)) && l_91[0])), p_14)), g_23[4][2])) >= (-1L));
    return l_95;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_116[i].f0, "g_116[i].f0", print_hash_value);
        transparent_crc(g_116[i].f1, "g_116[i].f1", print_hash_value);
        transparent_crc(g_116[i].f2, "g_116[i].f2", print_hash_value);

    }
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
