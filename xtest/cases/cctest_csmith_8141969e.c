// SPDX-License-Identifier: MIT
// cctest_csmith_8141969e.c --- cctest case csmith_8141969e (csmith seed 2168559262)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc60ed28b */
/* @exp_ticks 0x3683 */

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

// Options:   -s 2168559262 -o /tmp/csmith_gen_vx7wxe1l/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   const int32_t  f2;
   int32_t  f3;
   uint32_t  f4;
   int32_t  f5;
};

union U1 {
   struct S0  f0;
};

union U2 {
   const uint32_t  f0;
};


static uint16_t g_37 = 65535UL;
static union U2 g_53 = {0xBF325E6BL};
static uint8_t g_74 = 0xD8L;
static int16_t g_78 = (-1L);
static uint64_t g_82 = 18446744073709551615UL;
static int64_t g_116 = 9L;
static int64_t g_117 = 0x1899B7E06FDCCDC4LL;
static uint64_t g_118 = 0xC07334A22360892CLL;
static union U1 g_125 = {{9UL,0xDA806100L,0L,0xCB58CEABL,4294967295UL,3L}};
static int64_t g_140 = 0x95ECA5D8F89870F3LL;
static int32_t g_141 = 0x3A16DF6EL;
static int16_t g_142 = 1L;
static int32_t g_157 = (-1L);
static int16_t g_158 = 8L;
static int32_t g_159 = 0xBBA2A9BAL;
static int32_t g_171 = 0xFA737C25L;
static uint16_t g_186 = 9UL;



static int32_t  func_1(void);
static uint32_t  func_19(const struct S0  p_20, uint8_t  p_21);
static const struct S0  func_22(struct S0  p_23, uint8_t  p_24, uint32_t  p_25, uint32_t  p_26, const int16_t  p_27);
static int16_t  func_48(union U2  p_49, uint32_t  p_50, int32_t  p_51, uint32_t  p_52);




static int32_t  func_1(void)
{ 
    uint8_t l_35[3][1];
    int32_t l_36 = (-9L);
    uint64_t l_38 = 0x33ECB407CB0BE945LL;
    int16_t l_39 = 0x5680L;
    struct S0 l_40 = {65530UL,0x04179B2CL,0x978D11E8L,1L,4294967292UL,9L};
    int16_t l_41[3][4][3] = {{{6L,0x01A7L,6L},{0xEF54L,0xB0B8L,0x1355L},{6L,0xD2A4L,0xE29FL},{0xEF54L,0xD816L,0xEF54L}},{{6L,1L,0x33BDL},{0xEF54L,0L,(-1L)},{6L,0x01A7L,6L},{0xEF54L,0xB0B8L,0x1355L}},{{6L,0xD2A4L,0xE29FL},{0xEF54L,0xD816L,0xEF54L},{6L,1L,0x33BDL},{0xEF54L,0L,(-1L)}}};
    uint32_t l_42 = 0x0B8378C3L;
    uint8_t l_109 = 0x2FL;
    int32_t l_121[1];
    uint16_t l_156 = 9UL;
    int32_t l_172 = (-3L);
    int32_t l_185 = 0x52317F37L;
    int32_t l_187 = 0x4CFD5CC3L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_35[i][j] = 0xC0L;
    }
    for (i = 0; i < 1; i++)
        l_121[i] = 1L;
    if ((((g_78 = (((((safe_mul_func_int8_t_s_s((!((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((((((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((5L >= (safe_rshift_func_uint8_t_u_s(((((((func_19(func_22((((safe_unary_minus_func_int8_t_s(((0xCEDDA5659CDE30ECLL > (((l_39 |= (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_35[1][0] > 0x4F86FC3314648A57LL) , l_36), g_37)), 1UL)), l_38))) , 0x0131B3B3333DB962LL) < g_37)) == g_37))) == 0xF9E84EBFL) , l_40), l_41[2][0][1], g_37, l_42, g_37), g_37) > l_109) ^ g_53.f0) && 0x1F3DL) ^ l_40.f3) < l_35[2][0]) && 0x29DAAEC3L), 6))) > (-4L)), (-1L))), 0xBE3DAACAL)), 0x53C3L)) | 0xCFCA972D9DFC09A2LL) & g_78) ^ 0xCEE113DBL) > l_35[1][0]), g_78)), g_78)), g_78)) , g_37)), g_78)) != l_40.f5) <= g_53.f0) ^ g_78) == 0xBAL)) && g_37) == (-8L)))
    { 
        uint32_t l_113[5];
        int32_t l_114 = 0x7AE6F464L;
        int32_t l_115 = 1L;
        int i;
        for (i = 0; i < 5; i++)
            l_113[i] = 0xDA3375A0L;
        for (l_109 = 0; (l_109 != 21); ++l_109)
        { 
            uint16_t l_112 = 4UL;
            l_113[0] = ((0x0FL > g_74) | l_112);
        }
        l_115 = (l_114 ^= l_113[4]);
    }
    else
    { 
        uint8_t l_130 = 3UL;
        int32_t l_131 = (-1L);
        int32_t l_138 = 0L;
        int32_t l_155 = 1L;
        if (g_74)
        { 
            for (g_37 = 0; (g_37 <= 0); g_37 += 1)
            { 
                if (g_82)
                    break;
                g_116 = (l_40.f5 , 0x18EFA3C6L);
            }
        }
        else
        { 
            g_117 = (1UL == (g_116 == g_78));
            l_121[0] &= ((--g_118) && g_74);
        }
        if ((safe_add_func_uint64_t_u_u(((safe_unary_minus_func_uint64_t_u((g_125 , (g_78 | (l_130 |= (safe_lshift_func_uint16_t_u_s((g_125.f0.f5 != (safe_mul_func_uint8_t_u_u(g_82, 0xF7L))), 12))))))) <= l_131), l_42)))
        { 
            uint32_t l_134 = 4294967295UL;
            union U1 l_139[4] = {{{2UL,1UL,0x9E22812BL,0xB569674BL,0UL,3L}},{{2UL,1UL,0x9E22812BL,0xB569674BL,0UL,3L}},{{2UL,1UL,0x9E22812BL,0xB569674BL,0UL,3L}},{{2UL,1UL,0x9E22812BL,0xB569674BL,0UL,3L}}};
            int i;
            if (l_121[0])
            { 
                uint32_t l_135 = 18446744073709551608UL;
                l_121[0] = (safe_add_func_int8_t_s_s((g_53.f0 || l_134), g_125.f0.f1));
                l_135++;
            }
            else
            { 
                g_140 = (((9L == ((((l_138 |= l_131) , 0x91B0L) < (l_139[1] , l_139[1].f0.f5)) >= g_125.f0.f4)) || 0L) , 0x4463F654L);
                g_141 = l_38;
            }
            g_142 = g_140;
            g_157 = (safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(g_125.f0.f3, (~(+l_139[1].f0.f2)))) , (safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(l_155, g_125.f0.f4)) | l_156), g_141)) || 0UL), g_125.f0.f3))), g_78));
        }
        else
        { 
            uint8_t l_160[4] = {0x9EL,0x9EL,0x9EL,0x9EL};
            int32_t l_165 = 1L;
            int i;
            --l_160[2];
            for (l_155 = (-11); (l_155 >= 25); l_155 = safe_add_func_int64_t_s_s(l_155, 3))
            { 
                return l_160[1];
            }
            l_165 = l_160[2];
        }
    }
    l_172 &= (l_121[0] = ((safe_div_func_uint64_t_u_u(g_125.f0.f4, ((1UL != (~(g_171 = (l_40.f5 < (safe_lshift_func_uint8_t_u_u((0xDA40BB98L != 0xBA47188FL), 7)))))) && (-1L)))) & g_125.f0.f4));
    l_187 = (g_186 &= ((((l_38 ^ l_40.f0) != g_117) >= ((safe_mod_func_uint32_t_u_u((++g_125.f0.f4), (safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_172 = (safe_mod_func_uint64_t_u_u((l_121[0] &= (l_185 = (safe_div_func_int32_t_s_s((((g_82 & g_37) , 0x7208B660CD2BE11DLL) < l_40.f3), g_157)))), 0x336772AC288FB31FLL))), g_159)), 0xDDACL)))) | l_40.f5)) || 0x46L));
    return l_40.f0;
}



static uint32_t  func_19(const struct S0  p_20, uint8_t  p_21)
{ 
    uint32_t l_70[4][4][5] = {{{0UL,0UL,0xA28E28B5L,18446744073709551609UL,0x132C98C1L},{0UL,0x37C05799L,1UL,0x73AC07ACL,0x2BEBA847L},{0UL,0UL,18446744073709551615UL,0UL,0xC15DB8BEL},{0xBD486562L,0x37C05799L,18446744073709551615UL,0xA1AA0697L,0xA28E28B5L}},{{0x37C05799L,0xBD486562L,1UL,0UL,0xA28E28B5L},{0UL,0UL,0xA28E28B5L,0x73AC07ACL,0xC15DB8BEL},{0x37C05799L,0UL,0x2BEBA847L,18446744073709551609UL,0x2BEBA847L},{0xBD486562L,0xBD486562L,0xA28E28B5L,18446744073709551609UL,0x132C98C1L}},{{0UL,0x37C05799L,1UL,0x73AC07ACL,0x2BEBA847L},{0UL,0UL,18446744073709551615UL,0UL,0xC15DB8BEL},{0xBD486562L,0x37C05799L,18446744073709551615UL,0xA1AA0697L,0xA28E28B5L},{0x37C05799L,0xBD486562L,1UL,0UL,0xA28E28B5L}},{{0UL,0UL,0xA28E28B5L,0x73AC07ACL,0xC15DB8BEL},{0x37C05799L,0UL,0x2BEBA847L,18446744073709551609UL,0x2BEBA847L},{0xBD486562L,0xBD486562L,0xA28E28B5L,18446744073709551609UL,0x132C98C1L},{0UL,0x37C05799L,1UL,0x73AC07ACL,0x2BEBA847L}}};
    int32_t l_77 = 0x67D4ADD7L;
    int64_t l_91[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_91[i] = 0xA3BAB64809F77A2FLL;
    if (p_21)
    { 
        uint32_t l_71 = 0x22C1C422L;
        int32_t l_79 = (-2L);
        int32_t l_80 = (-10L);
        int32_t l_81 = (-1L);
        for (g_37 = 0; (g_37 <= 3); g_37 += 1)
        { 
            --l_71;
            ++g_74;
            for (g_74 = 0; (g_74 <= 3); g_74 += 1)
            { 
                if (g_37)
                    break;
            }
        }
        g_82--;
    }
    else
    { 
        union U2 l_85 = {0x683E25FCL};
        int32_t l_107 = (-1L);
        uint8_t l_108[3][2][2] = {{{0x81L,0x81L},{0x0BL,0x81L}},{{0x81L,0x0BL},{0x81L,0x81L}},{{0x0BL,0x81L},{0x81L,0x0BL}}};
        int i, j, k;
        if ((l_85 , 0L))
        { 
            for (g_37 = 0; g_37 < 4; g_37 += 1)
            {
                for (g_74 = 0; g_74 < 4; g_74 += 1)
                {
                    for (l_77 = 0; l_77 < 5; l_77 += 1)
                    {
                        l_70[g_37][g_74][l_77] = 1UL;
                    }
                }
            }
        }
        else
        { 
            uint32_t l_88 = 18446744073709551614UL;
            int32_t l_105 = 0xF9D8AEACL;
            int32_t l_106 = 0x9AC59B50L;
            l_77 = (((safe_div_func_int8_t_s_s(l_88, (l_107 |= ((safe_mul_func_uint8_t_u_u(((l_91[0] > ((g_82 = (((l_106 = ((safe_div_func_int32_t_s_s((+(safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((l_85.f0 , (safe_add_func_int16_t_s_s((l_105 = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((g_37 = (0x1A0FL || l_85.f0)) >= 65528UL), g_78)), 4)) != p_20.f0)), 0x1DBCL))), 11)) || 1UL), 0))), l_85.f0)) > g_78)) >= g_53.f0) , 18446744073709551610UL)) & l_85.f0)) == 0x4EL), g_53.f0)) & l_88)))) , l_108[0][0][1]) < p_20.f0);
        }
    }
    return g_82;
}



static const struct S0  func_22(struct S0  p_23, uint8_t  p_24, uint32_t  p_25, uint32_t  p_26, const int16_t  p_27)
{ 
    int64_t l_45 = 0xEC28D2166A3C8FCBLL;
    int32_t l_67 = (-5L);
    int32_t l_68 = 0xED1428A3L;
    const struct S0 l_69 = {0x281BL,6UL,-10L,3L,0UL,7L};
    l_68 |= ((safe_lshift_func_int8_t_s_s((l_45 <= (safe_sub_func_int64_t_s_s((l_67 = ((func_48(g_53, (((safe_div_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((g_53.f0 || (l_45 >= p_27)) <= g_53.f0), l_45)) ^ g_53.f0), l_45)), 0x2BF2L)) , l_45), g_53.f0)) <= g_37) <= l_45), l_45, l_45) ^ 65531UL) && g_53.f0)), p_24))), 5)) , p_23.f2);
    l_68 |= (((-1L) == p_27) <= l_67);
    return l_69;
}



static int16_t  func_48(union U2  p_49, uint32_t  p_50, int32_t  p_51, uint32_t  p_52)
{ 
    uint16_t l_62 = 0xF1E5L;
    uint32_t l_65 = 0x3614A4D9L;
    int32_t l_66 = 8L;
    l_62++;
    l_66 ^= l_65;
    return p_49.f0;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_125.f0.f0, "g_125.f0.f0", print_hash_value);
    transparent_crc(g_125.f0.f1, "g_125.f0.f1", print_hash_value);
    transparent_crc(g_125.f0.f2, "g_125.f0.f2", print_hash_value);
    transparent_crc(g_125.f0.f3, "g_125.f0.f3", print_hash_value);
    transparent_crc(g_125.f0.f4, "g_125.f0.f4", print_hash_value);
    transparent_crc(g_125.f0.f5, "g_125.f0.f5", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
