// SPDX-License-Identifier: MIT
// cctest_csmith_a5225d13.c --- cctest case csmith_a5225d13 (csmith seed 2770492691)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdefb5c95 */
/* @exp_ticks 0x437b */

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

// Options:   -s 2770492691 -o /tmp/csmith_gen_loikeez9/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint64_t  f0;
};

union U1 {
   uint16_t  f0;
   struct S0  f1;
   uint32_t  f2;
};


static const uint8_t g_4 = 0x53L;
static uint16_t g_32 = 3UL;
static int16_t g_58 = 0xD416L;
static uint16_t g_59[5][1][1] = {{{65529UL}},{{65526UL}},{{65529UL}},{{65526UL}},{{65529UL}}};
static uint16_t g_63 = 65531UL;
static uint8_t g_71 = 255UL;
static uint8_t g_107 = 250UL;
static union U1 g_127[1][1][4] = {{{{0x5931L},{0x5931L},{0x5931L},{0x5931L}}}};
static int32_t g_129 = 6L;
static int64_t g_149 = 0xC5977F73882F6EF7LL;
static int32_t g_176 = 1L;
static uint8_t g_180 = 0x2EL;
static uint8_t g_191 = 1UL;
static struct S0 g_197 = {0x2F4987F47BCE98AALL};



static uint32_t  func_1(void);
static uint32_t  func_11(uint32_t  p_12, uint64_t  p_13, union U1  p_14, int64_t  p_15, int64_t  p_16);
static uint32_t  func_18(struct S0  p_19, int32_t  p_20);
static struct S0  func_21(uint8_t  p_22, uint16_t  p_23, uint32_t  p_24, struct S0  p_25, int8_t  p_26);




static uint32_t  func_1(void)
{ 
    uint32_t l_17 = 0x13B01D91L;
    struct S0 l_33 = {18446744073709551614UL};
    union U1 l_207 = {65526UL};
    int16_t l_229 = 1L;
    int32_t l_231 = 0x473B6501L;
    int32_t l_232[2];
    int i;
    for (i = 0; i < 2; i++)
        l_232[i] = (-9L);
    if ((safe_mod_func_uint32_t_u_u(g_4, (+(+(((safe_mul_func_int16_t_s_s(0x6EC7L, ((safe_sub_func_int8_t_s_s((((func_11(l_17, (func_18(func_21((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_s(((g_32 = (safe_lshift_func_uint16_t_u_s((g_4 | g_4), l_17))) == 0xEE3F2F34E401D933LL), l_17)) >= g_4))), g_4, g_4, l_33, g_4), g_4) != l_33.f0), l_207, g_127[0][0][1].f0, g_127[0][0][1].f0) && 0x2ED4AB7EL) & (-8L)) , g_32), 0x03L)) , 0UL))) == l_33.f0) , 2L))))))
    { 
        uint32_t l_228[1][4][2] = {{{0xB88CA998L,0x798A745DL},{0xB88CA998L,0x798A745DL},{0xB88CA998L,0x798A745DL},{0xB88CA998L,0x798A745DL}}};
        const uint64_t l_230[2] = {1UL,1UL};
        int i, j, k;
        l_232[1] &= (safe_sub_func_int8_t_s_s((l_231 = ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((--g_59[0][0][0]), ((safe_mul_func_int8_t_s_s(((g_63 , ((safe_mul_func_uint16_t_u_u(((l_33.f0 && ((l_229 = (safe_sub_func_int8_t_s_s(((0UL & (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_228[0][1][0] = (safe_lshift_func_int8_t_s_s((((0xCAL < g_58) && g_58) , g_129), g_107))))), 3))) ^ g_63), 250UL))) | l_17)) && (-7L)), 1L)) <= l_17)) >= (-10L)), l_230[0])) || 0x9B59D214D04F73DFLL))) && l_230[0]), 6)) , g_197.f0)), 0UL));
        return g_197.f0;
    }
    else
    { 
        return g_4;
    }
}



static uint32_t  func_11(uint32_t  p_12, uint64_t  p_13, union U1  p_14, int64_t  p_15, int64_t  p_16)
{ 
    int64_t l_208 = (-6L);
    l_208 |= (-1L);
    return l_208;
}



static uint32_t  func_18(struct S0  p_19, int32_t  p_20)
{ 
    union U1 l_200 = {65535UL};
    int32_t l_203 = 0xEDEC698BL;
    int32_t l_206[1];
    int i;
    for (i = 0; i < 1; i++)
        l_206[i] = 0xD8936FADL;
    l_206[0] = (safe_mod_func_int8_t_s_s((l_200 , g_176), (safe_mod_func_int64_t_s_s((l_203 &= g_59[2][0][0]), (safe_mul_func_uint8_t_u_u(g_59[4][0][0], l_200.f0))))));
    return g_4;
}



static struct S0  func_21(uint8_t  p_22, uint16_t  p_23, uint32_t  p_24, struct S0  p_25, int8_t  p_26)
{ 
    uint32_t l_46 = 0x5D5D909CL;
    uint32_t l_47 = 6UL;
    uint16_t l_48[3];
    uint32_t l_49 = 0x9C74E37AL;
    int32_t l_64 = 0x60852B18L;
    uint64_t l_72 = 18446744073709551608UL;
    uint32_t l_108 = 18446744073709551609UL;
    int32_t l_188 = 0L;
    int32_t l_192 = 6L;
    int i;
    for (i = 0; i < 3; i++)
        l_48[i] = 65527UL;
    if ((l_49 = (safe_unary_minus_func_uint16_t_u((p_22 | ((((((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((((safe_unary_minus_func_uint8_t_u((p_23 || (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((g_32 || (((((safe_rshift_func_uint8_t_u_s(l_46, 0)) <= g_32) & l_47) || 5L) <= 0L)) , l_48[1]), l_48[1])), g_32))))) > p_23) , 0x380D42F53403E1FELL), 2UL)) , 65529UL), g_4)) > l_46) && p_24) || (-1L)) || p_25.f0) != l_48[1]) == 0L) > 1UL))))))
    { 
        int16_t l_60 = 7L;
        g_59[4][0][0] = (((safe_mod_func_int32_t_s_s((-1L), p_24)) < (((p_22--) , (((p_25.f0 > (safe_div_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((((p_22 = 0xA9L) == p_25.f0) , p_22), p_26)) , p_25.f0), g_58))) && 4294967295UL) < p_26)) <= (-9L))) != l_49);
        l_64 = (((g_58 >= (l_60 = (-8L))) , (safe_add_func_uint8_t_u_u((g_59[4][0][0] , (g_63 |= (0UL | l_47))), l_48[1]))) <= p_22);
        g_71 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((-10L), 12)), 0)), 2));
    }
    else
    { 
        const uint32_t l_82 = 0xA773CE50L;
        int32_t l_83 = 6L;
        uint16_t l_148 = 0x20D5L;
        int32_t l_167[3];
        int i;
        for (i = 0; i < 3; i++)
            l_167[i] = 9L;
        l_72 ^= p_26;
        if ((safe_lshift_func_uint8_t_u_s(l_48[1], 4)))
        { 
            int32_t l_84[4][1][2];
            int64_t l_109 = 0xDEE0D328F3C5FBC3LL;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_84[i][j][k] = 1L;
                }
            }
            l_84[0][0][1] = (l_64 = (~(safe_add_func_int64_t_s_s((-6L), (safe_add_func_uint64_t_u_u(g_59[4][0][0], (p_26 < (safe_mul_func_uint16_t_u_u((l_83 = ((g_59[4][0][0] >= 8UL) > l_82)), g_71)))))))));
            l_64 = (((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((!(safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((+(((g_107 ^= (g_32 | (g_59[4][0][0] <= (p_22 && (((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x42L, 1)), g_4)) != l_72) , g_4))))) , l_108) == l_82)), (-1L))), p_22)), g_71)), g_59[1][0][0])), l_83)), l_84[0][0][0]))) > p_25.f0), l_48[1])), p_22)) > p_26) && l_48[1]) & l_109) <= 0x7B97028AD0AF0966LL);
            for (g_107 = (-5); (g_107 != 21); g_107 = safe_add_func_int16_t_s_s(g_107, 1))
            { 
                int32_t l_128 = 0L;
                g_129 = ((((((safe_add_func_int16_t_s_s(p_25.f0, (safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((((safe_add_func_uint32_t_u_u(((+(safe_lshift_func_int16_t_s_u((((l_64 = (l_83 < (((safe_lshift_func_int8_t_s_u(g_63, (g_127[0][0][1] , 0UL))) != 1UL) > 0UL))) , l_64) , p_24), 14))) != g_32), p_26)) , g_107) , l_128) >= g_32), 0xCAE9FA02E7B85461LL)), g_32)))) | g_59[4][0][0]) & g_71) || l_46) < 0x64L) , 0x0FBFF594L);
            }
        }
        else
        { 
            int64_t l_152 = 0L;
            int64_t l_159 = (-6L);
            int32_t l_179 = (-7L);
            for (p_23 = (-10); (p_23 >= 12); ++p_23)
            { 
                uint32_t l_146[2];
                int32_t l_147 = 0x52B54726L;
                int32_t l_155 = 0x2D75D4B2L;
                int i;
                for (i = 0; i < 2; i++)
                    l_146[i] = 18446744073709551615UL;
                g_149 &= (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s((6L >= (((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((0xC3DAF87FBE72DC73LL < g_71) >= (safe_add_func_uint32_t_u_u((((l_147 = ((((((((p_25.f0 , p_22) | g_32) || 4L) <= l_146[0]) && p_23) <= (-3L)) , 18446744073709551613UL) == 7UL)) >= l_148) || 0x0D6DL), g_59[4][0][0]))), 0L)), p_23)) & p_25.f0) , g_63), p_26)), p_24)) > g_129) > g_4)), 3)) & l_108) <= 0x4AL) ^ p_25.f0), 0x76B60554L));
                l_64 ^= (safe_mul_func_int8_t_s_s((((g_58 > l_152) , p_23) & (l_155 ^= (((safe_rshift_func_uint16_t_u_s(((l_147 = ((p_26 , 9UL) >= l_108)) < g_71), g_63)) || p_22) , 6UL))), g_4));
            }
            for (p_23 = 0; (p_23 > 10); p_23 = safe_add_func_uint64_t_u_u(p_23, 1))
            { 
                int64_t l_158[2][2] = {{0xF077A860806C5267LL,0xF077A860806C5267LL},{0xF077A860806C5267LL,0xF077A860806C5267LL}};
                int32_t l_164 = 0x81529419L;
                int i, j;
                l_83 &= (-10L);
                l_167[0] &= (((l_158[1][0] = p_26) && ((l_159 | (g_58 = (safe_add_func_uint32_t_u_u((l_164 = (safe_lshift_func_uint8_t_u_s(p_22, 2))), ((((safe_mod_func_uint32_t_u_u(p_25.f0, g_32)) , 1L) || p_24) == l_83))))) & 0UL)) > 0x1FL);
                l_179 = (((safe_lshift_func_int16_t_s_s(p_22, 5)) == p_22) != ((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((g_176 = 1UL) >= ((safe_rshift_func_uint16_t_u_s(((((g_149 ^ g_59[3][0][0]) , p_24) , (-5L)) , p_26), l_159)) , 3UL)), p_25.f0)) , g_32), 0x0EL)), l_82)) || 65535UL));
            }
            g_180--;
        }
    }
    l_192 &= (safe_mod_func_int16_t_s_s((((!(g_191 = ((l_64 = 0x6BL) || ((l_188 = 0x8F621FC3L) > (safe_mod_func_int32_t_s_s(l_49, ((p_23 == l_108) , l_48[1]))))))) & g_127[0][0][1].f0) , 0xAF4EL), l_47));
    l_64 = (((((safe_mod_func_int64_t_s_s(g_71, l_47)) < (safe_rshift_func_int8_t_s_s(0xA0L, p_24))) >= p_24) >= 3L) <= g_32);
    return g_197;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_59[i][j][k], "g_59[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_127[i][j][k].f0, "g_127[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_197.f0, "g_197.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
