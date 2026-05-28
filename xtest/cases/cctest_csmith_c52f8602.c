// SPDX-License-Identifier: MIT
// cctest_csmith_c52f8602.c --- cctest case csmith_c52f8602 (csmith seed 3308226050)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdfc178f6 */
/* @exp_ticks 0x7215 */

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

// Options:   -s 3308226050 -o /tmp/csmith_gen_zdw12wor/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int8_t  f0;
   int64_t  f1;
};

union U1 {
   uint32_t  f0;
   int8_t * f1;
   uint8_t  f2;
   const int32_t  f3;
   const uint32_t  f4;
};


static int8_t g_10[5][5][2] = {{{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L}},{{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L}},{{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L}},{{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L}},{{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L},{0x78L,0x78L}}};
static int8_t *g_9 = &g_10[1][2][1];
static int32_t g_18 = 1L;
static int32_t g_39 = 0xFAB8D232L;
static uint64_t g_56[7][1][5] = {{{2UL,18446744073709551613UL,0UL,18446744073709551615UL,3UL}},{{1UL,0UL,0UL,1UL,18446744073709551615UL}},{{2UL,18446744073709551608UL,0xCEDE6A6B93DCEDB1LL,1UL,18446744073709551615UL}},{{0UL,2UL,3UL,0UL,3UL}},{{0UL,0UL,18446744073709551615UL,1UL,0xCEDE6A6B93DCEDB1LL}},{{5UL,18446744073709551607UL,18446744073709551615UL,1UL,0UL}},{{0UL,18446744073709551615UL,3UL,18446744073709551615UL,0UL}}};
static int32_t g_58[2][3][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
static int8_t g_79 = (-1L);
static union U1 g_85 = {0xF831B5E3L};
static int32_t g_89[2] = {0L,0L};
static uint16_t g_103 = 0x790EL;
static int64_t g_116 = (-1L);
static int64_t *g_115[3] = {&g_116,&g_116,&g_116};
static int32_t *g_171 = &g_39;
static int32_t **g_170 = &g_171;
static uint32_t g_322 = 0xFBC25AA0L;
static int32_t g_331 = 0x59F4360DL;
static struct S0 g_332 = {-1L,-7L};
static uint8_t g_358 = 0xF9L;
static int16_t g_364 = 1L;
static uint16_t g_382 = 1UL;
static uint32_t g_386 = 4294967295UL;
static const int64_t g_414[1] = {0x822A2298363495F7LL};
static uint64_t *g_418 = &g_56[3][0][4];
static uint64_t **g_417 = &g_418;
static uint16_t g_449 = 0UL;
static const int32_t g_476 = 0xB2FFAFC6L;
static const int32_t *g_475 = &g_476;
static int16_t *g_535 = &g_364;
static int16_t **g_534[7] = {&g_535,&g_535,&g_535,&g_535,&g_535,&g_535,&g_535};
static int32_t ***g_554 = &g_170;
static int16_t g_571[4] = {0xEBBAL,0xEBBAL,0xEBBAL,0xEBBAL};
static uint16_t *g_728 = &g_449;
static uint16_t **g_727 = &g_728;
static uint16_t ***g_726 = &g_727;
static int64_t g_742 = 0x777EF06398915327LL;
static uint64_t g_801 = 0xA4F7DB3BA53930EELL;
static uint8_t g_920 = 253UL;
static int64_t g_934 = 6L;
static int32_t ***g_969[1][5] = {{&g_170,&g_170,&g_170,&g_170,&g_170}};
static uint32_t g_978[6][7] = {{3UL,4294967295UL,1UL,4294967295UL,3UL,4294967295UL,1UL},{0xA8A32473L,0xF7BABFF0L,1UL,1UL,0xF7BABFF0L,0xA8A32473L,0x6F12F3E2L},{0UL,0x2FB5965AL,0UL,4294967295UL,0UL,0x2FB5965AL,0UL},{0xA8A32473L,1UL,0x6F12F3E2L,0xF7BABFF0L,0xF7BABFF0L,0x6F12F3E2L,1UL},{3UL,0x2FB5965AL,1UL,0x2FB5965AL,3UL,0x2FB5965AL,1UL},{0xF7BABFF0L,0xF7BABFF0L,0x6F12F3E2L,1UL,0xA8A32473L,0xA8A32473L,1UL}};
static int32_t *g_995[5][6][5] = {{{&g_58[1][2][2],&g_58[0][2][1],(void*)0,&g_58[1][2][2],(void*)0},{&g_58[1][2][2],(void*)0,&g_58[1][2][2],&g_58[1][1][3],&g_58[1][2][2]},{(void*)0,&g_58[1][1][0],(void*)0,&g_58[0][1][2],&g_58[1][2][2]},{&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],(void*)0,(void*)0},{&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2]},{&g_58[1][2][2],&g_58[1][2][0],(void*)0,(void*)0,&g_58[0][1][2]}},{{&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][0],&g_58[1][2][2],(void*)0},{&g_58[0][2][2],&g_58[0][2][1],(void*)0,&g_58[1][2][2],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_58[0][1][2]},{&g_58[1][1][3],(void*)0,&g_58[1][2][2],(void*)0,&g_58[1][2][2]},{&g_58[1][2][2],&g_58[1][2][2],(void*)0,&g_58[1][2][2],(void*)0},{(void*)0,&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2]}},{{(void*)0,&g_58[0][1][2],&g_58[0][0][3],&g_58[0][1][1],&g_58[1][2][2]},{&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],(void*)0,&g_58[1][2][2]},{&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],(void*)0,&g_58[1][2][2]},{&g_58[1][2][2],(void*)0,&g_58[1][2][2],(void*)0,&g_58[1][2][2]},{&g_58[1][2][2],(void*)0,&g_58[1][2][2],&g_58[1][2][2],(void*)0},{(void*)0,&g_58[1][2][2],&g_58[1][2][2],&g_58[0][2][1],&g_58[1][1][3]}},{{&g_58[1][2][2],&g_58[1][1][3],(void*)0,(void*)0,&g_58[0][0][2]},{&g_58[1][2][2],(void*)0,&g_58[1][2][2],&g_58[1][2][2],(void*)0},{&g_58[0][1][0],(void*)0,(void*)0,&g_58[1][2][2],&g_58[0][1][0]},{&g_58[1][2][2],(void*)0,(void*)0,&g_58[1][2][2],&g_58[1][2][2]},{(void*)0,(void*)0,(void*)0,&g_58[1][2][2],&g_58[1][2][2]},{(void*)0,&g_58[1][1][3],&g_58[1][2][2],&g_58[1][1][1],(void*)0}},{{(void*)0,&g_58[1][2][2],&g_58[0][1][2],&g_58[1][2][2],&g_58[1][2][2]},{&g_58[1][2][2],(void*)0,&g_58[1][2][2],&g_58[0][1][0],&g_58[1][2][2]},{&g_58[1][2][2],(void*)0,&g_58[0][0][2],(void*)0,&g_58[0][2][0]},{&g_58[0][2][1],&g_58[1][2][2],(void*)0,&g_58[1][2][2],&g_58[1][2][2]},{&g_58[1][2][2],&g_58[1][2][2],&g_58[0][0][2],&g_58[0][2][0],(void*)0},{&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2],&g_58[1][2][2]}}};
static struct S0 g_1003 = {0x26L,1L};
static const uint16_t *g_1058 = &g_449;
static const uint16_t **g_1057 = &g_1058;
static const uint16_t ***g_1056 = &g_1057;
static const uint16_t ****g_1055 = &g_1056;
static int8_t *g_1073[7][5] = {{&g_10[1][0][0],(void*)0,(void*)0,(void*)0,&g_10[1][0][0]},{&g_10[1][2][1],&g_79,&g_79,(void*)0,&g_10[1][2][1]},{&g_10[1][2][1],&g_10[1][2][1],&g_10[1][2][1],&g_10[1][2][1],&g_79},{(void*)0,&g_79,&g_10[1][2][1],&g_79,&g_10[1][2][1]},{&g_10[1][2][1],&g_10[1][2][1],&g_10[1][2][1],&g_10[1][2][1],&g_10[1][0][0]},{&g_10[1][2][1],&g_10[1][2][1],&g_10[1][0][0],&g_10[1][4][1],(void*)0},{(void*)0,&g_79,&g_79,&g_10[1][2][1],(void*)0}};
static int8_t **g_1072[5][7] = {{&g_9,(void*)0,&g_1073[3][4],(void*)0,(void*)0,&g_1073[3][4],(void*)0},{(void*)0,&g_1073[2][3],&g_9,(void*)0,&g_1073[2][3],&g_9,(void*)0},{&g_1073[3][3],(void*)0,&g_9,&g_1073[3][3],(void*)0,&g_1073[3][3],&g_9},{&g_1073[2][3],&g_1073[2][3],&g_9,(void*)0,(void*)0,&g_1073[2][3],&g_1073[2][3]},{&g_1073[2][3],&g_9,&g_9,(void*)0,&g_1073[2][3],&g_1073[2][3],(void*)0}};
static uint32_t ** const *g_1076 = (void*)0;
static uint16_t *** const *g_1094 = (void*)0;
static uint16_t *** const **g_1093[7][5] = {{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094},{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094},{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094},{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094},{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094},{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094},{&g_1094,&g_1094,&g_1094,&g_1094,&g_1094}};
static int64_t ***g_1104 = (void*)0;
static union U1 *g_1149 = (void*)0;
static int32_t g_1170 = 0xDAF4316CL;
static uint8_t g_1171 = 1UL;
static const struct S0 *g_1206 = &g_332;
static const struct S0 * const *g_1205[4][1][5] = {{{&g_1206,&g_1206,&g_1206,&g_1206,&g_1206}},{{&g_1206,&g_1206,&g_1206,&g_1206,&g_1206}},{{&g_1206,&g_1206,&g_1206,&g_1206,&g_1206}},{{&g_1206,&g_1206,&g_1206,&g_1206,&g_1206}}};
static uint64_t g_1243[5] = {1UL,1UL,1UL,1UL,1UL};
static const int64_t *g_1487[4] = {&g_414[0],&g_414[0],&g_414[0],&g_414[0]};
static const int64_t **g_1486 = &g_1487[1];
static int32_t g_1564 = 0xE62F0F7FL;
static uint32_t g_1611 = 18446744073709551615UL;
static union U1 g_1683 = {9UL};
static const int8_t g_1778 = 0x3DL;
static int64_t g_1827 = 1L;
static uint64_t g_1950 = 0x07C91B964237B123LL;
static int8_t ***g_1991 = &g_1072[3][0];
static int32_t g_2032 = 0x9712C7C6L;



static int32_t  func_1(void);
static int32_t * func_3(int8_t * p_4, struct S0  p_5, uint8_t  p_6, int8_t * p_7, struct S0  p_8);
static struct S0  func_11(int32_t * p_12, int32_t * p_13, int64_t  p_14, int32_t * p_15, const int32_t * const  p_16);
static int64_t  func_19(union U1  p_20, uint32_t  p_21, int8_t * p_22);
static union U1  func_23(int32_t * p_24, struct S0  p_25, int32_t * p_26);
static struct S0  func_27(uint32_t  p_28, int32_t * p_29, int32_t * const  p_30, int16_t  p_31);
static int32_t * func_32(int16_t  p_33, int32_t  p_34, uint32_t  p_35);
static int32_t  func_40(int8_t * p_41, int32_t  p_42, union U1  p_43);




static int32_t  func_1(void)
{ 
    int8_t l_2 = 1L;
    int32_t *l_17 = &g_18;
    uint32_t l_323[3];
    struct S0 l_1980 = {-8L,0x8855EC01B46298E7LL};
    int i;
    for (i = 0; i < 3; i++)
        l_323[i] = 0UL;
    (*g_170) = (l_2 , func_3(g_9, func_11(l_17, &g_18, func_19(func_23(l_17, func_27((*l_17), ((*g_170) = func_32((*l_17), g_10[0][0][1], g_10[1][2][1])), l_17, l_323[1]), l_17), g_332.f0, g_9), l_17, l_17), g_742, &l_2, l_1980));
    return (*l_17);
}



static int32_t * func_3(int8_t * p_4, struct S0  p_5, uint8_t  p_6, int8_t * p_7, struct S0  p_8)
{ 
    union U1 l_1983 = {4294967295UL};
    int8_t ***l_1989 = &g_1072[1][2];
    int8_t ****l_1990[3][6] = {{&l_1989,(void*)0,(void*)0,&l_1989,&l_1989,&l_1989},{&l_1989,&l_1989,&l_1989,(void*)0,(void*)0,&l_1989},{&l_1989,&l_1989,(void*)0,&l_1989,(void*)0,&l_1989}};
    int8_t * const *l_1993 = &g_1073[4][0];
    int8_t * const * const *l_1992 = &l_1993;
    int32_t l_1994 = 2L;
    int32_t l_1997 = 0L;
    int32_t ****l_2006 = &g_969[0][1];
    uint32_t l_2007[6];
    const int8_t l_2008[7] = {0xC0L,0xC0L,0xC0L,0xC0L,0xC0L,0xC0L,0xC0L};
    int8_t l_2013 = (-1L);
    int16_t l_2041 = 6L;
    uint8_t *l_2044[7];
    uint16_t **** const *l_2047 = (void*)0;
    int32_t *l_2052 = (void*)0;
    int16_t l_2055[4] = {0xE985L,0xE985L,0xE985L,0xE985L};
    int64_t *l_2056 = &g_116;
    int32_t *l_2057 = (void*)0;
    int32_t *l_2058 = (void*)0;
    int32_t *l_2059 = &l_1997;
    int32_t *l_2060 = (void*)0;
    int32_t *l_2061 = (void*)0;
    int32_t *l_2062 = &l_1997;
    int32_t *l_2063 = &g_89[1];
    int32_t *l_2064 = &g_89[1];
    int32_t *l_2065 = &g_331;
    int32_t *l_2066 = (void*)0;
    int32_t *l_2067 = (void*)0;
    int32_t *l_2068 = &l_1994;
    int32_t l_2069 = 0x8F996630L;
    int32_t *l_2070 = &l_1997;
    int32_t *l_2071 = &l_1994;
    int32_t *l_2072 = &g_331;
    int32_t *l_2073 = &g_331;
    int32_t *l_2074 = &g_18;
    int32_t *l_2075[2][4] = {{&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331}};
    uint32_t l_2076[1][4] = {{0x9DC09793L,0x9DC09793L,0x9DC09793L,0x9DC09793L}};
    int32_t *l_2079[2][1];
    int32_t *l_2080 = &g_331;
    int i, j;
    for (i = 0; i < 6; i++)
        l_2007[i] = 0x46233E43L;
    for (i = 0; i < 7; i++)
        l_2044[i] = &g_358;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_2079[i][j] = &l_1994;
    }
    if ((safe_mul_func_int8_t_s_s((l_1983 , ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u(l_1983.f3)) , (safe_div_func_uint16_t_u_u((l_1994 |= ((g_1991 = l_1989) != l_1992)), ((*g_535) &= (((((safe_mod_func_int32_t_s_s(6L, (l_1997 = 0xD0AB9171L))) , ((*p_7) = (safe_sub_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((((*p_7) , 0x0491L) <= l_1983.f0) | (-10L)), g_39)) , 0x9873L), p_5.f0)) , l_2006) != l_2006), 65531UL)) != 0x38L) < 3UL), p_5.f1)))) , g_1683.f0) <= 7L) == l_2007[3]))))), 5)) & 0xC3B8L)), l_2007[3])))
    { 
        int32_t *l_2009 = &g_18;
        union U1 l_2010 = {1UL};
        (*l_2009) ^= l_2008[6];
        (*l_2009) = (((((l_2010 , ((safe_lshift_func_int16_t_s_u(l_2013, 14)) | (((*g_418) | (((safe_lshift_func_int8_t_s_u(((((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((*p_4), (*p_4))), (safe_rshift_func_int8_t_s_s(0xC2L, (((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((p_5.f1 ^ p_8.f0), (*l_2009))) != 8L) != (*l_2009)), (*l_2009))) & 0UL), p_5.f0)), p_5.f0)) & p_5.f1) != 0x73326F02A38D62BBLL))))) < 0xA8L) || p_8.f1) | g_2032), p_5.f0)) <= (*l_2009)) == (*l_2009))) ^ l_1997))) , l_1983) , (void*)0) == (void*)0) == (*l_2009));
    }
    else
    { 
        int32_t *l_2033[1][3][5] = {{{&g_1170,&g_1170,&g_1170,&g_1170,&g_1170},{(void*)0,&l_1994,(void*)0,&l_1994,(void*)0},{&g_1170,&g_1170,&g_1170,&g_1170,&g_1170}}};
        int64_t *l_2040[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (g_1611 = 0; g_1611 < 5; g_1611 += 1)
        {
            for (p_6 = 0; p_6 < 6; p_6 += 1)
            {
                for (g_103 = 0; g_103 < 5; g_103 += 1)
                {
                    g_995[g_1611][p_6][g_103] = (void*)0;
                }
            }
        }
        (*g_170) = l_2033[0][1][3];
        l_1997 &= ((p_5.f1 != ((*g_535) &= (safe_mod_func_int64_t_s_s(((l_1994 = (p_8.f1 = (18446744073709551615UL > (((&g_58[1][2][2] == (p_5 , (void*)0)) , (-8L)) <= (-10L))))) & p_5.f1), p_5.f0)))) == l_2041);
    }
    (*l_2059) = ((safe_rshift_func_uint8_t_u_s((g_358 = g_1683.f0), (safe_mul_func_uint8_t_u_u(((((((l_2047 = l_2047) == ((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((*g_535) = ((((l_2052 != l_2052) & 4294967293UL) == ((*g_418) , (safe_rshift_func_int16_t_s_u(p_5.f0, 0)))) & 0x5A9EL)), 15)) ^ l_2055[1]) || g_382), (*p_4))) , (void*)0)) > 1UL) ^ (**g_417)) , (void*)0) == l_2056), l_2055[1])))) , (-1L));
    l_2076[0][3]--;
    return l_2080;
}



static struct S0  func_11(int32_t * p_12, int32_t * p_13, int64_t  p_14, int32_t * p_15, const int32_t * const  p_16)
{ 
    struct S0 *l_1048 = &g_332;
    int32_t l_1060 = 0x15736340L;
    int8_t **l_1071 = &g_9;
    int16_t *l_1082 = &g_571[1];
    int32_t l_1085 = (-6L);
    int32_t l_1134 = 4L;
    int32_t l_1136 = 0x22D41DE0L;
    int32_t l_1139 = 0x58F020CCL;
    int32_t l_1140[1][6][3] = {{{0x0619A284L,0x0619A284L,0x0619A284L},{8L,8L,8L},{0x0619A284L,0x0619A284L,0x0619A284L},{8L,8L,8L},{0x0619A284L,0x0619A284L,0x0619A284L},{8L,8L,8L}}};
    int8_t l_1141[5];
    uint8_t l_1145 = 0x37L;
    uint16_t l_1169[7][4] = {{0UL,1UL,0UL,1UL},{0UL,65527UL,0xB2FAL,1UL},{0xB2FAL,1UL,0xB2FAL,65527UL},{0UL,1UL,0UL,1UL},{0UL,65527UL,0xB2FAL,1UL},{0xB2FAL,1UL,0xB2FAL,65527UL},{0UL,1UL,0UL,1UL}};
    uint16_t ***l_1180 = &g_727;
    int8_t l_1310 = 0xC7L;
    uint64_t l_1312 = 2UL;
    const int32_t **l_1352 = &g_475;
    uint16_t l_1400 = 9UL;
    uint64_t * const *l_1424 = &g_418;
    const int64_t *l_1482 = &g_414[0];
    const int64_t **l_1481 = &l_1482;
    uint32_t l_1501 = 0x861C7DBAL;
    union U1 *l_1526 = &g_85;
    int16_t ***l_1572 = &g_534[3];
    int32_t * const **l_1597 = (void*)0;
    int32_t * const ***l_1596 = &l_1597;
    int32_t *l_1599 = (void*)0;
    int64_t l_1761 = 0x285AD936FA87E7E1LL;
    const int8_t *l_1777 = &g_1778;
    int32_t l_1820 = 0x9855C455L;
    uint64_t l_1830 = 0xBC8F1C656AA13579LL;
    const uint16_t *****l_1838 = &g_1055;
    int32_t l_1867 = 0xDF90DB0EL;
    int16_t l_1870 = 0xDCA2L;
    int64_t *l_1973 = &g_1003.f1;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1141[i] = (-1L);
lbl_1503:
    if ((*p_12))
    { 
        uint32_t *l_1039 = &g_978[0][2];
        int32_t l_1042 = 9L;
        struct S0 l_1045[5] = {{0x2EL,0L},{0x2EL,0L},{0x2EL,0L},{0x2EL,0L},{0x2EL,0L}};
        uint16_t *** const **l_1092 = (void*)0;
        uint16_t *l_1099[2];
        uint16_t ** const l_1098[3][1] = {{&l_1099[0]},{&l_1099[0]},{&l_1099[0]}};
        uint16_t ** const *l_1097 = &l_1098[2][0];
        uint16_t ** const **l_1096 = &l_1097;
        uint16_t ** const ***l_1095 = &l_1096;
        uint16_t l_1112 = 0xE037L;
        int32_t l_1128 = (-2L);
        int8_t l_1130[1];
        int32_t l_1131 = 0x7837F8C9L;
        int32_t l_1132 = 0x60685DE5L;
        int32_t l_1135[5] = {0xC8C8EDD2L,0xC8C8EDD2L,0xC8C8EDD2L,0xC8C8EDD2L,0xC8C8EDD2L};
        int16_t l_1137 = 0L;
        const int32_t *l_1210 = &l_1085;
        int32_t l_1245 = 0x27F47652L;
        int32_t *l_1253 = (void*)0;
        int32_t *l_1254[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_1255[4][1][3] = {{{18446744073709551610UL,0xA24C0689L,18446744073709551610UL}},{{0xD63EFF2DL,0xD63EFF2DL,0xD63EFF2DL}},{{18446744073709551610UL,0xA24C0689L,18446744073709551610UL}},{{0xD63EFF2DL,0xD63EFF2DL,0xD63EFF2DL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1099[i] = &g_382;
        for (i = 0; i < 1; i++)
            l_1130[i] = 0x27L;
        if (((safe_add_func_uint16_t_u_u((0x7863696DL <= ((**g_417) && (safe_mod_func_uint16_t_u_u((((*l_1039) = p_14) >= (safe_mod_func_int16_t_s_s((-1L), (p_14 ^ p_14)))), l_1042)))), 0UL)) , (*p_12)))
        { 
            uint16_t ** const *l_1054[3][7][3] = {{{&g_727,&g_727,(void*)0},{&g_727,&g_727,(void*)0},{&g_727,(void*)0,&g_727},{&g_727,&g_727,&g_727},{(void*)0,&g_727,&g_727},{&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727}},{{&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727},{&g_727,(void*)0,&g_727},{&g_727,&g_727,(void*)0},{&g_727,(void*)0,&g_727},{&g_727,&g_727,&g_727},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_727,(void*)0},{(void*)0,(void*)0,&g_727},{&g_727,&g_727,(void*)0},{&g_727,(void*)0,(void*)0},{&g_727,&g_727,&g_727},{&g_727,(void*)0,&g_727},{&g_727,&g_727,(void*)0}}};
            uint16_t ** const **l_1053 = &l_1054[0][2][2];
            int32_t l_1069 = (-7L);
            uint8_t *l_1077[2];
            int16_t **l_1083 = &l_1082;
            int16_t *l_1084 = &g_364;
            int64_t *l_1086 = (void*)0;
            int64_t *l_1087 = &g_1003.f1;
            int32_t l_1088 = 8L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1077[i] = &g_358;
            for (g_364 = (-22); (g_364 > (-8)); ++g_364)
            { 
                return l_1045[0];
            }
            for (g_79 = 0; (g_79 != 4); g_79 = safe_add_func_uint8_t_u_u(g_79, 2))
            { 
                const uint16_t *****l_1059 = &g_1055;
                int32_t l_1065 = 0x6E35C40BL;
                int32_t *l_1070 = &l_1069;
                if ((((&g_1003 == l_1048) < (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*g_535) = (((p_14 | (l_1053 != ((*l_1059) = g_1055))) | l_1060) > (safe_div_func_uint64_t_u_u((l_1042 &= ((safe_rshift_func_int8_t_s_u((0xA664L != 0x4C30L), 4)) | 0xFDE5ABFA9734955ALL)), (*g_418))))), l_1060)), p_14)) <= p_14) < l_1065)) , (-2L)))
                { 
                    (*p_15) &= (!0x97254DC2B8C80384LL);
                    (*g_170) = &l_1060;
                    (*p_12) = (safe_add_func_uint8_t_u_u(p_14, ((func_27(l_1069, l_1070, (**g_554), p_14) , l_1070) != l_1070)));
                }
                else
                { 
                    g_1072[4][2] = l_1071;
                    return g_332;
                }
            }
            l_1088 |= (safe_sub_func_uint8_t_u_u((g_920 = (g_1076 != g_1076)), (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(8L, (((*l_1087) = (((*p_15) ^ ((((l_1085 ^= (((p_14 || (((**l_1071) |= ((((*l_1083) = l_1082) != l_1084) > p_14)) , 0xE2D72926EA3627A5LL)) || l_1060) < l_1069)) , g_332.f0) != (*p_12)) & (-1L))) >= 0x20BAL)) || 0x1B7552D916347743LL))), l_1060))));
            return l_1045[1];
        }
        else
        { 
            uint32_t l_1089 = 18446744073709551615UL;
            uint8_t l_1113 = 0UL;
            int32_t *l_1115[1][4][5] = {{{&l_1042,&l_1042,&g_89[0],&g_89[0],&l_1042},{&l_1085,&g_331,&g_89[0],&g_89[0],&g_89[0]},{&g_331,&l_1085,&g_331,&g_89[0],&g_89[0]},{&l_1042,&l_1042,&g_89[0],&l_1042,&l_1042}}};
            uint64_t l_1126 = 0x4451C431CA27B4E7LL;
            uint32_t l_1142 = 18446744073709551611UL;
            uint8_t l_1228 = 0x15L;
            int32_t l_1246 = (-4L);
            struct S0 l_1247 = {3L,0xC22A17F5BE228DD3LL};
            int i, j, k;
            --l_1089;
            if ((((-3L) < ((g_1093[0][0] = l_1092) == (l_1095 = (void*)0))) != (0x8CL <= 0xA4L)))
            { 
                int32_t l_1109 = 0x169EF958L;
                uint8_t *l_1110[2];
                uint32_t l_1111 = 0x405606B7L;
                int32_t *l_1114[4];
                uint32_t ** const *l_1118 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1110[i] = &g_920;
                for (i = 0; i < 4; i++)
                    l_1114[i] = &l_1042;
                l_1042 &= (((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((void*)0 != g_1104) <= l_1060), (p_14 , ((p_14 == (safe_lshift_func_uint8_t_u_u((l_1111 = (safe_sub_func_uint32_t_u_u(((void*)0 == p_13), l_1109))), p_14))) || (*p_15))))), l_1112)) , 0x4FFC93EA00BDF4F4LL) ^ l_1113);
                (*p_15) &= 0x5B099D52L;
                l_1114[0] = p_15;
                (**g_554) = l_1115[0][2][1];
                for (l_1089 = (-7); (l_1089 >= 27); l_1089 = safe_add_func_uint16_t_u_u(l_1089, 1))
                { 
                    uint32_t **l_1121[5][7] = {{&l_1039,&l_1039,&l_1039,&l_1039,&l_1039,(void*)0,(void*)0},{&l_1039,&l_1039,(void*)0,&l_1039,&l_1039,&l_1039,(void*)0},{&l_1039,&l_1039,&l_1039,&l_1039,&l_1039,&l_1039,(void*)0},{&l_1039,&l_1039,&l_1039,&l_1039,&l_1039,&l_1039,&l_1039},{&l_1039,&l_1039,(void*)0,&l_1039,&l_1039,(void*)0,&l_1039}};
                    uint32_t ***l_1120 = &l_1121[0][3];
                    uint32_t ****l_1119 = &l_1120;
                    int i, j;
                    (**g_170) |= (l_1118 == ((*l_1119) = (void*)0));
                    (**g_170) = (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(l_1126, 12)), 0xC5BC4188D0AF12EFLL));
                }
            }
            else
            { 
                int64_t l_1127 = 0L;
                int32_t l_1129 = 0x8EAF1A2DL;
                int32_t l_1133 = (-1L);
                int32_t l_1138[5][4][6] = {{{0xE21B291AL,1L,6L,1L,0xE21B291AL,0xE21B291AL},{0x42F12A08L,1L,1L,0x42F12A08L,0xE2E893E7L,0x42F12A08L},{0x42F12A08L,0xE2E893E7L,0x42F12A08L,1L,1L,0x42F12A08L},{0xE21B291AL,0xE21B291AL,1L,6L,1L,0xE21B291AL}},{{1L,0xE2E893E7L,6L,6L,0xE2E893E7L,1L},{0xE21B291AL,1L,6L,1L,0xE21B291AL,0xE21B291AL},{0x42F12A08L,1L,1L,0x42F12A08L,0xE2E893E7L,0x42F12A08L},{0x42F12A08L,0xE2E893E7L,0x42F12A08L,1L,1L,0x42F12A08L}},{{0xE21B291AL,0xE21B291AL,1L,6L,1L,0xE21B291AL},{1L,0xE2E893E7L,6L,6L,0xE2E893E7L,1L},{0xE21B291AL,1L,6L,1L,0xE21B291AL,0xE21B291AL},{0x42F12A08L,1L,1L,0x42F12A08L,0xE2E893E7L,0x42F12A08L}},{{0x42F12A08L,0xE2E893E7L,0x42F12A08L,1L,1L,0x42F12A08L},{0xE21B291AL,0xE21B291AL,1L,6L,1L,0xE21B291AL},{1L,0xE2E893E7L,6L,6L,0xE2E893E7L,1L},{0xE21B291AL,1L,6L,1L,0xE21B291AL,0xE21B291AL}},{{0x42F12A08L,1L,0x42F12A08L,6L,0xE21B291AL,6L},{6L,0xE21B291AL,6L,0x42F12A08L,0x42F12A08L,6L},{1L,1L,0x42F12A08L,0xE2E893E7L,0x42F12A08L,1L},{0x42F12A08L,0xE21B291AL,0xE2E893E7L,0xE2E893E7L,0xE21B291AL,0x42F12A08L}}};
                int i, j, k;
                ++l_1142;
                (*p_13) = l_1133;
                (**g_554) = p_15;
                (*p_15) = 0xF65BC5B5L;
                --l_1145;
            }
            for (l_1137 = 0; (l_1137 <= 0); l_1137 += 1)
            { 
                int16_t l_1148 = 5L;
                const uint64_t l_1178[1] = {0x3FF3E6DF539C30EFLL};
                int32_t l_1188 = (-1L);
                int32_t *l_1190 = &l_1135[2];
                int32_t l_1215 = 0x4A7C675CL;
                uint8_t l_1216 = 0x78L;
                int i;
                if (l_1148)
                { 
                    uint64_t *l_1164 = &g_801;
                    uint16_t ****l_1179[4] = {&g_726,&g_726,&g_726,&g_726};
                    int32_t l_1187 = (-3L);
                    int32_t l_1189 = 0x067C06C3L;
                    int i;
                    g_1149 = &g_85;
                    (*p_13) = (((*l_1039) = (p_14 >= (((safe_mod_func_int8_t_s_s(((((((0xF8L < (safe_add_func_int32_t_s_s((*g_171), ((safe_rshift_func_int8_t_s_s(((~(safe_add_func_int32_t_s_s((-1L), (!(l_1045[3] , ((((*l_1164) = (--(**g_417))) < ((-10L) >= (((safe_mod_func_int32_t_s_s((((*g_535) = (safe_mul_func_int8_t_s_s((p_14 ^ l_1148), 0x01L))) >= l_1136), g_89[0])) < 0x098E233AED533885LL) , p_14))) && l_1169[3][3])))))) > l_1112), g_1170)) & 0x8B1A69AEL)))) > p_14) == p_14) , g_10[1][1][0]) , 0xD60EL) , p_14), g_1171)) || 0xAEL) >= p_14))) || g_801);
                    l_1190 = ((*g_170) = p_13);
                }
                else
                { 
                    int16_t l_1209 = 0xE199L;
                    int32_t l_1211 = 0x9E20F12EL;
                    int32_t l_1212 = 0xB815D500L;
                    int32_t l_1213 = 0x3EE7DB9DL;
                    int32_t l_1214 = 0x07C2B808L;
                    int64_t *l_1225 = &g_934;
                    (**g_170) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((void*)0 != &g_9), (0x9C5A09B0L | ((safe_div_func_int16_t_s_s(((-2L) && (*p_16)), (safe_lshift_func_int8_t_s_u(p_14, 1)))) >= (safe_div_func_int32_t_s_s((((((safe_sub_func_uint32_t_u_u(((*l_1039) = (g_39 && (*g_9))), 0x6CB68A79L)) < 0x46L) && p_14) > 6L) || l_1045[0].f1), p_14)))))), p_14));
                    l_1210 = p_16;
                    l_1216--;
                    (*p_13) = (safe_div_func_uint8_t_u_u((((((l_1134 = p_14) ^ (safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((*l_1225) ^= (*l_1190)), (((((*l_1039) |= (p_14 ^ (255UL != 1L))) , p_14) || (safe_sub_func_uint64_t_u_u((func_23(((*g_170) = p_12), (*g_1206), p_12) , l_1214), (*l_1210)))) ^ 0x048E36F0L))), g_103))) >= p_14) , 0xEE44L) ^ 0x9314L), 0x2BL));
                }
                for (g_934 = 0; (g_934 <= 0); g_934 += 1)
                { 
                    int32_t **l_1241 = &l_1115[0][3][1];
                    uint32_t *l_1244 = (void*)0;
                    l_1246 ^= (safe_sub_func_int64_t_s_s((((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*g_171), ((((*l_1241) = p_12) == (((*l_1190) == ((&l_1180 == &l_1180) , (8L & ((g_1243[4] = (+((((0UL > 0UL) && 0x5DL) >= (-2L)) | l_1126))) >= l_1139)))) , p_13)) ^ (*l_1190)))), l_1085)), g_58[0][2][3])), 0x2990L)), (*l_1190))) && g_332.f1) , &g_322) == l_1244) < l_1245), p_14));
                    return l_1247;
                }
            }
        }
lbl_1252:
        for (g_382 = 1; (g_382 <= 4); g_382 += 1)
        { 
            const int8_t * const **l_1248 = (void*)0;
            struct S0 l_1251 = {0xCCL,0x08384A685409663ELL};
            int i;
            (***g_554) = l_1141[g_382];
            for (l_1137 = 3; (l_1137 >= 0); l_1137 -= 1)
            { 
                for (l_1112 = 0; (l_1112 <= 3); l_1112 += 1)
                { 
                    const int8_t * const ***l_1249 = &l_1248;
                    int32_t l_1250[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1250[i] = (-3L);
                    (*l_1249) = l_1248;
                    if (l_1169[(l_1137 + 2)][l_1112])
                        continue;
                    if (l_1245)
                        goto lbl_1252;
                    l_1250[0] = ((*p_13) = l_1169[(l_1137 + 1)][l_1112]);
                    (*p_12) = (*p_15);
                }
                return l_1251;
            }
        }
        --l_1255[2][0][1];
        return (*l_1048);
    }
    else
    { 
        struct S0 l_1273[3][4][4] = {{{{-8L,-2L},{9L,0x5160F94839A77076LL},{-8L,-2L},{0x90L,-1L}},{{9L,0x5160F94839A77076LL},{0x4AL,1L},{0xE0L,-10L},{7L,1L}},{{7L,1L},{-4L,0x29D9C6D1B040F6FELL},{0L,-1L},{0x4AL,1L}},{{0xC6L,0x81AB0CE62CD07902LL},{0L,-1L},{0L,-1L},{0xC6L,0x81AB0CE62CD07902LL}}},{{{7L,1L},{0x90L,-1L},{0xE0L,-10L},{-8L,-2L}},{{9L,0x5160F94839A77076LL},{-8L,-1L},{-8L,-2L},{0xBDL,0xA15ED3A2CF5F080BLL}},{{-8L,-2L},{0xBDL,0xA15ED3A2CF5F080BLL},{-2L,0x054358C4BE0E1842LL},{0xBDL,0xA15ED3A2CF5F080BLL}},{{0L,-1L},{-8L,-1L},{-4L,0x29D9C6D1B040F6FELL},{-8L,-2L}}},{{{-6L,0x620886D466265D7ELL},{0x90L,-1L},{0xBDL,0xA15ED3A2CF5F080BLL},{0xC6L,0x81AB0CE62CD07902LL}},{{-4L,0x29D9C6D1B040F6FELL},{0L,-1L},{0x4AL,1L},{0x4AL,1L}},{{-4L,0x29D9C6D1B040F6FELL},{-4L,0x29D9C6D1B040F6FELL},{0xBDL,0xA15ED3A2CF5F080BLL},{7L,1L}},{{-6L,0x620886D466265D7ELL},{0x4AL,1L},{-4L,0x29D9C6D1B040F6FELL},{0x90L,-1L}}}};
        int32_t *l_1274 = &l_1060;
        uint32_t ***l_1275 = (void*)0;
        int8_t *l_1276[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1276[i] = (void*)0;
        (*p_15) = ((((*l_1071) != ((safe_add_func_uint64_t_u_u(((*g_1058) >= ((safe_sub_func_int8_t_s_s((((l_1145 | p_14) , (safe_div_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s(l_1141[0], (func_23((((0L == ((!(--(**g_417))) < 4294967295UL)) || (*p_16)) , (void*)0), l_1273[1][2][3], l_1274) , 6UL))) || p_14) , (*p_15)) , l_1169[3][3]), (*l_1274))), l_1145)) , l_1275) != l_1275) < 0xAFC626E05EB0FB06LL) & l_1139), 1L))) < (*l_1274)), 0x33L)) <= 0x6505L)), (*l_1274))) , l_1276[0])) <= (*l_1274)) , l_1145);
    }
lbl_1680:
    (*p_15) &= l_1141[4];
    for (l_1085 = (-30); (l_1085 == (-22)); l_1085 = safe_add_func_uint8_t_u_u(l_1085, 5))
    { 
        const int32_t l_1300 = 0L;
        int32_t *l_1302 = &g_39;
        int32_t l_1309[2][3];
        uint32_t l_1316 = 0xC102EE31L;
        union U1 **l_1379 = (void*)0;
        int32_t l_1380 = 0xA33367F4L;
        int32_t l_1401[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint64_t **l_1423 = &g_418;
        int32_t * const *l_1429 = &l_1302;
        uint32_t l_1442 = 0x886A9F41L;
        uint8_t *l_1480 = &g_358;
        const int64_t ***l_1483 = &l_1481;
        const int64_t **l_1485 = &l_1482;
        const int64_t ***l_1484[2];
        int64_t **l_1488 = &g_115[1];
        int32_t *l_1502 = &l_1060;
        struct S0 **l_1539 = (void*)0;
        uint64_t l_1567 = 0xF8EA062953238D04LL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_1309[i][j] = 0xCC54664EL;
        }
        for (i = 0; i < 2; i++)
            l_1484[i] = &l_1485;
    }
    for (g_386 = 20; (g_386 >= 50); g_386 = safe_add_func_int16_t_s_s(g_386, 8))
    { 
        uint32_t l_1626 = 2UL;
        uint16_t l_1653 = 0xF816L;
        int32_t *l_1667 = &l_1060;
        struct S0 l_1725[6][2] = {{{0x7BL,0xCB9385C58B1A4457LL},{0x7BL,0xCB9385C58B1A4457LL}},{{0x7BL,0xCB9385C58B1A4457LL},{0x7BL,0xCB9385C58B1A4457LL}},{{0x7BL,0xCB9385C58B1A4457LL},{0x7BL,0xCB9385C58B1A4457LL}},{{0x7BL,0xCB9385C58B1A4457LL},{0x7BL,0xCB9385C58B1A4457LL}},{{0x7BL,0xCB9385C58B1A4457LL},{0x7BL,0xCB9385C58B1A4457LL}},{{0x7BL,0xCB9385C58B1A4457LL},{0x7BL,0xCB9385C58B1A4457LL}}};
        int32_t l_1750 = 0xAA861B38L;
        int32_t l_1752 = (-7L);
        int32_t l_1755 = 0x0936B374L;
        int32_t l_1756[2];
        int32_t l_1763 = 0xBC3E57BCL;
        uint8_t l_1765 = 5UL;
        uint32_t l_1781 = 18446744073709551615UL;
        union U1 l_1788 = {0xAE9F4483L};
        int32_t *l_1821 = &l_1756[1];
        int32_t *l_1822 = &g_331;
        int32_t *l_1823 = &l_1752;
        int32_t *l_1824 = (void*)0;
        int32_t *l_1825 = &l_1085;
        int32_t *l_1826[7] = {&l_1136,&l_1060,&l_1136,&l_1136,&l_1060,&l_1136,&l_1136};
        int32_t l_1828 = 0x75B83F0DL;
        int64_t l_1829 = 0L;
        uint16_t *l_1835[3];
        int32_t l_1871[1][4][2];
        uint32_t l_1872 = 0x30016D8FL;
        uint16_t l_1920[6][7] = {{0xEC0AL,65532UL,65532UL,0xEC0AL,65535UL,0x3890L,65535UL},{0xEC0AL,65532UL,65532UL,0xEC0AL,65535UL,0x3890L,65535UL},{0xEC0AL,65532UL,65532UL,0xEC0AL,65535UL,0x3890L,65535UL},{0xEC0AL,65532UL,65532UL,0xEC0AL,65535UL,0x3890L,65535UL},{0xEC0AL,65532UL,65532UL,0xEC0AL,65535UL,0x3890L,65535UL},{0xEC0AL,65532UL,65532UL,0xEC0AL,65535UL,0x3890L,65535UL}};
        uint64_t **l_1922[3][7] = {{&g_418,&g_418,&g_418,&g_418,(void*)0,&g_418,&g_418},{&g_418,&g_418,&g_418,&g_418,&g_418,&g_418,&g_418},{&g_418,&g_418,&g_418,&g_418,&g_418,&g_418,&g_418}};
        int64_t l_1963 = 0xFD9B1110A49DCC27LL;
        uint16_t l_1966[3];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1756[i] = 1L;
        for (i = 0; i < 3; i++)
            l_1835[i] = &l_1653;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1871[i][j][k] = 0xD55DA297L;
            }
        }
        for (i = 0; i < 3; i++)
            l_1966[i] = 0xB31FL;
        if (((safe_div_func_int16_t_s_s((l_1626 <= (*p_12)), (~3L))) , (p_14 != ((safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((((l_1626 != p_14) < 0x6742D5E14F7E7D4FLL) == p_14) >= l_1626), p_14)), (-8L))), 65535UL)), 1L)) , l_1626))))
        { 
            int8_t l_1636 = (-9L);
            int32_t ***l_1641 = &g_170;
            (*p_15) = l_1636;
            for (g_1170 = 0; (g_1170 >= (-19)); g_1170 = safe_sub_func_uint32_t_u_u(g_1170, 9))
            { 
                int8_t l_1648 = 0L;
                int32_t ****l_1654 = &g_969[0][1];
                int32_t *l_1662 = &l_1140[0][5][0];
                (*p_15) = ((safe_add_func_uint16_t_u_u(((((g_554 = l_1641) == ((*l_1654) = ((p_14 ^ ((((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_14 < l_1648), ((*l_1082) = (((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((l_1626 || ((*p_13) < (p_14 && p_14))) != g_116) >= l_1648) < 0xCDF3L) && (*g_535)), (-1L))), p_14)) | p_14) <= p_14)))), 2L)) & l_1653) , p_14) < 0x2FL)) , &g_170))) , 0x33673074EB863D11LL) > (**g_417)), 0x93BDL)) == p_14);
                (*p_15) = (safe_add_func_uint32_t_u_u((((void*)0 != &g_418) || (safe_rshift_func_uint8_t_u_s(0xC4L, (safe_mod_func_uint16_t_u_u(((!(1UL && ((*g_535) = (((((((*l_1662) |= (*p_15)) == (safe_div_func_int16_t_s_s(p_14, 0x9B03L))) & (-1L)) | (*g_1058)) > p_14) <= p_14)))) | l_1653), p_14))))), (*p_15)));
            }
        }
        else
        { 
            uint8_t l_1675 = 4UL;
            uint64_t *l_1688 = &g_1243[4];
            int32_t *l_1727 = &g_58[1][1][2];
            uint8_t l_1730 = 0UL;
            int32_t l_1731 = 5L;
            int32_t l_1732 = 0x6B06E705L;
            int32_t l_1739[6][2][1] = {{{7L},{0x93E1D41DL}},{{6L},{0x93E1D41DL}},{{7L},{(-1L)}},{{7L},{0x93E1D41DL}},{{6L},{0x93E1D41DL}},{{7L},{(-1L)}}};
            int64_t l_1751 = 8L;
            int8_t l_1762[5] = {9L,9L,9L,9L,9L};
            int32_t l_1780 = (-7L);
            struct S0 l_1787 = {0x6AL,0x5F3EA80E6549A03DLL};
            union U1 l_1793 = {0xEA934D04L};
            int32_t *l_1810 = (void*)0;
            int32_t *l_1811[5][4] = {{(void*)0,(void*)0,&l_1139,&l_1139},{(void*)0,(void*)0,&l_1139,&l_1139},{(void*)0,(void*)0,&l_1139,&l_1139},{(void*)0,(void*)0,&l_1139,&l_1139},{(void*)0,(void*)0,&l_1139,&l_1139}};
            int8_t l_1812[4][3][5] = {{{0L,(-10L),0x20L,0x20L,(-10L)},{7L,0xE4L,0x89L,0xE0L,0x0DL},{0L,(-10L),0x20L,0x20L,(-10L)}},{{7L,0xE4L,0x89L,0xE0L,0x0DL},{0L,(-10L),0x20L,0x20L,(-10L)},{7L,0xE4L,0x89L,0xE0L,0x0DL}},{{0L,(-10L),0x20L,0x20L,(-10L)},{7L,0xE4L,0x89L,0xE0L,0x0DL},{0L,(-10L),0x20L,0x20L,(-10L)}},{{7L,0xE4L,0x89L,0xE0L,0x0DL},{0L,(-10L),0x20L,0x20L,(-10L)},{7L,0xE4L,0x89L,0xE0L,0x0DL}}};
            int i, j, k;
            for (g_801 = 0; (g_801 == 58); g_801 = safe_add_func_int8_t_s_s(g_801, 6))
            { 
                int32_t *l_1668 = (void*)0;
                int32_t *l_1669 = &g_331;
                int32_t *l_1670 = &g_18;
                int32_t *l_1671 = &l_1136;
                int32_t *l_1672 = &g_89[1];
                int32_t *l_1673 = &l_1140[0][2][0];
                int32_t *l_1674[6][4][1] = {{{&g_89[0]},{&l_1060},{&g_89[0]},{&g_18}},{{&l_1134},{&g_18},{&g_89[0]},{&l_1060}},{{&g_89[0]},{&g_18},{&l_1134},{&g_18}},{{&g_89[0]},{&l_1060},{&g_89[0]},{&g_18}},{{&l_1134},{&g_18},{&g_89[0]},{&l_1060}},{{&g_89[0]},{&g_18},{&l_1134},{&g_18}}};
                union U1 *l_1682 = &g_1683;
                int i, j, k;
                (*l_1352) = l_1667;
                l_1675++;
                for (l_1134 = 9; (l_1134 <= 4); --l_1134)
                { 
                    union U1 **l_1681[5][4];
                    uint16_t l_1705 = 0UL;
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1681[i][j] = &l_1526;
                    }
                    if (g_1170)
                        goto lbl_1680;
                    if (g_801)
                        goto lbl_1503;
                    if ((*p_12))
                        break;
                    l_1682 = l_1526;
                    (*l_1673) ^= ((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((void*)0 == l_1688), ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((1L != ((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((*p_15) == ((((*g_535) ^= (((safe_lshift_func_uint16_t_u_s(p_14, 14)) ^ (-10L)) >= (*l_1667))) != p_14) && l_1705)), l_1705)), (-9L))) && l_1675)), p_14)), 255UL)) , p_14), (*l_1669))), 0xF071L)), 4)) , p_14))), 0xBFL)) >= 1UL);
                }
            }
            for (l_1145 = 8; (l_1145 == 7); l_1145 = safe_sub_func_uint32_t_u_u(l_1145, 5))
            { 
                int32_t *l_1726 = &l_1140[0][2][0];
                uint16_t *l_1728 = (void*)0;
                uint16_t *l_1729[5];
                int32_t l_1753 = (-6L);
                int32_t l_1754 = 0xA51D99A7L;
                int32_t l_1757 = 1L;
                int32_t l_1758 = (-1L);
                int32_t l_1759 = 0x5B9682E2L;
                int32_t l_1760[1];
                struct S0 * const l_1770 = &l_1725[4][0];
                const int8_t *l_1776 = (void*)0;
                int64_t *l_1779 = &l_1725[4][0].f1;
                int64_t *l_1782 = &g_332.f1;
                int32_t ***l_1794 = &g_170;
                int32_t **l_1795 = &g_995[4][2][0];
                int32_t **l_1796 = &g_995[4][2][0];
                int32_t **l_1797 = (void*)0;
                int32_t **l_1798 = &g_995[2][3][2];
                int i;
                for (i = 0; i < 5; i++)
                    l_1729[i] = &l_1400;
                for (i = 0; i < 1; i++)
                    l_1760[i] = 0x1E26120CL;
                for (g_934 = 28; (g_934 != 3); --g_934)
                { 
                    if (l_1675)
                        break;
                }
                (*l_1667) |= ((l_1730 |= ((((((safe_add_func_int16_t_s_s(((***l_1572) = (safe_mul_func_uint16_t_u_u((l_1675 , 0xC3C6L), (((safe_sub_func_int16_t_s_s((((*l_1688) = (p_14 , ((void*)0 != &l_1653))) || (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(((!((((l_1727 = p_13) == (void*)0) && 0x7F5E16F8L) == g_1003.f0)) < (*p_13)), 3)) , p_14), p_14))), 0x1580L)) > (*g_418)) == 65535UL)))), p_14)) , p_14) >= p_14) ^ l_1675) & l_1675) , (***g_1056))) >= (*g_728));
                for (l_1730 = 0; (l_1730 <= 4); l_1730 += 1)
                { 
                    int32_t *l_1733 = &g_89[0];
                    int32_t *l_1734 = &l_1731;
                    int32_t *l_1735 = &l_1732;
                    int32_t *l_1736 = &l_1136;
                    int32_t *l_1737 = (void*)0;
                    int32_t *l_1738 = &l_1085;
                    int32_t *l_1740 = (void*)0;
                    int32_t *l_1741 = (void*)0;
                    int32_t *l_1742 = (void*)0;
                    int32_t *l_1743 = &l_1739[2][0][0];
                    int32_t *l_1744 = &g_1564;
                    int32_t *l_1745 = &l_1134;
                    int32_t *l_1746 = &l_1732;
                    int32_t *l_1747 = &g_18;
                    int32_t *l_1748 = &g_1170;
                    int32_t *l_1749[6];
                    int64_t l_1764 = 0x2BDBFF14082D540ELL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1749[i] = (void*)0;
                    ++l_1765;
                    if (l_1732)
                        continue;
                    return (*g_1206);
                }
                (*l_1667) = (safe_div_func_uint32_t_u_u((l_1770 != ((*l_1726) , l_1048)), ((safe_mod_func_int64_t_s_s((((*p_15) = ((((p_14 || ((*l_1688)--)) , ((((**g_417) , (*l_1667)) , (((*l_1782) = ((((((+((*l_1779) = ((l_1777 = l_1776) != (*l_1071)))) , 0x245AL) > l_1780) ^ p_14) < p_14) , l_1781)) ^ p_14)) , 8UL)) >= p_14) < 0L)) ^ 0x339ED2D4L), (-2L))) & 9UL)));
                if (((l_1727 = &g_58[1][2][2]) != &l_1780))
                { 
                    uint8_t l_1807 = 0xD7L;
                    l_1807 ^= (safe_sub_func_uint8_t_u_u((((p_14 , (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((*p_12), 0x440584A7L)), p_14)), (*g_9)))) & (p_14 >= 8L)) || 18446744073709551615UL), p_14));
                    return l_1787;
                }
                else
                { 
                    (**g_554) = (void*)0;
                    return (*l_1048);
                }
            }
            (*l_1667) = ((((safe_mod_func_int32_t_s_s((l_1812[0][0][2] |= ((*l_1667) , ((*p_13) = (*p_16)))), 1L)) | (*l_1667)) & ((*l_1082) = (safe_lshift_func_int8_t_s_u((*g_9), (safe_mul_func_int16_t_s_s((((p_14 | (+(((safe_sub_func_int32_t_s_s((l_1750 = 0x80CAB368L), (*l_1667))) != p_14) >= (-1L)))) | g_742) > (*l_1667)), (-1L))))))) ^ l_1820);
        }
        if (g_39)
            goto lbl_1680;
        l_1830--;
        if ((p_14 > (((l_1139 = ((**g_727) = (0xC6L || 0x2BL))) != ((*g_535) = ((*l_1180) != (*l_1180)))) < p_14)))
        { 
            struct S0 l_1836 = {-1L,1L};
            return l_1836;
        }
        else
        { 
            uint32_t l_1844 = 0UL;
            struct S0 l_1846 = {0x1FL,0xA202DCB63B3E32A5LL};
            int32_t l_1865 = 1L;
            int32_t l_1866[4][5][1] = {{{0x3A64CE23L},{(-1L)},{0x3A64CE23L},{(-10L)},{0x1F69DD73L}},{{(-10L)},{0x3A64CE23L},{(-1L)},{0x3A64CE23L},{(-10L)}},{{0x1F69DD73L},{(-10L)},{0x3A64CE23L},{(-1L)},{0x3A64CE23L}},{{(-10L)},{0x1F69DD73L},{(-10L)},{0x3A64CE23L},{(-1L)}}};
            int32_t l_1868 = 0xB38728A6L;
            int16_t l_1869 = 0L;
            uint16_t l_1883 = 0x9202L;
            uint64_t l_1977 = 0x4BFE741657222E0DLL;
            int i, j, k;
            for (g_39 = 0; (g_39 <= 4); g_39 += 1)
            { 
                const uint16_t ***** const l_1837 = &g_1055;
                struct S0 l_1845 = {-9L,4L};
                (*l_1822) &= ((*p_12) = (*p_15));
                if ((*p_12))
                { 
                    struct S0 l_1843 = {-7L,-1L};
                    int i, j;
                    l_1838 = l_1837;
                    (*p_12) &= (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((**l_1071) |= (l_1843 , l_1844)), 1)), (l_1845 , (*l_1822))));
                    if ((*p_12))
                        continue;
                }
                else
                { 
                    return l_1846;
                }
                if ((*p_16))
                    continue;
                for (l_1845.f1 = 3; (l_1845.f1 >= 0); l_1845.f1 -= 1)
                { 
                    uint8_t *l_1857 = &g_1171;
                    uint8_t *l_1858 = (void*)0;
                    uint8_t *l_1859 = (void*)0;
                    uint8_t *l_1860 = &g_920;
                    int32_t l_1864 = 0x54FCE1DFL;
                    (*l_1821) &= ((~((((safe_lshift_func_int16_t_s_u(p_14, 2)) && (((((safe_sub_func_uint8_t_u_u((p_14 == (safe_add_func_uint8_t_u_u(((((safe_unary_minus_func_uint8_t_u(((*l_1860) = ((*l_1857) = 250UL)))) , 0x7F078346L) | (((!(**g_417)) != (0xFA2F57F7L > ((*l_1825) = (safe_sub_func_uint16_t_u_u(5UL, 0L))))) , 0xD7CC04E0L)) , 0xC0L), (*g_9)))), l_1845.f1)) , (*g_418)) >= p_14) , l_1864) != (*g_728))) , l_1845.f0) , 0x089226D9L)) || l_1845.f1);
                    (*g_170) = p_13;
                    (*l_1352) = p_13;
                    (*g_170) = (*g_170);
                }
            }
            ++l_1872;
            for (l_1134 = (-12); (l_1134 > 21); l_1134++)
            { 
                int64_t l_1879[5][2][2] = {{{0x897B388C3829DCF8LL,0x897B388C3829DCF8LL},{0x897B388C3829DCF8LL,0x5A1D1EC0C8E3DFCBLL}},{{0xFAC3AD689EF5CBAELL,0xE2EA2034FFCF6F00LL},{0x5A1D1EC0C8E3DFCBLL,0xE2EA2034FFCF6F00LL}},{{0xFAC3AD689EF5CBAELL,0x5A1D1EC0C8E3DFCBLL},{0x897B388C3829DCF8LL,0x897B388C3829DCF8LL}},{{0x897B388C3829DCF8LL,0x5A1D1EC0C8E3DFCBLL},{0xFAC3AD689EF5CBAELL,0xE2EA2034FFCF6F00LL}},{{0x5A1D1EC0C8E3DFCBLL,0xE2EA2034FFCF6F00LL},{0xFAC3AD689EF5CBAELL,0x5A1D1EC0C8E3DFCBLL}}};
                uint8_t l_1880 = 0x78L;
                int i, j, k;
                for (g_103 = 0; (g_103 > 46); g_103 = safe_add_func_int32_t_s_s(g_103, 7))
                { 
                    --l_1880;
                    (*p_15) = (*p_16);
                }
                if ((*p_12))
                    break;
            }
            for (l_1868 = 1; (l_1868 >= 0); l_1868 -= 1)
            { 
                const uint32_t l_1890 = 5UL;
                struct S0 l_1895 = {-10L,0L};
                uint16_t *l_1900 = &l_1883;
                int64_t *l_1905 = &l_1846.f1;
                int8_t *** const l_1948 = &l_1071;
                int32_t * const l_1951 = &l_1865;
                int32_t l_1965[5];
                union U1 l_1969 = {0x587DD8A8L};
                int i;
                for (i = 0; i < 5; i++)
                    l_1965[i] = 3L;
                l_1883--;
                if (((*p_12) = ((safe_unary_minus_func_int64_t_s(((safe_lshift_func_uint8_t_u_s(p_14, ((*l_1825) = (*l_1821)))) && ((+(l_1890 && (safe_sub_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u((l_1895 , ((safe_mod_func_uint64_t_u_u(((&l_1653 == l_1900) ^ (((*l_1905) = ((safe_lshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(0x1FA5L, (****g_1055))) ^ (*p_13)) != (*p_13)), (*g_1058))) || (**g_417))) < l_1883)), p_14)) ^ g_920)), p_14)) == 0UL) >= p_14), 0x7683D6F9AF465B79LL)))) & (-1L))))) | p_14)))
                { 
                    uint8_t *l_1910 = (void*)0;
                    uint8_t *l_1911 = &l_1788.f2;
                    uint64_t ***l_1921[1][1][6];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_1921[i][j][k] = &g_417;
                        }
                    }
                    (*l_1822) ^= 0x7A9B4DC3L;
                    (*l_1352) = ((*g_170) = ((((safe_div_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(((*l_1911) = g_331), (safe_div_func_int32_t_s_s((p_14 , l_1869), (safe_mul_func_uint16_t_u_u(0x88EDL, l_1895.f1)))))) & (safe_add_func_int32_t_s_s(((*l_1048) , (safe_sub_func_int16_t_s_s(l_1895.f1, l_1920[3][6]))), p_14))) == 0x29D13A098F56B484LL), 0x45F1B3E48846D5D8LL)) && (*l_1821)) <= p_14) , p_12));
                    if ((*p_15))
                        continue;
                    if ((*g_171))
                        continue;
                    (*l_1667) &= ((*p_13) = ((l_1922[1][4] = &g_418) == (void*)0));
                }
                else
                { 
                    uint32_t l_1925 = 18446744073709551615UL;
                    int32_t *l_1927 = (void*)0;
                    int32_t *l_1928 = &g_58[0][2][2];
                    uint16_t ****l_1945 = (void*)0;
                    int8_t ***l_1949 = &l_1071;
                    struct S0 *l_1962[3];
                    int32_t l_1964 = 0xFF056133L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1962[i] = &g_1003;
                    (**g_554) = p_12;
                    (*p_12) = ((safe_mul_func_int16_t_s_s(0L, (((*l_1900) ^= (*g_728)) & (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(4L, ((*l_1082) ^= (!((***l_1572) |= ((~(safe_mul_func_uint8_t_u_u((((l_1846.f0 ^ (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((func_27((l_1945 != ((((safe_mul_func_uint64_t_u_u((l_1948 == l_1949), 0UL)) == g_1950) != p_14) , (*l_1838))), (**g_554), l_1951, p_14) , 0x7CL), (*l_1825))), (-9L)))) <= (*l_1951)) && (*l_1822)), g_414[0]))) , l_1925)))))), 0xE8L)), 0x75AE8A7EL))))) ^ p_14);
                    (*l_1823) ^= (((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_16), 0xFC90B48BL)), (safe_mul_func_int16_t_s_s((6UL | (safe_rshift_func_int8_t_s_u(8L, 2))), (safe_lshift_func_int16_t_s_u(((*p_12) > ((void*)0 != l_1962[1])), (****g_1055))))))) , p_14) ^ p_14);
                    --l_1966[1];
                    (**g_554) = (l_1969 , p_15);
                }
                for (l_1895.f1 = 0; (l_1895.f1 <= 1); l_1895.f1 += 1)
                { 
                    int32_t *l_1970 = &g_58[0][1][3];
                    int i, j, k;
                    (*l_1825) = g_10[l_1895.f1][(l_1868 + 1)][l_1895.f1];
                    (*l_1951) |= ((((0x78F7D526C5BFA9AFLL && 0xDFA431AE96833C84LL) < p_14) == ((((*l_1970) &= (-1L)) , (((safe_mod_func_uint16_t_u_u(((*l_1900) = p_14), (p_14 || ((g_10[1][1][1] , l_1973) == (void*)0)))) | 0x02079F4DL) < p_14)) , p_14)) <= g_10[l_1895.f1][(l_1868 + 1)][l_1895.f1]);
                }
                for (g_1611 = 0; (g_1611 <= 0); g_1611 += 1)
                { 
                    int32_t l_1974 = 1L;
                    int32_t l_1975 = 1L;
                    int32_t l_1976[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1976[i] = 0L;
                    if (g_56[(g_1611 + 2)][g_1611][(g_1611 + 4)])
                        break;
                    ++l_1977;
                }
            }
        }
    }
    return (*l_1048);
}



static int64_t  func_19(union U1  p_20, uint32_t  p_21, int8_t * p_22)
{ 
    int32_t l_355 = 1L;
    uint16_t *l_356 = &g_103;
    uint8_t *l_357 = &g_358;
    int32_t *l_359 = &l_355;
    int32_t l_387 = (-5L);
    int64_t l_410 = 7L;
    int32_t l_463[1];
    int32_t l_465 = 0xA298D611L;
    int32_t l_468 = (-1L);
    int32_t l_469 = 0xAB86F942L;
    uint32_t *l_485[3];
    uint32_t **l_484[4][5][7] = {{{&l_485[2],&l_485[2],&l_485[2],(void*)0,&l_485[2],&l_485[2],(void*)0},{&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0]},{&l_485[2],(void*)0,(void*)0,&l_485[2],&l_485[2],&l_485[2],&l_485[2]},{&l_485[1],&l_485[2],&l_485[2],&l_485[2],&l_485[1],&l_485[2],&l_485[2]},{&l_485[2],&l_485[2],(void*)0,(void*)0,&l_485[2],&l_485[2],&l_485[2]}},{{&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0]},{&l_485[2],(void*)0,&l_485[2],&l_485[2],&l_485[2],&l_485[2],(void*)0},{&l_485[1],&l_485[2],&l_485[2],&l_485[2],&l_485[1],&l_485[2],&l_485[2]},{&l_485[2],&l_485[2],&l_485[2],(void*)0,&l_485[2],&l_485[2],(void*)0},{&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0]}},{{&l_485[2],(void*)0,(void*)0,&l_485[2],&l_485[2],&l_485[2],&l_485[2]},{&l_485[1],&l_485[2],&l_485[2],&l_485[2],&l_485[1],&l_485[2],&l_485[2]},{&l_485[2],&l_485[2],(void*)0,(void*)0,&l_485[2],&l_485[2],&l_485[2]},{&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0]},{&l_485[2],(void*)0,&l_485[2],&l_485[2],&l_485[2],&l_485[2],(void*)0}},{{&l_485[1],&l_485[2],&l_485[2],&l_485[2],&l_485[1],&l_485[2],&l_485[2]},{&l_485[2],&l_485[2],&l_485[2],(void*)0,&l_485[2],&l_485[2],(void*)0},{&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0],&l_485[2],&l_485[0]},{&l_485[2],(void*)0,(void*)0,&l_485[2],&l_485[2],&l_485[2],&l_485[2]},{&l_485[1],&l_485[2],&l_485[2],&l_485[2],&l_485[1],&l_485[2],&l_485[2]}}};
    struct S0 l_499[4][5][2] = {{{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}}},{{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}}},{{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}}},{{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}},{{0x61L,0xD6AFCB41300F9F50LL},{0x61L,0xD6AFCB41300F9F50LL}}}};
    int32_t l_503 = 0xDC57BA03L;
    uint32_t l_511 = 0xD2BBCD76L;
    uint64_t *l_555 = &g_56[3][0][4];
    int32_t l_570 = 0x8EA76DFCL;
    int32_t l_572 = 0x297C589CL;
    int16_t l_621 = 0x584DL;
    uint8_t l_622 = 2UL;
    uint64_t l_656 = 0x368AB13BBE76C4A3LL;
    uint8_t l_700 = 0xFDL;
    uint64_t l_701[7][5] = {{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL},{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL},{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL},{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL},{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL},{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL},{18446744073709551614UL,18446744073709551614UL,4UL,2UL,4UL}};
    uint16_t **l_724 = &l_356;
    uint16_t ***l_723 = &l_724;
    int32_t l_806 = 0x4485FDD4L;
    union U1 *l_817 = &g_85;
    uint32_t l_840 = 0UL;
    const int32_t **l_929 = &g_475;
    const int32_t ***l_928 = &l_929;
    int32_t ** const *l_930[2];
    uint64_t l_935 = 0xF266C6321B78B7DELL;
    int8_t l_956 = 0x8AL;
    int32_t ***l_968 = &g_170;
    const int8_t l_976 = 0x76L;
    uint32_t l_1032 = 1UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_463[i] = 0xD5F31303L;
    for (i = 0; i < 3; i++)
        l_485[i] = &g_386;
    for (i = 0; i < 2; i++)
        l_930[i] = (void*)0;
    if (((*l_359) = ((safe_rshift_func_int16_t_s_s((p_20.f0 , 0L), (0x59E7A37148D7FA94LL == (((((*l_357) |= ((safe_mod_func_uint64_t_u_u(((((safe_lshift_func_int8_t_s_u(0L, 6)) >= (safe_mul_func_int16_t_s_s((p_20.f3 & ((*l_356) |= (safe_sub_func_uint32_t_u_u(0xA723FE81L, ((*g_171) = (safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((p_20.f4 ^ l_355), 2)), p_20.f4))))))), g_10[2][0][1]))) >= g_85.f2) , 18446744073709551610UL), 0x635562E8DBA7CDB1LL)) , 0x89L)) | 0xDAL) == 65535UL) <= g_116)))) >= l_355)))
    { 
        int16_t *l_363[7][4] = {{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364,&g_364}};
        int32_t l_380 = 0xAEED038FL;
        int32_t l_381 = (-1L);
        int32_t l_388[6][5][1] = {{{0L},{0xE7BD56AAL},{0xC7228BB2L},{(-1L)},{(-1L)}},{{0x3E2F1878L},{0x49ED9AD2L},{(-1L)},{0L},{0x36910076L}},{{0x3E2F1878L},{0x3E2F1878L},{0x36910076L},{0L},{(-1L)}},{{0x49ED9AD2L},{0x3E2F1878L},{(-1L)},{0x6D6A43C1L},{(-1L)}},{{0x3E2F1878L},{0x49ED9AD2L},{(-1L)},{0L},{0x36910076L}},{{0x3E2F1878L},{0x3E2F1878L},{0x36910076L},{0L},{(-1L)}}};
        int32_t l_389 = 9L;
        uint32_t *l_407 = &g_386;
        int i, j, k;
        if ((safe_unary_minus_func_int16_t_s(((*l_359) = (safe_mul_func_uint16_t_u_u(8UL, p_20.f2))))))
        { 
            uint32_t l_377 = 18446744073709551615UL;
            uint16_t *l_378[2];
            uint16_t *l_379 = (void*)0;
            uint32_t *l_383 = (void*)0;
            uint32_t *l_384 = &g_85.f0;
            uint32_t *l_385[4][2] = {{&g_85.f0,&g_386},{&g_386,&g_85.f0},{&g_386,&g_386},{&g_85.f0,&g_386}};
            int64_t l_390 = 0x6FB09E31F1BBC2B7LL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_378[i] = &g_103;
            (*l_359) = (((*g_9) = (safe_mod_func_int16_t_s_s((((((*l_359) ^ (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_380 = (func_27((l_389 ^= ((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((l_387 ^= (((*l_357) = (((((((0UL & (((*g_9) &= (l_377 > (l_378[0] != l_379))) > l_380)) != ((l_381 = (*l_359)) & p_20.f4)) ^ g_382) , &g_103) == (void*)0) <= (-1L)) <= l_377)) >= l_380)), l_380)), g_116)) , l_388[3][4][0]), (*l_359))) && (*p_22))), (*g_170), l_384, p_20.f0) , 0xDD6AL)), 4)), p_20.f2))) , p_20.f4) , 2UL) | (*l_359)), 0xE4B6L))) == p_20.f0);
            l_380 = p_20.f3;
            return l_390;
        }
        else
        { 
            uint32_t *l_409 = &g_386;
            uint32_t **l_408 = &l_409;
            int32_t l_411[5][7][2] = {{{0x0B130DB2L,(-2L)},{0xEA5B64EEL,0L},{0L,0x52AA74D2L},{0xBE675413L,0xEA5B64EEL},{1L,0x07C1AA73L},{(-2L),0x07C1AA73L},{1L,0xEA5B64EEL}},{{0xBE675413L,0x52AA74D2L},{0L,0L},{0xEA5B64EEL,(-2L)},{0x0B130DB2L,0xF02C2562L},{(-7L),0xE3D8B528L},{0x6D00C066L,(-7L)},{0x9F41EF78L,1L}},{{0x9F41EF78L,(-7L)},{0x6D00C066L,0xE3D8B528L},{(-7L),0xF02C2562L},{0x0B130DB2L,(-2L)},{0xEA5B64EEL,0L},{0L,0x52AA74D2L},{0xBE675413L,0xEA5B64EEL}},{{1L,0x07C1AA73L},{(-2L),0x07C1AA73L},{1L,0xEA5B64EEL},{0xBE675413L,0x52AA74D2L},{0L,0L},{0xEA5B64EEL,(-2L)},{0x0B130DB2L,0xF02C2562L}},{{(-7L),0xE3D8B528L},{0x6D00C066L,(-7L)},{0x9F41EF78L,1L},{0x9F41EF78L,(-7L)},{0x6D00C066L,0xE3D8B528L},{(-7L),0xF02C2562L},{0x0B130DB2L,(-2L)}}};
            const int64_t *l_413 = &g_414[0];
            const int64_t **l_412 = &l_413;
            const int64_t *l_416 = (void*)0;
            const int64_t **l_415 = &l_416;
            uint8_t l_429[5][5] = {{253UL,253UL,253UL,253UL,253UL},{0UL,0UL,0UL,0UL,0UL},{253UL,253UL,253UL,253UL,253UL},{0UL,0UL,0UL,0UL,0UL},{253UL,253UL,253UL,253UL,253UL}};
            int i, j, k;
            l_359 = &l_411[0][5][1];
            if ((l_411[1][6][0] < (&l_410 != ((*l_415) = ((*l_412) = &l_410)))))
            { 
                uint32_t *l_428[6];
                int32_t l_430[3];
                int i;
                for (i = 0; i < 6; i++)
                    l_428[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_430[i] = 8L;
                if ((0xA1C9E515L < (1L || g_116)))
                { 
                    uint64_t ***l_419 = &g_417;
                    (*l_419) = g_417;
                    (*l_359) = (safe_sub_func_uint16_t_u_u(((*l_356) = (((((safe_div_func_int16_t_s_s((0x89L | (4294967295UL <= ((p_20.f2 == (p_21 , l_388[2][2][0])) , (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((((((void*)0 == l_428[3]) >= l_429[4][0]) || (*l_359)) < 0UL), 0x9919L)) | 0x5A0EL), p_20.f0))))), p_20.f0)) < p_21) > 0x51L) == 0xFA1F3812L) & l_430[1])), 0x15DEL));
                    (*g_171) ^= (safe_sub_func_uint64_t_u_u((p_20.f3 > (+0x9BC4A577A698D87ALL)), l_411[4][6][1]));
                }
                else
                { 
                    uint16_t l_441 = 0x6906L;
                    struct S0 l_442 = {0x75L,0x546844F86216416DLL};
                    const uint64_t l_450 = 18446744073709551615UL;
                    (*g_171) ^= ((((*l_356) = l_411[0][5][1]) & ((l_430[2] = (!((g_449 |= (safe_mod_func_uint64_t_u_u((l_441 |= (--(*g_418))), ((g_79 ^ ((l_442 , ((((safe_div_func_uint32_t_u_u((g_364 || (p_20.f0 <= (safe_sub_func_uint32_t_u_u((*l_359), ((safe_rshift_func_int8_t_s_u(((*g_9) = 0xEAL), 2)) != l_381))))), (*l_359))) | l_442.f0) & 0xC4C7L) & 0x7CD3711BL)) == g_58[1][2][2])) && 2L)))) >= l_450))) >= l_381)) && p_20.f3);
                    return l_442.f1;
                }
                return l_429[1][4];
            }
            else
            { 
                int32_t l_462 = (-1L);
                int32_t l_466 = 1L;
                int32_t l_467[3];
                uint16_t l_470[6][3][6] = {{{0UL,0x9AC8L,0xD06BL,0x7200L,0xD06BL,0x9AC8L},{0x57D6L,8UL,1UL,1UL,0x9AC8L,0UL},{65528UL,0xF227L,0x7200L,1UL,1UL,0xD06BL}},{{1UL,0xF227L,65535UL,0x9AC8L,0x9AC8L,65535UL},{8UL,8UL,0xF227L,0xA0D4L,0xD06BL,0UL},{0xD890L,0x9AC8L,0x86D2L,65528UL,65527UL,0xF227L}},{{1UL,0xD890L,0x86D2L,0UL,8UL,0UL},{0xF227L,0UL,0xF227L,0UL,65535UL,65535UL},{0UL,65535UL,65535UL,65527UL,0x57D6L,0xD06BL}},{{0xA0D4L,65535UL,0x7200L,65527UL,0UL,0UL},{0UL,1UL,8UL,0xF227L,0xA0D4L,0xD06BL},{0x57D6L,1UL,0xD890L,65535UL,1UL,0UL}},{{0UL,0x86D2L,1UL,0x7200L,1UL,65527UL},{0xA0D4L,1UL,0xF227L,1UL,0xA0D4L,0x7200L},{1UL,8UL,0UL,0xD06BL,0xF227L,0UL}},{{0UL,65528UL,0xA0D4L,8UL,0x9AC8L,0UL},{0x7200L,65527UL,0UL,0UL,65527UL,0x7200L},{0x9AC8L,65535UL,0xF227L,1UL,1UL,65527UL}}};
                int32_t *l_474 = &l_389;
                int16_t *l_482 = &g_364;
                int16_t **l_483 = &l_363[1][2];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_467[i] = 0xFF966D2FL;
                (*g_170) = &l_380;
                for (l_387 = 0; (l_387 <= 0); l_387 += 1)
                { 
                    int32_t *l_464[2];
                    union U1 l_479 = {0xBB492BCEL};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_464[i] = (void*)0;
                    l_470[4][2][3]++;
                    (*l_359) = (+(l_474 != (g_475 = (*g_170))));
                    (*l_359) = (safe_mod_func_int32_t_s_s((((0x4CB1L >= (g_10[4][1][0] , p_20.f2)) , func_32((*l_359), (*l_359), (l_479 , (safe_mod_func_uint16_t_u_u(p_20.f3, p_20.f3))))) == &l_389), (*l_474)));
                    (**g_170) = (l_407 != l_474);
                    if (p_21)
                        break;
                }
                (*g_170) = &l_380;
                (*g_171) = (((*l_483) = l_482) == l_356);
            }
        }
        return p_20.f4;
    }
    else
    { 
        uint32_t ***l_486 = &l_484[1][2][5];
        struct S0 l_497 = {0xD1L,-9L};
        int32_t *l_498 = &l_387;
        int32_t l_502[2][2] = {{8L,8L},{8L,8L}};
        union U1 l_544[7][7] = {{{0x867F97A3L},{1UL},{1UL},{0x867F97A3L},{0UL},{0x867F97A3L},{1UL}},{{4294967295UL},{4294967295UL},{1UL},{0xE5819E90L},{1UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{1UL},{0xE5819E90L},{1UL},{4294967295UL},{4294967295UL},{1UL}},{{0x867F97A3L},{0UL},{0x867F97A3L},{1UL},{1UL},{0x867F97A3L},{0UL}},{{1UL},{0UL},{0xE5819E90L},{0xE5819E90L},{0UL},{1UL},{0UL}},{{0x867F97A3L},{1UL},{1UL},{0x867F97A3L},{0UL},{0x867F97A3L},{1UL}},{{4294967295UL},{4294967295UL},{1UL},{0xE5819E90L},{1UL},{4294967295UL},{4294967295UL}}};
        int32_t ***l_553 = &g_170;
        int64_t l_565[4][1][4] = {{{0x3113D8306B4D6962LL,1L,0x3113D8306B4D6962LL,0x3113D8306B4D6962LL}},{{1L,1L,(-1L),1L}},{{1L,0x3113D8306B4D6962LL,0x3113D8306B4D6962LL,1L}},{{0x3113D8306B4D6962LL,1L,0x3113D8306B4D6962LL,0x3113D8306B4D6962LL}}};
        uint16_t *l_588 = &g_382;
        int32_t l_699 = 3L;
        int8_t l_720 = 0x67L;
        uint16_t ****l_725[2][3] = {{&l_723,&l_723,&l_723},{&l_723,&l_723,&l_723}};
        uint64_t l_779 = 0UL;
        int32_t l_797 = 9L;
        uint64_t l_798 = 0xBA5F01E2818117FCLL;
        int i, j, k;
        (*l_486) = l_484[1][2][5];
        if ((safe_lshift_func_int16_t_s_u(((*g_9) , ((((safe_sub_func_int16_t_s_s(0L, (-10L))) < (safe_sub_func_uint64_t_u_u((*g_418), (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u((func_23((*g_170), (func_23(&l_469, l_497, l_498) , l_499[2][0][1]), &l_469) , 0xDFECL), 0x030CL)) < p_20.f4), p_20.f3))))) == p_20.f2) != 0x6FA16A528A8F9135LL)), 3)))
        { 
lbl_537:
            (**g_170) = p_20.f4;
        }
        else
        { 
            int32_t l_510[3];
            int32_t l_562 = 1L;
            int32_t l_563 = 1L;
            int32_t l_564 = (-1L);
            int32_t l_566 = (-8L);
            int32_t l_567 = 0xBB0D3B04L;
            int32_t l_568 = 9L;
            int32_t l_569[3][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            uint8_t l_573 = 0x64L;
            const int16_t *l_585 = &g_571[0];
            uint32_t * const * const l_598 = &l_485[2];
            int8_t l_602 = 0x3EL;
            uint8_t l_635 = 0UL;
            struct S0 l_647 = {0xC4L,0x098166F90121A118LL};
            uint16_t *l_653 = &g_449;
            int i, j;
            for (i = 0; i < 3; i++)
                l_510[i] = 0xC3D18147L;
            for (g_79 = (-29); (g_79 <= (-13)); ++g_79)
            { 
                int32_t *l_504 = &l_469;
                int32_t *l_505 = &g_89[0];
                int32_t *l_506 = &l_355;
                int32_t *l_507 = &l_355;
                int32_t *l_508 = &l_468;
                int32_t *l_509[2];
                int32_t l_533 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_509[i] = &g_89[0];
                l_511++;
                for (g_382 = 0; (g_382 >= 1); ++g_382)
                { 
                    int32_t l_516 = 0x52D2D010L;
                    int64_t *l_532 = &g_332.f1;
                    (*l_506) = ((l_516 && (++(*l_357))) , (safe_mod_func_int32_t_s_s((p_20.f4 == g_56[5][0][2]), (safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((g_386 = (p_20.f2 | 4294967290UL)) > ((safe_mul_func_int16_t_s_s(((~((*l_532) = (safe_mul_func_int16_t_s_s(((p_20.f0 && (safe_rshift_func_int16_t_s_u(0xE747L, p_20.f3))) >= (*l_508)), g_358)))) && p_20.f3), l_533)) <= 5UL)), 0x86F4L)) < (*l_359)), l_510[0])))));
                }
                (**g_170) ^= p_20.f2;
                for (g_364 = 0; (g_364 <= 1); g_364 += 1)
                { 
                    int16_t ***l_536 = &g_534[6];
                    (*l_536) = g_534[3];
                }
            }
            if (g_85.f2)
                goto lbl_537;
            if ((safe_add_func_uint8_t_u_u((*l_359), (safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((l_544[0][2] , (*g_417)) == (((((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((&g_382 != l_356), (((safe_rshift_func_uint16_t_u_u(((&g_170 != (g_554 = l_553)) | l_510[1]), g_332.f1)) < 18446744073709551615UL) & l_510[1]))) , (void*)0) == &g_58[0][0][1]), (-1L))) < l_510[0]), 1L)) | (*g_418)) | (*g_9)) , (**g_417)) , l_555)), 1L)) > 0x288E2104L), p_20.f0)))))
            { 
                int8_t l_556 = 0xFFL;
                int32_t *l_557 = &l_469;
                int32_t *l_558 = &g_39;
                int32_t *l_559 = &l_355;
                int32_t *l_560[4] = {&l_469,&l_469,&l_469,&l_469};
                int32_t l_561 = 0x99956FAEL;
                uint32_t **l_600 = &l_485[1];
                uint8_t *l_657 = &l_622;
                int64_t *l_676 = &g_116;
                uint32_t l_678 = 0xEE75DF08L;
                int i;
                for (l_468 = 2; (l_468 >= 0); l_468 -= 1)
                { 
                    return p_20.f0;
                }
                l_573--;
                if ((p_20.f2 >= ((*l_359) = (((-6L) >= (0x9EEBL <= ((+(((((l_497 , ((((*g_9) = (*l_359)) && l_562) || (+(safe_unary_minus_func_int32_t_s((safe_div_func_uint64_t_u_u(18446744073709551615UL, 0xAE5BF86D384F699ALL))))))) | 5L) < l_563) != p_20.f4) >= (*l_359))) || g_58[1][0][2]))) > (-2L)))))
                { 
                    int16_t * const l_589 = (void*)0;
                    union U1 l_599[5] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
                    int64_t *l_601[1][4];
                    int8_t l_609 = 0x84L;
                    int32_t l_620[7][7][5] = {{{6L,1L,0xE543EF3DL,1L,0x33276626L},{0xAF18F364L,6L,0x4846FCA4L,(-8L),0L},{0x5E385DD3L,0x7807090BL,0x33276626L,2L,0xD311205AL},{3L,1L,(-3L),0x4281363FL,0xC95D8021L},{(-1L),1L,1L,(-1L),0L},{0L,0xAF01D9B6L,0x0C6ECF6AL,0x00A836DAL,0L},{7L,(-1L),(-1L),9L,1L}},{{0x1AB7A69CL,0x072B6406L,1L,0x00A836DAL,0x2BCC67D8L},{(-1L),1L,(-1L),2L,0x93C3BF75L},{2L,6L,0x8D4D1664L,1L,0L},{0x5A10BF69L,0xFFF47331L,0x15571708L,1L,9L},{(-8L),0xCBC5D9E9L,0x29E58D00L,(-8L),(-1L)},{2L,0x8D4D1664L,(-1L),(-1L),0L},{0L,0x5E385DD3L,0x450EBDDAL,2L,0x4063B506L}},{{0L,0x4EFB83A7L,0x0C6ECF6AL,0x0B0502C3L,0xC95D8021L},{0x7807090BL,0L,(-8L),0L,(-1L)},{0L,(-1L),(-1L),(-1L),0xCBC5D9E9L},{1L,1L,0x2AEAE553L,0L,1L},{9L,5L,0x2AEAE553L,(-3L),6L},{(-1L),0x2BCC67D8L,(-1L),1L,(-9L)},{0xC95D8021L,(-1L),(-8L),0x00A836DAL,(-9L)}},{{0x4A69C9AAL,0xA2A38F60L,0x0C6ECF6AL,1L,0x4EFB83A7L},{(-3L),0xCF5396A2L,0x450EBDDAL,(-7L),0xB99DCBD1L},{0x817068B4L,1L,(-1L),0L,0x0F3BEE43L},{(-9L),1L,0x29E58D00L,2L,0L},{0x44BFD595L,0xC95D8021L,0x15571708L,4L,0x072B6406L},{0x106B966CL,0x1AB7A69CL,0x8D4D1664L,(-1L),0x8D4D1664L},{(-1L),(-1L),(-1L),0x1AB7A69CL,(-8L)}},{{0x4063B506L,0x072B6406L,0L,0x22EB51F1L,1L},{3L,0xD311205AL,(-9L),0x7D604364L,1L},{(-8L),0x072B6406L,0L,1L,(-1L)},{1L,(-1L),(-9L),1L,0xA2A38F60L},{(-1L),0x1AB7A69CL,0L,0L,1L},{0x2AEAE553L,0xC95D8021L,2L,1L,0L},{0L,1L,0x45CB97EDL,0L,(-6L)}},{{0x45710DC5L,1L,1L,1L,0x29E58D00L},{0x73B519CBL,0xCF5396A2L,0x5076785CL,0xC95D8021L,0xEF09CB9DL},{(-9L),0xA2A38F60L,0x106B966CL,7L,0xB8E18FB6L},{0L,(-1L),0L,0x360BD741L,0x39D1DE24L},{(-7L),0x2BCC67D8L,0x072B6406L,(-1L),0L},{0L,5L,(-8L),(-1L),0x450EBDDAL},{0L,1L,0x4063B506L,0xEF09CB9DL,0x00A836DAL}},{{(-7L),(-1L),0xC1325FCAL,0xA00F90D2L,0x0B0502C3L},{0L,0L,1L,0x29E58D00L,3L},{(-9L),0x4EFB83A7L,0x817068B4L,0xAF18F364L,0x22EB51F1L},{0x73B519CBL,0x5E385DD3L,2L,0L,0x904AE0E5L},{0x45710DC5L,0x8D4D1664L,(-4L),2L,0x39D1DE24L},{5L,0xC95D8021L,0L,0x45CB97EDL,(-7L)},{0xFFF47331L,0xB99DCBD1L,0L,(-1L),(-1L)}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_601[i][j] = &g_116;
                    }
                    (*l_557) &= (*g_171);
                    (*l_557) &= (((((safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s((0x9DL == (l_585 != ((safe_sub_func_int16_t_s_s((-10L), (&g_103 != l_588))) , l_589))), p_20.f0)) , p_20.f0), (*g_535))) == (**g_417)) | 1L) , p_20.f3) , (*l_498));
                    (**g_170) = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((*g_535), 3)) , 5L), ((*l_357) = (((*g_535) , ((l_602 = (1L || ((0xD5L && ((safe_div_func_uint64_t_u_u((l_598 == (l_599[4] , l_600)), 0xD10D6ED0084F1B78LL)) , (***l_553))) < (*l_559)))) , 0xB2L)) , l_566))));
                    l_620[1][3][4] = ((safe_div_func_uint8_t_u_u(((*l_357) ^= (safe_add_func_int64_t_s_s(((void*)0 != &l_561), ((safe_add_func_int64_t_s_s(l_609, ((safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s(1L, (safe_mod_func_uint8_t_u_u((((**g_417) = ((((*g_535) <= (safe_sub_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u((**g_417), (*l_557))) | (*l_359)), p_20.f3))) < p_20.f3) && 0x5E8488AAEEE257C0LL)) , g_10[1][2][1]), 0xD1L)))), l_566)) != (**g_170)))) && 6UL)))), g_382)) == 0x13L);
                    l_622++;
                }
                else
                { 
                    int64_t l_646[7];
                    int32_t *l_648 = &l_355;
                    uint16_t **l_654[1];
                    int8_t *l_655[7] = {&g_79,&l_602,&g_79,&g_79,&l_602,&g_79,&g_79};
                    int i;
                    for (i = 0; i < 7; i++)
                        l_646[i] = 9L;
                    for (i = 0; i < 1; i++)
                        l_654[i] = (void*)0;
                    l_648 = ((*g_170) = (**l_553));
                    (*l_359) |= (safe_lshift_func_int8_t_s_s((g_79 |= (func_27(p_20.f0, ((safe_add_func_uint16_t_u_u(((l_653 = l_653) != &g_449), ((*g_535) |= (((*l_648) , ((&g_418 != ((((*l_357) = 1UL) && (0x2E41L >= 0x8B80L)) , (void*)0)) | 0x6BL)) != 0xB06EL)))) , &l_469), (*g_170), p_20.f4) , (*g_9))), (*p_22)));
                    (*l_359) &= (*l_648);
                    return l_656;
                }
                if ((l_562 = ((l_657 == (((((safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(((*l_676) = (l_602 ^ (safe_div_func_uint16_t_u_u((18446744073709551614UL ^ (((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(9L, (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(0x44L, (safe_rshift_func_uint16_t_u_u(0UL, ((**g_417) | (***l_553)))))), 6)) ^ g_116), (*l_359))))), g_332.f0)) && g_89[0]) == p_20.f4)), 0xE482L)))), 0xC891416BC2B39ABCLL)) || p_20.f3), (*l_498))) && l_635) || p_20.f4) <= l_510[0]) , p_22)) , (*g_475))))
                { 
                    l_678 = (((void*)0 == l_600) <= ((0x51L | (0x1D6AL ^ (*g_535))) , ((~p_20.f2) == p_20.f0)));
                }
                else
                { 
                    return l_635;
                }
            }
            else
            { 
                const int32_t l_721 = (-3L);
                uint8_t l_722 = 246UL;
                (*l_498) = ((*l_359) &= (safe_unary_minus_func_int16_t_s(((*g_535) = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_701[0][0] = (l_700 &= (safe_sub_func_uint32_t_u_u(((*l_498) ^ 1L), ((***l_553) = ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((*g_9), 5)) || (0x1A9EL ^ (!(safe_sub_func_uint8_t_u_u(p_21, (((1UL < 65534UL) ^ (*l_498)) <= l_562)))))) , l_568), (*p_22))), l_699)), (*g_9))), 1L)) , p_20.f4)))))), g_382)), 2)) < 1UL)))));
                l_359 = (**g_554);
            }
        }
        g_726 = l_723;
        for (l_700 = 0; (l_700 != 0); l_700 = safe_add_func_int16_t_s_s(l_700, 4))
        { 
            int16_t l_756 = 1L;
            const int32_t ***l_778 = (void*)0;
            int32_t l_780 = 1L;
            int32_t *l_796[4][6][4] = {{{&l_469,(void*)0,(void*)0,&l_469},{&l_469,&l_780,&g_89[0],&g_89[0]},{(void*)0,&l_469,&g_331,(void*)0},{&l_387,&l_355,&l_387,(void*)0},{&g_331,&l_469,(void*)0,&g_89[0]},{&g_89[0],&l_780,&l_469,&l_469}},{{(void*)0,(void*)0,&l_469,&l_387},{&g_89[0],&l_468,(void*)0,&l_780},{&g_331,(void*)0,&l_387,(void*)0},{&l_387,(void*)0,&g_331,&l_780},{(void*)0,&l_468,&g_89[0],&l_387},{&l_469,(void*)0,(void*)0,&l_469}},{{&l_469,&l_780,&g_89[0],&g_89[0]},{(void*)0,&l_469,&g_331,(void*)0},{&l_387,&l_355,&l_387,(void*)0},{&g_331,&l_469,(void*)0,&g_89[0]},{&g_89[0],&l_780,&l_469,&l_469},{(void*)0,(void*)0,&l_469,&l_387}},{{&g_89[0],&l_468,(void*)0,&l_780},{&g_331,(void*)0,&l_387,(void*)0},{&l_387,(void*)0,&g_331,&l_780},{(void*)0,&l_468,&g_89[0],&l_387},{&l_469,(void*)0,(void*)0,&l_469},{&l_469,&l_780,&g_89[0],&g_89[0]}}};
            uint32_t **l_799 = &l_485[2];
            uint64_t *l_800 = (void*)0;
            int i, j, k;
            for (l_621 = 0; (l_621 > 19); l_621 = safe_add_func_uint16_t_u_u(l_621, 4))
            { 
                int8_t *l_740[1];
                int8_t **l_739 = &l_740[0];
                int32_t l_759 = 0x5E4A2F18L;
                int i;
                for (i = 0; i < 1; i++)
                    l_740[i] = &g_79;
                (**g_554) = &l_355;
                (**l_553) = func_32((safe_add_func_int64_t_s_s(((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_int16_t_s(0x1B21L)) >= p_21) , (*g_9)), 254UL)) <= (((safe_sub_func_int32_t_s_s((safe_add_func_int64_t_s_s(((!(((safe_sub_func_int8_t_s_s((+(((l_756 & (safe_add_func_int8_t_s_s((*g_9), 0x8CL))) <= 0xB4B0DA19L) || l_759)), (*p_22))) && (**g_170)) ^ g_18)) | (***g_726)), (-1L))), l_759)) == p_21) > (***l_553))), (*l_359))), g_449, g_39);
            }
            l_780 = ((***g_554) = (safe_rshift_func_int8_t_s_u(l_756, ((((*l_357) = (safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((*l_359) , (p_21 & 4L)) < (((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((*g_418) = ((((void*)0 == &l_700) | ((p_21 >= l_756) == p_20.f0)) , p_20.f0)) | p_21), 0xF06201F8L)) , (*g_9)), (*g_9))), 0x75A0C0500B048F8DLL)) , l_778) != l_778)), 5L)), p_20.f3)), l_779)), (***l_553))) ^ (-1L)), p_20.f4))) || 0L) >= p_21))));
            g_801 &= ((((((((safe_sub_func_uint8_t_u_u(((*l_498) >= 0x164917306B71F0FFLL), (!(2UL < (!(&l_779 != (((((safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((+((0L & (safe_lshift_func_int8_t_s_u((***l_553), ((l_797 = (g_331 = ((safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(0x5EA0L, (***l_553))) && 0x107E86CF50226E36LL) == (***g_726)), 7L)) != 0x2A1BL))) < p_20.f0)))) | l_798)) <= g_116), p_21)) >= 0x4BL), 0xE87CL)) > 1L) , &l_485[2]) != l_799) , l_800))))))) > p_21) < (*l_359)) & (*l_359)) , 4294967295UL) ^ g_571[0]) != (**g_170)) < g_742);
        }
        (*l_498) = ((*l_359) = (*g_171));
    }
    if ((l_499[3][0][0] , 0x8DB05ADDL))
    { 
        int64_t *l_813 = &g_332.f1;
        int32_t l_814 = 0xF456CE43L;
        uint16_t **l_815 = &g_728;
        int32_t *l_816[1][2][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_816[i][j][k] = &l_469;
            }
        }
        g_331 |= (+((*l_359) = ((safe_rshift_func_int16_t_s_u(((*g_535) = (~(g_332 , l_806))), (((safe_lshift_func_int16_t_s_s((((((*g_726) = (*l_723)) == ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((((((*l_359) , l_813) != (void*)0) , &l_485[2]) != (void*)0) , 0x837CEB4387F0D0FELL) < l_814), 4)), 3)) , l_815)) && l_814) != 255UL), (*l_359))) <= p_20.f2) < (*l_359)))) != l_814)));
    }
    else
    { 
        union U1 **l_818 = &l_817;
        int32_t l_827[2][5] = {{0xF3330F3AL,0xF3330F3AL,0xF3330F3AL,0xF3330F3AL,0xF3330F3AL},{(-8L),(-8L),(-8L),(-8L),(-8L)}};
        uint16_t l_849 = 0xAD27L;
        int64_t *l_884 = &l_410;
        uint64_t ***l_921[3];
        int32_t ***l_966 = &g_170;
        struct S0 *l_1000 = &l_499[2][0][1];
        uint64_t l_1005 = 0UL;
        int32_t l_1029[5];
        int32_t l_1031 = (-1L);
        int i, j;
        for (i = 0; i < 3; i++)
            l_921[i] = &g_417;
        for (i = 0; i < 5; i++)
            l_1029[i] = 3L;
        (*l_818) = l_817;
        for (g_386 = 0; (g_386 <= 19); g_386 = safe_add_func_int64_t_s_s(g_386, 1))
        { 
            uint32_t *l_835 = &l_511;
            uint64_t l_836 = 0x21F854CB96A740CBLL;
            int32_t l_837[7];
            int64_t **l_848 = &g_115[1];
            int32_t **l_850 = &g_171;
            int64_t l_853 = 6L;
            uint16_t l_886 = 5UL;
            int32_t *l_888[2][1];
            uint32_t l_889 = 0x332DC498L;
            uint64_t * const *l_923[4][5];
            uint64_t * const **l_922[7][6][5] = {{{&l_923[2][4],(void*)0,&l_923[0][0],&l_923[0][0],&l_923[0][0]},{&l_923[1][0],&l_923[0][0],&l_923[0][0],&l_923[0][3],&l_923[0][4]},{(void*)0,&l_923[0][3],&l_923[0][0],&l_923[0][0],&l_923[2][1]},{&l_923[1][0],&l_923[0][0],(void*)0,(void*)0,&l_923[0][0]},{&l_923[2][4],&l_923[2][2],&l_923[1][3],&l_923[0][0],&l_923[0][0]},{&l_923[0][2],&l_923[0][3],&l_923[0][0],&l_923[1][1],&l_923[2][4]}},{{&l_923[0][0],&l_923[0][0],&l_923[0][0],&l_923[0][0],(void*)0},{&l_923[0][0],&l_923[0][0],(void*)0,&l_923[0][0],&l_923[0][0]},{(void*)0,&l_923[0][0],&l_923[0][0],&l_923[1][1],&l_923[0][0]},{(void*)0,(void*)0,&l_923[1][1],&l_923[0][0],&l_923[1][1]},{&l_923[0][0],&l_923[0][0],&l_923[0][1],(void*)0,&l_923[0][0]},{&l_923[1][1],&l_923[0][4],(void*)0,&l_923[0][0],&l_923[2][4]}},{{(void*)0,&l_923[0][2],&l_923[1][1],&l_923[0][3],&l_923[0][0]},{&l_923[0][0],&l_923[1][1],&l_923[0][0],&l_923[0][0],&l_923[0][0]},{(void*)0,&l_923[0][0],&l_923[0][0],(void*)0,(void*)0},{(void*)0,&l_923[0][1],&l_923[2][2],(void*)0,&l_923[0][0]},{&l_923[0][0],&l_923[3][1],&l_923[1][0],(void*)0,&l_923[3][1]},{&l_923[0][0],(void*)0,&l_923[0][0],(void*)0,&l_923[3][1]}},{{&l_923[0][0],&l_923[0][0],&l_923[1][3],&l_923[0][2],&l_923[0][0]},{(void*)0,&l_923[0][2],&l_923[0][0],(void*)0,(void*)0},{&l_923[0][1],&l_923[1][0],&l_923[0][1],(void*)0,&l_923[0][0]},{&l_923[0][0],&l_923[0][0],(void*)0,(void*)0,&l_923[0][0]},{&l_923[0][0],&l_923[0][2],&l_923[0][0],&l_923[0][0],&l_923[0][0]},{(void*)0,&l_923[1][1],(void*)0,&l_923[0][0],(void*)0}},{{&l_923[3][1],&l_923[1][4],&l_923[0][1],&l_923[1][1],&l_923[1][3]},{&l_923[0][0],&l_923[3][1],&l_923[0][0],&l_923[0][0],&l_923[0][0]},{(void*)0,&l_923[0][0],&l_923[1][3],&l_923[1][4],&l_923[0][0]},{&l_923[0][0],&l_923[1][3],&l_923[0][0],&l_923[0][0],(void*)0},{&l_923[0][0],&l_923[1][1],&l_923[1][0],(void*)0,&l_923[0][0]},{(void*)0,&l_923[0][0],&l_923[2][2],&l_923[3][3],&l_923[1][1]}},{{&l_923[0][0],&l_923[0][0],&l_923[0][0],&l_923[0][0],&l_923[0][1]},{&l_923[3][1],&l_923[0][0],&l_923[0][0],(void*)0,(void*)0},{(void*)0,&l_923[0][0],&l_923[2][2],(void*)0,&l_923[1][1]},{&l_923[0][0],(void*)0,(void*)0,(void*)0,(void*)0},{&l_923[0][0],(void*)0,&l_923[0][3],&l_923[0][0],&l_923[3][1]},{&l_923[0][1],&l_923[1][1],&l_923[1][3],&l_923[3][3],&l_923[1][1]}},{{(void*)0,&l_923[3][3],(void*)0,(void*)0,&l_923[0][0]},{&l_923[0][0],&l_923[1][0],&l_923[0][0],&l_923[0][0],&l_923[0][0]},{&l_923[0][0],&l_923[1][0],(void*)0,&l_923[1][4],&l_923[1][1]},{&l_923[0][0],&l_923[3][3],&l_923[0][0],&l_923[0][0],&l_923[0][0]},{(void*)0,&l_923[1][1],&l_923[0][0],&l_923[1][1],(void*)0},{(void*)0,(void*)0,&l_923[0][1],&l_923[0][0],&l_923[0][0]}}};
            uint16_t ** const *l_944[2][4] = {{&g_727,&l_724,&l_724,&g_727},{&l_724,&g_727,&l_724,&l_724}};
            struct S0 l_949 = {0x18L,0x0E1CF879DB0CF9A7LL};
            struct S0 *l_1002 = &g_1003;
            int64_t ***l_1010 = &l_848;
            int8_t *l_1030 = &l_956;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_837[i] = 5L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_888[i][j] = &l_387;
            }
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                    l_923[i][j] = &l_555;
            }
            for (l_656 = 0; (l_656 <= 2); l_656 += 1)
            { 
                uint32_t l_826 = 0x9C32765AL;
                int32_t l_839 = 0L;
                int64_t **l_847 = (void*)0;
                int64_t ***l_846[7][6] = {{&l_847,(void*)0,&l_847,(void*)0,&l_847,&l_847},{(void*)0,(void*)0,(void*)0,(void*)0,&l_847,(void*)0},{(void*)0,&l_847,(void*)0,(void*)0,(void*)0,(void*)0},{&l_847,&l_847,(void*)0,&l_847,(void*)0,&l_847},{(void*)0,&l_847,&l_847,&l_847,&l_847,(void*)0},{&l_847,(void*)0,&l_847,(void*)0,&l_847,&l_847},{(void*)0,(void*)0,(void*)0,&l_847,&l_847,&l_847}};
                int32_t *l_887 = &l_572;
                int i, j;
                (*l_359) = ((((((g_10[1][2][1] , (g_85 , p_20.f0)) && p_20.f4) < ((*l_359) & (+((safe_mul_func_int16_t_s_s((*l_359), (safe_sub_func_int64_t_s_s(l_826, p_20.f4)))) ^ l_827[0][4])))) >= p_20.f3) > 1L) | g_331);
                g_331 |= (safe_mul_func_int16_t_s_s(((l_827[0][4] = ((~(((0x5AL && (safe_rshift_func_uint16_t_u_u((p_20.f2 , (((((((g_18 == (((**g_417) = (*g_418)) | (safe_mod_func_uint64_t_u_u((&g_386 == l_835), l_836)))) == 0L) != (*l_359)) , 9UL) > l_836) , 5UL) < (-8L))), l_827[0][3]))) >= (**g_170)) ^ p_20.f2)) | (*l_359))) , l_836), (*g_728)));
                for (l_468 = 0; (l_468 <= 1); l_468 += 1)
                { 
                    int32_t *l_838[6][6][4] = {{{&l_387,&l_827[0][2],&l_827[0][4],&l_837[4]},{&l_827[0][2],&l_387,&l_827[1][0],&l_837[4]},{&l_827[0][2],&l_570,&l_827[0][4],&l_827[0][4]},{&l_387,&l_465,&l_827[0][4],&l_827[0][4]},{&l_570,&l_570,&l_827[0][1],&l_837[4]},{&l_465,&l_387,&l_827[0][1],&l_837[4]}},{{&l_570,&l_827[0][2],&l_827[0][4],&l_827[0][1]},{&l_387,&l_827[0][2],&l_827[0][4],&l_837[4]},{&l_827[0][2],&l_387,&l_827[1][0],&l_837[4]},{&l_827[0][2],&l_570,&l_827[0][4],&l_827[0][4]},{&l_387,&l_465,&l_827[0][4],&l_827[0][4]},{&l_570,&l_570,&l_827[0][1],&l_837[4]}},{{&l_465,&l_387,&l_827[0][1],&l_837[4]},{&l_570,&l_827[0][2],&l_827[0][4],&l_827[0][1]},{&l_387,&l_827[0][2],&l_827[0][4],&l_837[4]},{&l_827[0][2],&l_387,&l_827[1][0],&l_837[4]},{&l_827[0][2],&l_570,&l_827[0][4],&l_827[0][4]},{&l_387,&l_465,&l_827[0][4],&l_827[0][4]}},{{&l_570,&l_570,&l_827[0][1],&l_837[4]},{&l_465,&l_387,&l_827[0][1],&l_837[4]},{&l_570,&l_827[0][2],&l_827[0][4],&l_827[0][1]},{&l_387,&l_827[0][2],&l_827[0][4],&l_837[4]},{&l_827[0][2],&l_387,&l_827[1][0],&l_837[4]},{&l_827[0][2],&l_570,&l_827[0][4],&l_827[0][4]}},{{&l_387,&l_465,&l_827[0][4],&l_827[0][4]},{&l_570,&l_570,&l_827[0][1],&l_837[4]},{&l_465,&l_387,&l_827[0][1],&l_837[4]},{&l_570,&l_827[0][2],&l_827[0][4],&l_827[0][1]},{&l_387,&l_827[0][2],&l_827[0][4],&l_837[4]},{&l_827[0][2],&l_387,&l_827[1][0],&l_837[4]}},{{&l_827[0][2],&l_570,&l_827[0][4],&l_827[0][4]},{&l_387,&l_465,&l_827[0][4],&l_827[0][4]},{&l_570,&l_570,&l_827[0][1],&l_837[4]},{&l_465,&l_387,&l_827[0][1],&l_837[4]},{&l_570,&l_827[0][2],&l_827[0][4],&l_827[0][1]},{&l_387,&l_827[0][2],&l_827[0][4],&l_837[4]}}};
                    struct S0 **l_843 = (void*)0;
                    struct S0 *l_845 = &l_499[2][0][1];
                    struct S0 **l_844 = &l_845;
                    int i, j, k;
                    l_840++;
                    (*l_844) = (void*)0;
                    (**g_554) = (**g_554);
                }
                if ((((g_322 , (l_848 = &g_115[1])) != (void*)0) > l_849))
                { 
                    uint8_t l_860 = 0x9DL;
                    int32_t *l_861 = &l_837[4];
                    if (p_20.f3)
                        break;
                    (*l_850) = (**g_554);
                    (***g_554) = ((*l_861) &= (*g_171));
                    (*l_861) ^= (p_20.f3 == (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((*l_357) = 255UL), (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((8UL | ((l_827[1][1] , (((***g_726) &= (0xD945L == (l_849 | (safe_mod_func_int8_t_s_s((4294967295UL | (*l_359)), g_742))))) == p_20.f4)) && 1L)) || 1L), 7)), 0xC50FL)))) == p_20.f3), p_20.f3)))), (*p_22))));
                    (*l_861) = ((void*)0 != &p_22);
                }
                else
                { 
                    uint32_t l_885 = 0x88850C9DL;
                    l_886 = (l_885 = ((***g_554) = ((safe_sub_func_int64_t_s_s(p_20.f0, ((*l_555) ^= ((((((safe_mul_func_int8_t_s_s((*p_22), (safe_sub_func_int64_t_s_s((+(0x90B3243AF87AB820LL < ((**l_848) = (*l_359)))), p_21)))) == ((g_332 , l_884) != (void*)0)) , 0x193E72F5L) & (*l_359)) ^ p_21) , 1UL)))) , (**g_170))));
                }
                if (l_826)
                    continue;
                for (l_503 = 0; (l_503 <= 2); l_503 += 1)
                { 
                    l_887 = (*g_170);
                }
            }
            ++l_889;
            for (l_572 = (-29); (l_572 <= 24); l_572 = safe_add_func_uint16_t_u_u(l_572, 5))
            { 
                const uint64_t l_918[1] = {18446744073709551610UL};
                int32_t l_919 = 0L;
                const int32_t **l_927[3][5][7] = {{{(void*)0,&g_475,&g_475,(void*)0,&g_475,&g_475,(void*)0},{&g_475,(void*)0,&g_475,&g_475,(void*)0,&g_475,&g_475},{(void*)0,(void*)0,&g_475,(void*)0,(void*)0,&g_475,(void*)0},{(void*)0,&g_475,&g_475,(void*)0,&g_475,&g_475,(void*)0},{&g_475,(void*)0,&g_475,&g_475,(void*)0,&g_475,&g_475}},{{(void*)0,(void*)0,&g_475,(void*)0,(void*)0,&g_475,(void*)0},{&g_475,&g_475,&g_475,&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,(void*)0,&g_475,&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475,&g_475,&g_475,&g_475,&g_475}},{{&g_475,&g_475,&g_475,&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,(void*)0,&g_475,&g_475,(void*)0,&g_475},{&g_475,&g_475,&g_475,&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,&g_475,&g_475,&g_475,&g_475,&g_475},{&g_475,&g_475,(void*)0,&g_475,&g_475,(void*)0,&g_475}}};
                const int32_t ***l_926[2];
                int32_t ** const *l_932 = (void*)0;
                int32_t l_933[5][7][6] = {{{0x9F8C9900L,0L,0x9BF1F069L,0xE1C00DEAL,0x1FEE91AAL,0xDA62828CL},{0x470638F9L,(-1L),(-1L),0xDA62828CL,0xB4372D47L,0x1FEE91AAL},{1L,0x11542D79L,1L,1L,0x34998FCFL,1L},{0x11542D79L,(-7L),0x1C5B38F1L,(-1L),0x5B9E4A3AL,(-1L)},{0x43C4DB3DL,0x88F5C86FL,0xC3124D11L,0x1453040AL,7L,5L},{(-1L),0x5B9E4A3AL,0x626866F9L,(-6L),(-1L),1L},{(-9L),0xC3124D11L,5L,1L,4L,(-5L)}},{{0L,0x1453040AL,(-1L),0x34998FCFL,7L,0x11542D79L},{1L,1L,0x14F67445L,0L,0x55008A9DL,0x55008A9DL},{0x5007EDFFL,0x1BE3B023L,0x1BE3B023L,0x5007EDFFL,0x88F5C86FL,0x69CD5254L},{1L,0L,(-1L),0L,0xB4B00980L,0xB4372D47L},{7L,4L,0x1FEE91AAL,0L,0xB4B00980L,0L},{1L,0L,1L,0xEBFA17F5L,0x88F5C86FL,(-1L)},{0xDC3C00BAL,0x1BE3B023L,1L,(-5L),0x55008A9DL,(-1L)}},{{4L,1L,(-1L),0x9F8C9900L,7L,0L},{0L,0x1453040AL,0xEBFA17F5L,1L,4L,0xB4B00980L},{(-1L),0xC3124D11L,0x9F8C9900L,4L,(-1L),1L},{(-6L),0x5B9E4A3AL,0L,1L,7L,0xC3124D11L},{0L,0x88F5C86FL,0x34998FCFL,0xB4372D47L,0x5B9E4A3AL,(-1L)},{0x14F67445L,(-7L),0x04473D36L,(-9L),0x34998FCFL,(-3L)},{0xB4372D47L,0x11542D79L,0xDC3C00BAL,0x11542D79L,0xB4372D47L,0x0B131C47L}},{{(-5L),(-1L),(-7L),0x1453040AL,1L,0xB3EA4C17L},{0xB4B00980L,0x11542D79L,0xE1C00DEAL,(-1L),0x9F8C9900L,0xB3EA4C17L},{0xC3124D11L,0x1C9A9C1BL,(-7L),0L,0L,1L},{0x9F8C9900L,0x1C5B38F1L,4L,(-1L),0xD86746C9L,1L},{0L,7L,0x9F8C9900L,0xB4372D47L,0x1453040AL,(-5L)},{1L,0x9BF1F069L,(-1L),0xD86746C9L,(-1L),0x34998FCFL},{5L,1L,0x43C4DB3DL,1L,(-3L),0x1C5B38F1L}},{{(-1L),0L,0xB3EA4C17L,0x14F67445L,0x04473D36L,0x0B131C47L},{1L,0x1453040AL,0x04473D36L,7L,0x11542D79L,0x43C4DB3DL},{0L,0x55008A9DL,(-1L),1L,0x34998FCFL,0x1C9A9C1BL},{0xD86746C9L,0xC3124D11L,(-1L),(-1L),0xC3124D11L,0xD86746C9L},{0x9BF1F069L,0x4728874AL,0L,0x0B131C47L,4L,(-1L)},{0x88F5C86FL,1L,1L,0x470638F9L,(-5L),(-1L)},{0x88F5C86FL,(-1L),0x470638F9L,0x0B131C47L,0x1FEE91AAL,0L}}};
                int32_t l_977 = 5L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_926[i] = &l_927[2][4][6];
                if ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((*l_359), (-9L))) == (safe_lshift_func_int16_t_s_u(p_20.f3, (safe_mul_func_uint16_t_u_u(((**g_727) = ((p_20.f3 == (~((safe_sub_func_uint32_t_u_u((((((*l_835) = (+((l_919 &= ((safe_add_func_int64_t_s_s(p_20.f3, (safe_unary_minus_func_int64_t_s(((safe_rshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s((+0xFE24CCC2L), 0xBFL)) || p_20.f2), 5)) ^ l_827[1][0]))))) & l_918[0])) == 4294967295UL))) == 0xAF57C9BFL) , p_21) | g_920), (*g_475))) & 4294967286UL))) , (*g_728))), p_20.f3))))), 12)) , l_921[1]) != l_922[2][1][3]), 8UL)), 6L)))
                { 
                    int32_t ** const **l_931[5];
                    uint16_t ***l_942 = &l_724;
                    uint16_t ****l_943 = &l_723;
                    int8_t *l_954 = (void*)0;
                    int8_t *l_955 = &g_79;
                    uint8_t l_957 = 0x7DL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_931[i] = &l_930[0];
                    (*l_359) ^= (safe_rshift_func_int16_t_s_u(((l_928 = l_926[1]) != (l_932 = l_930[1])), 6));
                    l_935++;
                    (**g_170) = (((g_742 , (safe_mul_func_int8_t_s_s((*g_9), ((**l_850) , (~((+((((*l_943) = l_942) != l_944[0][0]) & (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((*l_955) ^= (((l_949 , (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u((func_27((p_21 ^ 8UL), (**g_554), (*g_170), p_20.f0) , g_18), 6)), p_21))) >= 0x760FADA446E86F43LL) , (*p_22))), (*g_9))), (**g_727))))) >= p_20.f3)))))) || 0x5DBF721CE10137DELL) & p_20.f0);
                    ++l_957;
                    (*l_359) = (l_919 |= (***g_554));
                }
                else
                { 
                    int32_t ****l_967[3][4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_967[i][j] = &l_966;
                    }
                    g_978[0][2] &= (((l_827[0][4] , ((!((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((~((g_554 = l_966) == (g_969[0][1] = l_968))), (safe_rshift_func_int8_t_s_u((*g_9), 1)))) , (g_386 || (l_977 = (safe_div_func_int32_t_s_s(((***l_968) = (**g_170)), ((((((*l_835) = ((((((safe_sub_func_uint16_t_u_u((((((*g_535) = (*g_535)) , (*p_22)) >= 0L) , (***g_726)), p_20.f3)) <= 0xA3EDF3C1D324B1C2LL) < p_21) && p_20.f4) , (*p_22)) & 0x99L)) ^ 0x0D84A7E0L) >= 4294967291UL) > 0xC39BL) & l_976)))))), (*g_475))) || (*g_475))) >= p_20.f2)) , (***l_966)) <= 0L);
                }
            }
            for (g_79 = 0; (g_79 > 27); g_79 = safe_add_func_int16_t_s_s(g_79, 1))
            { 
                uint8_t l_985 = 255UL;
                int32_t l_1004[2][4][2] = {{{0x2F242363L,0x2F242363L},{0x2F242363L,0x2F242363L},{0x2F242363L,0x2F242363L},{0x2F242363L,0x2F242363L}},{{0x2F242363L,0x2F242363L},{0x2F242363L,0x2F242363L},{0x2F242363L,0x2F242363L},{0x2F242363L,0x2F242363L}}};
                int64_t ***l_1009 = &l_848;
                int64_t ****l_1008[6] = {&l_1009,&l_1009,&l_1009,&l_1009,&l_1009,&l_1009};
                int i, j, k;
                for (g_332.f1 = 0; (g_332.f1 != (-14)); --g_332.f1)
                { 
                    int64_t l_983[6][1][3] = {{{1L,1L,1L}},{{0xFE396E2A33D3D256LL,0xFE396E2A33D3D256LL,0xFE396E2A33D3D256LL}},{{1L,1L,1L}},{{0xFE396E2A33D3D256LL,0xFE396E2A33D3D256LL,0xFE396E2A33D3D256LL}},{{1L,1L,1L}},{{0xFE396E2A33D3D256LL,0xFE396E2A33D3D256LL,0xFE396E2A33D3D256LL}}};
                    int32_t l_984 = 0x5CB75D41L;
                    uint64_t *l_990 = &l_701[0][0];
                    int32_t **l_991 = (void*)0;
                    int32_t **l_992 = (void*)0;
                    int32_t *l_994 = &l_503;
                    int32_t **l_993[4][7][7] = {{{&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994},{&l_994,&l_994,(void*)0,(void*)0,&l_994,&l_994,&l_994},{&l_994,&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994}},{{&l_994,&l_994,(void*)0,(void*)0,&l_994,&l_994,&l_994},{&l_994,&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994,(void*)0},{&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994},{&l_994,(void*)0,(void*)0,&l_994,&l_994,&l_994,(void*)0},{&l_994,&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994}},{{&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994,(void*)0},{&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994},{&l_994,(void*)0,(void*)0,&l_994,&l_994,&l_994,(void*)0},{&l_994,&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994},{&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994,(void*)0},{&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994}},{{&l_994,&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994},{&l_994,(void*)0,(void*)0,&l_994,&l_994,&l_994,(void*)0},{&l_994,&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994},{&l_994,(void*)0,&l_994,&l_994,&l_994,&l_994,(void*)0},{&l_994,&l_994,&l_994,&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994,&l_994,(void*)0,&l_994},{&l_994,(void*)0,(void*)0,&l_994,&l_994,&l_994,(void*)0}}};
                    struct S0 **l_1001 = &l_1000;
                    int i, j, k;
                    ++l_985;
                    (**l_850) &= (l_985 < ((*g_418) = (safe_sub_func_uint16_t_u_u(0x8E3BL, ((l_990 == ((l_888[0][0] != (g_995[4][2][0] = &l_503)) , &l_935)) , ((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(0xC8L, g_934)), 18446744073709551613UL)) <= p_20.f4))))));
                    l_1002 = ((*l_1001) = l_1000);
                    if (p_20.f3)
                        continue;
                }
                (*l_850) = (**l_966);
                ++l_1005;
                l_1004[1][2][1] ^= (***l_966);
                l_1010 = &l_848;
            }
            l_1031 = (p_21 || (safe_sub_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((((***l_966) = (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((*g_9), ((*l_1030) = (g_79 ^= (safe_lshift_func_uint8_t_u_u(((**l_850) != (safe_mod_func_int32_t_s_s(((((g_801 = (++(*g_418))) || (safe_mul_func_int8_t_s_s(((l_827[1][2] = (&g_995[4][2][0] == &g_995[1][4][4])) , (((p_20.f0 | (l_827[1][4] = ((p_20.f3 > (-1L)) && (***l_966)))) && (-4L)) >= (***g_726))), g_571[0]))) && 0UL) | l_1029[3]), 0x9D62A410L))), 3)))))), p_20.f3))) > p_20.f0) == 0xF6BA04B8L) <= l_1029[2]), g_571[0])) , 7L), (*p_22))) | p_20.f4) || (***g_726)) >= l_1005), (*g_535))));
        }
    }
    l_1032++;
    return p_20.f0;
}



static union U1  func_23(int32_t * p_24, struct S0  p_25, int32_t * p_26)
{ 
    int32_t *l_333 = &g_89[0];
    int32_t *l_334 = (void*)0;
    int32_t *l_335[2];
    int32_t l_336 = 1L;
    uint16_t l_337 = 0x3B77L;
    union U1 l_340[1] = {{0x638D83F1L}};
    int i;
    for (i = 0; i < 2; i++)
        l_335[i] = &g_89[0];
    --l_337;
    return l_340[0];
}



static struct S0  func_27(uint32_t  p_28, int32_t * p_29, int32_t * const  p_30, int16_t  p_31)
{ 
    int64_t l_328[1][1];
    int32_t ***l_329 = &g_170;
    int32_t *l_330 = &g_331;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_328[i][j] = 0xA18E2AD8C169C809LL;
    }
    (*l_330) = ((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(0xA6F84FC0L, (((*p_29) = (((l_328[0][0] , &g_170) == l_329) , (0x70D0L | 0L))) > (g_10[1][2][1] != g_322)))), g_116)) == 0x0163L);
    return g_332;
}



static int32_t * func_32(int16_t  p_33, int32_t  p_34, uint32_t  p_35)
{ 
    uint32_t l_36 = 0xDC6F79B3L;
    int8_t *l_44 = &g_10[0][2][1];
    int32_t l_101 = 6L;
    int64_t l_113 = 0x709D1F70EA76F415LL;
    int32_t l_114 = (-3L);
    uint32_t l_119 = 0x1C78AB42L;
    int32_t l_125 = 0x6540EC61L;
    int32_t l_127 = 0x84E37E41L;
    int32_t l_128 = 0L;
    int32_t l_130 = 0xD672FAF5L;
    int32_t l_131[5][1];
    uint16_t l_187 = 1UL;
    int32_t **l_316 = &g_171;
    uint32_t *l_321 = &g_322;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_131[i][j] = 0x7AC3CA6AL;
    }
    for (p_33 = 0; (p_33 <= 1); p_33 += 1)
    { 
        int32_t *l_37 = (void*)0;
        int32_t *l_38 = &g_39;
        uint32_t l_54 = 2UL;
        int8_t *l_98[2][3][1];
        struct S0 l_106 = {1L,0xC0CD63D7C5F07B86LL};
        int32_t l_122[4] = {0x21653139L,0x21653139L,0x21653139L,0x21653139L};
        uint8_t l_135 = 9UL;
        int32_t l_188 = 1L;
        int32_t * const **l_206 = (void*)0;
        uint16_t *l_214[1];
        int32_t *l_279 = &l_125;
        int32_t l_285 = 0x83E42A8CL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 1; k++)
                    l_98[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 1; i++)
            l_214[i] = &g_103;
        (*l_38) |= l_36;
        for (p_34 = 1; (p_34 >= 0); p_34 -= 1)
        { 
            union U1 l_59[4] = {{0x349A2DD3L},{0x349A2DD3L},{0x349A2DD3L},{0x349A2DD3L}};
            int32_t l_87 = 0xAED0E349L;
            int32_t l_129 = 7L;
            int32_t l_133 = 1L;
            const int32_t *l_169 = &l_59[1].f3;
            const int32_t **l_168 = &l_169;
            int32_t **l_173 = &l_38;
            struct S0 l_205 = {0x37L,1L};
            uint32_t l_277 = 4294967292UL;
            int32_t l_286 = 0x755F99B6L;
            int32_t l_287[1][3];
            int32_t *l_320 = &g_89[1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_287[i][j] = 0L;
            }
            if (((*l_38) = (0x0C3DA550E8F7CF8FLL | (-6L))))
            { 
                union U1 l_47 = {0x06C49A7EL};
                uint64_t *l_55 = &g_56[3][0][4];
                int32_t *l_57 = &g_58[1][2][2];
                const int8_t *l_74 = &g_10[1][2][1];
                int64_t *l_118 = &g_116;
                int32_t l_124 = 6L;
                int32_t l_126 = 0x1E809F82L;
                int32_t l_134 = 0x8EA3F6BEL;
                if (func_40(l_44, ((*l_57) = (((safe_div_func_int32_t_s_s((l_47 , p_34), (l_36 && (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((((*g_9) != (g_39 , ((((*l_55) = ((safe_lshift_func_int8_t_s_u(p_34, l_54)) , p_35)) || 0UL) != g_10[1][2][1]))) || p_34) >= g_10[1][2][1]), 0xCAE4L)), (*g_9)))))) ^ p_35) , p_35)), l_59[1]))
                { 
                    int8_t *l_77 = (void*)0;
                    int8_t *l_78 = &g_79;
                    int32_t l_80 = 0x785D54DBL;
                    uint8_t *l_86 = &l_59[1].f2;
                    int32_t *l_88 = &g_89[0];
                    uint16_t *l_102 = &g_103;
                    int32_t *l_104 = &l_87;
                    (*l_38) ^= (0UL < ((1L < ((l_74 != &g_10[1][2][0]) , ((*l_78) |= ((*l_44) = (safe_mul_func_uint8_t_u_u((g_56[6][0][4] < 5L), 0UL)))))) < l_80));
                    (*l_88) &= ((((*l_38) |= (l_36 , l_47.f2)) ^ ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u((g_10[1][2][1] <= (p_35 == ((*l_86) &= ((g_85 , l_80) ^ ((0x894B961AC8BEBE45LL != p_33) & l_36))))), p_35)) , p_33), l_87)) , g_58[0][0][1])) | 0x6EL);
                    l_101 = ((-1L) & ((*l_104) |= (safe_mul_func_int16_t_s_s((*l_38), ((*l_102) = (((*g_9) , 1L) != (((((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((void*)0 == l_98[0][2][0]) >= (safe_rshift_func_uint16_t_u_s(l_101, 3))) | (*l_38)), 1)), 0x7F1FL)), (*g_9))) >= 248UL) || 2UL) & (*l_88)) , p_33)))))));
                    return &g_18;
                }
                else
                { 
                    struct S0 l_105 = {0x96L,0xF5B2801F5D8E54FBLL};
                    int64_t **l_117[5][6] = {{&g_115[1],&g_115[0],&g_115[1],&g_115[0],&g_115[1],&g_115[0]},{&g_115[1],&g_115[0],&g_115[1],&g_115[0],&g_115[1],&g_115[0]},{&g_115[1],&g_115[0],&g_115[1],&g_115[0],&g_115[1],&g_115[0]},{&g_115[1],&g_115[0],&g_115[1],&g_115[0],&g_115[1],&g_115[0]},{&g_115[1],&g_115[0],&g_115[1],&g_115[0],&g_115[1],&g_115[0]}};
                    int32_t *l_120 = (void*)0;
                    int32_t *l_121 = &g_89[1];
                    int32_t *l_123[2];
                    int8_t l_132 = 6L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_123[i] = &l_122[0];
                    (*l_121) ^= (l_105 , (l_106 , ((!(safe_lshift_func_int16_t_s_s((((l_118 = (((((safe_mod_func_uint8_t_u_u(((+(p_33 >= g_39)) == (((g_10[1][2][1] && p_34) != ((p_34 < l_47.f4) < l_101)) , 0xCBBBBCA1L)), (*g_9))) <= l_113) || l_114) == p_35) , g_115[1])) == &g_116) , l_59[1].f3), l_105.f0))) < l_119)));
                    --l_135;
                    if (l_47.f4)
                        continue;
                    return l_121;
                }
            }
            else
            { 
                uint32_t l_157[7];
                int32_t l_185[4];
                uint16_t *l_195 = (void*)0;
                uint16_t *l_196 = &g_103;
                int32_t l_197[4];
                const uint8_t * const l_209 = &l_59[1].f2;
                int32_t *l_217 = &l_122[3];
                int32_t *l_242 = &l_197[0];
                uint64_t *l_243 = &g_56[3][0][4];
                uint32_t *l_244 = &l_157[0];
                int i;
                for (i = 0; i < 7; i++)
                    l_157[i] = 18446744073709551615UL;
                for (i = 0; i < 4; i++)
                    l_185[i] = (-1L);
                for (i = 0; i < 4; i++)
                    l_197[i] = 0xD1255F10L;
                for (l_127 = 0; (l_127 <= 1); l_127 += 1)
                { 
                    uint8_t *l_150 = &l_135;
                    int64_t *l_151 = &g_116;
                    int i, j, k;
                    g_89[1] = (g_10[(p_34 + 1)][l_127][p_33] >= ((*l_151) ^= (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(p_35, 9)) < ((((*l_150) |= (((0xAAL != (((g_58[1][2][2] , ((g_89[0] < (safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(0x28L, (safe_rshift_func_int8_t_s_u((((*l_38) = (((safe_sub_func_uint64_t_u_u((((((p_34 , 0xBB97L) && 4UL) <= g_85.f2) >= 0x16A1DD2CE5EEE56FLL) , g_79), (*l_38))) ^ 0UL) < g_89[0])) == p_35), 2)))) == 0xB982L), g_10[1][2][1]))) ^ 0xED1DAF1BL)) | (*g_9)) < 9UL)) , g_10[1][2][1]) >= (*g_9))) >= 0x33L) > 0xDA2CA1CAL)), 10))));
                }
                for (l_87 = 10; (l_87 < (-3)); --l_87)
                { 
                    int32_t *l_154 = &l_129;
                    int32_t *l_155 = &g_39;
                    int32_t *l_156[4];
                    const int32_t *l_167 = &l_59[1].f3;
                    const int32_t **l_166 = &l_167;
                    const int32_t ***l_165[1][5];
                    int32_t ***l_172[7] = {&g_170,&g_170,(void*)0,&g_170,&g_170,(void*)0,&g_170};
                    uint16_t *l_180[6][4] = {{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103}};
                    uint8_t *l_183 = (void*)0;
                    uint8_t *l_184[4] = {&l_59[1].f2,&l_59[1].f2,&l_59[1].f2,&l_59[1].f2};
                    int64_t *l_186[6] = {&g_116,&l_106.f1,&g_116,&g_116,&l_106.f1,&g_116};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_156[i] = &l_130;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_165[i][j] = &l_166;
                    }
                    l_157[1]++;
                    l_188 &= ((safe_lshift_func_uint16_t_u_u((((*l_38) = (safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_uint16_t_u(((l_168 = (void*)0) != (l_173 = g_170)))) >= ((safe_add_func_uint64_t_u_u(0UL, (0xEDL == (((*l_38) >= ((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u((g_85.f2 = (l_157[2] == ((g_103--) <= ((-1L) >= 2UL)))), p_35)) < g_89[0]) <= g_39) || (*l_169)), l_185[2])) , (-1L))) < l_119)))) >= g_10[1][2][1])) && (*l_38)) >= p_33), 0x91L))) < (*l_169)), p_35)) <= l_187);
                }
                (**g_170) = (safe_rshift_func_int16_t_s_s(((-1L) && (l_197[2] = (safe_sub_func_uint32_t_u_u(4294967286UL, (safe_sub_func_int8_t_s_s((p_35 | ((*l_196) = 0x5B29L)), ((void*)0 == &p_34))))))), ((safe_sub_func_int16_t_s_s((((+(*g_171)) & p_33) | l_185[0]), 6UL)) >= l_187)));
                (*l_38) &= (0x2E63L == (((((safe_rshift_func_uint8_t_u_s(((p_33 , (safe_mul_func_uint8_t_u_u((l_205 , (&l_168 != (l_206 = (void*)0))), p_34))) ^ (p_35 | l_185[2])), 3)) | 0xF5L) , p_33) || p_35) , l_114));
                l_127 &= (safe_mul_func_int8_t_s_s((((l_44 == l_209) , l_205) , (safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((((&g_103 != l_214[0]) && (((*l_244) = ((safe_add_func_int32_t_s_s(((*l_217) |= ((**l_173) = 1L)), (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((*l_196) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((*l_243) = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s((!(!((((((*l_242) |= p_33) <= 4294967287UL) , &l_101) == &l_131[4][0]) != p_33))), 3UL)), g_56[4][0][0])), g_79)), p_35))), 1L)), 0x9072L)), p_34)), p_33))) | p_33), g_89[1])), 0xD8EFD3A0L)), l_128)))) , g_58[1][2][2])) , (**g_170))) | 0x1BBC4476L), (*g_9))) < 0UL), p_33))), 253UL));
            }
            for (g_116 = 1; (g_116 >= 0); g_116 -= 1)
            { 
                uint16_t *l_258 = &g_103;
                int32_t l_276[5][2][4] = {{{0L,0xAEA3B362L,0L,0L},{0xAEA3B362L,0xAEA3B362L,0L,0xAEA3B362L}},{{0xAEA3B362L,0L,0L,0xAEA3B362L},{0L,0xAEA3B362L,0L,0L}},{{0xAEA3B362L,0xAEA3B362L,0L,0xAEA3B362L},{0xAEA3B362L,0L,0L,0xAEA3B362L}},{{0L,0xAEA3B362L,0L,0L},{0xAEA3B362L,0xAEA3B362L,0L,0xAEA3B362L}},{{0xAEA3B362L,0L,0L,0xAEA3B362L},{0L,0xAEA3B362L,0L,0L}}};
                int32_t *l_278 = &l_122[1];
                uint32_t l_288[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_288[i] = 18446744073709551615UL;
            }
            (*g_171) ^= (l_321 != &g_322);
            if (p_34)
                continue;
        }
    }
    return (*l_316);
}



static int32_t  func_40(int8_t * p_41, int32_t  p_42, union U1  p_43)
{ 
    int32_t l_60 = 0xE410F713L;
    int64_t *l_65[2][1];
    int32_t l_66 = 8L;
    int32_t **l_67 = (void*)0;
    int32_t *l_69 = &l_66;
    int32_t **l_68 = &l_69;
    int32_t l_70 = 1L;
    int32_t *l_71 = &g_39;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_65[i][j] = (void*)0;
    }
    l_60 = (-6L);
    (*l_71) = (((safe_add_func_int64_t_s_s((l_70 = (safe_lshift_func_uint8_t_u_s((0L | (((l_66 = ((void*)0 != &p_42)) , (p_42 || (*p_41))) , (((((*l_68) = &l_66) == &g_39) & 0UL) ^ g_39))), 6))), g_56[3][0][4])) < 65535UL) == (*g_9));
    return g_56[3][0][4];
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
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_10[i][j][k], "g_10[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_56[i][j][k], "g_56[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_58[i][j][k], "g_58[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_89[i], "g_89[i]", print_hash_value);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_332.f0, "g_332.f0", print_hash_value);
    transparent_crc(g_332.f1, "g_332.f1", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_414[i], "g_414[i]", print_hash_value);

    }
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_571[i], "g_571[i]", print_hash_value);

    }
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_978[i][j], "g_978[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1003.f0, "g_1003.f0", print_hash_value);
    transparent_crc(g_1003.f1, "g_1003.f1", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1243[i], "g_1243[i]", print_hash_value);

    }
    transparent_crc(g_1564, "g_1564", print_hash_value);
    transparent_crc(g_1611, "g_1611", print_hash_value);
    transparent_crc(g_1683.f0, "g_1683.f0", print_hash_value);
    transparent_crc(g_1683.f2, "g_1683.f2", print_hash_value);
    transparent_crc(g_1683.f3, "g_1683.f3", print_hash_value);
    transparent_crc(g_1683.f4, "g_1683.f4", print_hash_value);
    transparent_crc(g_1778, "g_1778", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    transparent_crc(g_1950, "g_1950", print_hash_value);
    transparent_crc(g_2032, "g_2032", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
