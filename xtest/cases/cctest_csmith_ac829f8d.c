// SPDX-License-Identifier: MIT
// cctest_csmith_ac829f8d.c --- cctest case csmith_ac829f8d (csmith seed 2894241677)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7dceaa2d */
/* @exp_ticks 0x3452 */

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

// Options:   -s 2894241677 -o /tmp/csmith_gen_atejccbl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int64_t  f1;
};

union U1 {
   struct S0  f0;
};


static struct S0 g_2[3][1] = {{{2UL,0x50BF34FDA0E60F95LL}},{{2UL,0x50BF34FDA0E60F95LL}},{{2UL,0x50BF34FDA0E60F95LL}}};
static int32_t g_3 = (-1L);
static int32_t g_4 = 0L;
static int32_t g_5 = 9L;
static union U1 g_18 = {{1UL,0x073D4C46983C17A3LL}};
static int16_t g_34 = 0x4019L;
static uint8_t g_61 = 0xBAL;
static uint8_t g_88 = 252UL;
static uint32_t g_92 = 18446744073709551614UL;
static uint16_t g_116 = 0x1C07L;
static int32_t g_123 = 0xCF484424L;
static uint8_t g_143 = 0xF0L;
static int32_t g_148 = 0xD4B72C14L;
static int16_t g_149[4] = {(-9L),(-9L),(-9L),(-9L)};
static int64_t g_196 = (-8L);
static uint8_t g_202 = 255UL;



static union U1  func_1(void);
static struct S0  func_6(uint32_t  p_7);
static int32_t  func_15(union U1  p_16, const int16_t  p_17);
static uint8_t  func_38(uint32_t  p_39);




static union U1  func_1(void)
{ 
    struct S0 l_151 = {0xF2621DCDL,0xC3996D64EC8E99FELL};
    int32_t l_162 = (-7L);
    uint8_t l_190 = 1UL;
    union U1 l_204[4][5] = {{{{4UL,0xEE8E1141017C7054LL}},{{4UL,0xEE8E1141017C7054LL}},{{0UL,2L}},{{4UL,0xEE8E1141017C7054LL}},{{4UL,0xEE8E1141017C7054LL}}},{{{18446744073709551610UL,-4L}},{{4UL,0xEE8E1141017C7054LL}},{{18446744073709551610UL,-4L}},{{18446744073709551610UL,-4L}},{{4UL,0xEE8E1141017C7054LL}}},{{{4UL,0xEE8E1141017C7054LL}},{{18446744073709551610UL,-4L}},{{18446744073709551610UL,-4L}},{{4UL,0xEE8E1141017C7054LL}},{{18446744073709551610UL,-4L}}},{{{4UL,0xEE8E1141017C7054LL}},{{4UL,0xEE8E1141017C7054LL}},{{0UL,2L}},{{4UL,0xEE8E1141017C7054LL}},{{4UL,0xEE8E1141017C7054LL}}}};
    int i, j;
    for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
    { 
        uint32_t l_14 = 4294967292UL;
        int32_t l_35 = (-1L);
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        { 
            int16_t l_8 = (-3L);
            union U1 l_12 = {{8UL,1L}};
            for (g_5 = 0; (g_5 <= 0); g_5 += 1)
            { 
                int i, j;
                g_2[g_5][g_3] = (g_3 , func_6(l_8));
                return l_12;
            }
        }
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        { 
            l_14 = (~0UL);
            l_35 |= func_15(g_18, g_3);
        }
        return g_18;
    }
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        int16_t l_36 = 0x435FL;
        uint16_t l_158 = 0x2E23L;
        int32_t l_161 = (-1L);
        union U1 l_168 = {{0x03FFEE22L,0xCD3741DADCECC9C5LL}};
        uint64_t l_203 = 0x9A891246E79F7EB3LL;
        for (g_18.f0.f0 = 0; (g_18.f0.f0 <= 0); g_18.f0.f0 += 1)
        { 
            uint16_t l_37 = 0x7824L;
            int32_t l_167 = 0x64F569B8L;
            l_37 |= l_36;
            for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
            { 
                int32_t l_150[3];
                int32_t l_165 = 1L;
                int i;
                for (i = 0; i < 3; i++)
                    l_150[i] = 0x1716674BL;
                l_151 = func_6(((((g_143 = func_38(l_36)) & (safe_mod_func_uint16_t_u_u((g_149[3] = (safe_lshift_func_int8_t_s_s((0x40L < (g_148 = (((0x62E2L >= g_18.f0.f0) , 5UL) , g_18.f0.f1))), 7))), 0xF8D5L))) > l_150[1]) > l_37));
                l_167 = (safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((l_165 = ((l_158 , (safe_add_func_uint8_t_u_u((--g_88), 0x4CL))) , l_37)) , (+(g_148 ^ g_123))), 9)) == 250UL), l_162)) <= l_37), 6));
                return l_168;
            }
            if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(l_168.f0.f0, (((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((~(safe_mod_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((((l_168 , (l_161 = (((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_116, 6L)), l_161)) , 0xF68AE125AE72B269LL) || 6UL) & l_161), l_158)) ^ 0x419DL) ^ g_88))) , g_18) , g_4) > l_151.f1) , l_190) ^ g_149[1]), g_149[0])), 1)) , g_4) >= l_167), g_5))) && 255UL), 5)), 0x6229581EL)) >= 0xB6L) == l_168.f0.f1))), l_168.f0.f1)))
            { 
                g_5 |= (!0x8355L);
            }
            else
            { 
                int64_t l_197 = 1L;
                g_4 = (g_18.f0.f1 != (safe_mod_func_uint32_t_u_u((g_5 < (((safe_sub_func_uint32_t_u_u((g_196 = 0UL), 0xF3C9CF07L)) || l_197) > g_34)), l_36)));
            }
        }
        for (g_5 = 0; (g_5 >= 0); g_5 -= 1)
        { 
            g_4 &= ((l_203 = ((((g_34 = g_18.f0.f1) , (safe_mul_func_int64_t_s_s((253UL >= 0x0CL), ((((safe_rshift_func_int8_t_s_u((((0xC6L > l_168.f0.f1) || l_162) ^ g_18.f0.f0), g_202)) <= g_123) <= g_34) == 0x238DL)))) ^ 0x48L) != l_161)) | 0L);
        }
    }
    g_2[0][0] = g_18.f0;
    return l_204[3][3];
}



static struct S0  func_6(uint32_t  p_7)
{ 
    uint32_t l_9 = 0x3588C556L;
    int32_t l_10 = 0xA1CF0415L;
    struct S0 l_11[4] = {{0UL,1L},{0UL,1L},{0UL,1L},{0UL,1L}};
    int i;
    l_10 = (l_9 = 0x31AA08ECL);
    return l_11[0];
}



static int32_t  func_15(union U1  p_16, const int16_t  p_17)
{ 
    int32_t l_19 = 0x8072F259L;
    int32_t l_31 = 0xAD446302L;
    g_5 ^= l_19;
    g_5 = ((~(safe_unary_minus_func_uint64_t_u(((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(g_5, ((((0x02L || (+(((safe_mul_func_uint16_t_u_u((l_31 |= 0UL), (safe_sub_func_uint8_t_u_u((g_34 = l_19), p_17)))) == 0x2B6367AFFF16CE65LL) && 1L))) > p_16.f0.f1) || 0x67D6L) ^ p_17))) >= 0xA7L), l_19)), l_19)) | g_18.f0.f0)))) < g_3);
    return l_31;
}



static uint8_t  func_38(uint32_t  p_39)
{ 
    int64_t l_49 = (-1L);
    union U1 l_54 = {{0xE1234CD2L,0x40D6A5A8E70C497ALL}};
    int16_t l_87 = (-1L);
    uint32_t l_105 = 0x61E08BDFL;
    int32_t l_126 = 1L;
    int32_t l_141 = 0x90053317L;
    int32_t l_142 = 3L;
    for (g_4 = 0; (g_4 != (-3)); --g_4)
    { 
        int16_t l_44 = 7L;
        int32_t l_86 = (-2L);
        uint16_t l_106 = 0xFC65L;
        for (p_39 = (-25); (p_39 > 13); ++p_39)
        { 
            uint8_t l_60[5] = {0UL,0UL,0UL,0UL,0UL};
            int32_t l_69[3][5] = {{2L,0L,2L,0x4902A751L,(-8L)},{0x5503930AL,(-1L),(-8L),(-1L),0x5503930AL},{0x5503930AL,2L,0x186D9D6EL,0x4902A751L,0x186D9D6EL}};
            int i, j;
            if (l_44)
                break;
            if ((safe_mod_func_uint16_t_u_u(((1UL && ((((safe_div_func_uint16_t_u_u((g_3 < 0xFB38BA7019510DDFLL), (-1L))) , 4294967295UL) <= 4L) || p_39)) <= p_39), p_39)))
            { 
                uint64_t l_62 = 0xFD8ED9CDEFDC0328LL;
                g_61 = (0xE276980504C99CC0LL > (l_49 == ((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((l_54 , (~(safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(0x4A7E2F04L, l_60[4])), g_18.f0.f0)))), 0xEAFAF4B0L)), g_5)) > 0xFE2AL)));
                return l_62;
            }
            else
            { 
                l_69[1][1] |= (p_39 < (safe_lshift_func_uint16_t_u_s((4294967295UL >= (safe_lshift_func_uint8_t_u_u((g_18.f0.f1 | (safe_mod_func_uint16_t_u_u(l_44, (-10L)))), 7))), 2)));
                if (g_3)
                    goto lbl_131;
                return g_5;
            }
        }
        for (l_54.f0.f1 = 0; (l_54.f0.f1 <= 0); l_54.f0.f1 += 1)
        { 
            int32_t l_89 = 0x0FD8B347L;
            if (((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((((!(l_87 = ((((((l_86 = ((safe_add_func_int16_t_s_s((0xCCL && (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_18.f0.f1, (safe_sub_func_int16_t_s_s(g_34, ((safe_unary_minus_func_int16_t_s(0xA49AL)) > p_39))))), 0x624BL))), p_39)) > (-1L))) == p_39) < 0L) | p_39) ^ g_3) | p_39))) || l_54.f0.f0) <= g_4), l_54.f0.f1)) < p_39) , 0x0D37L), 1L)), p_39)) <= 0L))
            { 
                int i, j;
                g_2[(l_54.f0.f1 + 1)][l_54.f0.f1] = func_6(((((g_88 = 0x966CL) | l_89) <= l_86) , (((g_92 = (safe_sub_func_int8_t_s_s((p_39 | 0xD2720855L), 0x7EL))) && l_89) <= p_39)));
                l_89 = ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((-8L), (safe_sub_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_5, g_61)), (safe_lshift_func_uint8_t_u_s(((l_54.f0.f0 ^ 7UL) < g_3), g_18.f0.f1)))) | g_5) < l_105), p_39)))), l_106)) < g_2[(l_54.f0.f1 + 1)][l_54.f0.f1].f1);
            }
            else
            { 
                int64_t l_115 = 0x7A7798753EC527E3LL;
                g_123 = (((((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((safe_add_func_int8_t_s_s((0x66A39569L ^ (l_86 = (g_116 = l_115))), (safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s((l_115 == (safe_mod_func_int32_t_s_s(p_39, l_89))), g_18.f0.f0)) == 0xC33BL), l_89)))) && g_116) < p_39), 0xA708A12FBA81857DLL)) , g_116), g_61)), g_92)) && p_39) , 7L) != p_39) , p_39);
            }
            g_2[1][0] = func_6(g_18.f0.f0);
            return p_39;
        }
        if (g_92)
            break;
    }
lbl_131:
    g_4 = (((l_126 = (safe_div_func_uint32_t_u_u(g_34, p_39))) || ((safe_rshift_func_int16_t_s_s(((((safe_add_func_int8_t_s_s(g_34, 255UL)) < 0xC493E54A6601A515LL) & g_18.f0.f0) ^ 1UL), 13)) && p_39)) || l_54.f0.f1);
    g_123 = (safe_rshift_func_uint8_t_u_u(0xB6L, (~(0x91L || ((func_6((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s(g_4, ((((l_142 = (l_141 = (l_126 = ((((safe_rshift_func_int8_t_s_s((-6L), l_49)) < g_61) | l_54.f0.f0) >= l_87)))) , g_61) >= 18446744073709551612UL) & g_123))), p_39))) , g_18.f0.f1) <= l_54.f0.f0)))));
    return g_123;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2[i][j].f0, "g_2[i][j].f0", print_hash_value);
            transparent_crc(g_2[i][j].f1, "g_2[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_18.f0.f0, "g_18.f0.f0", print_hash_value);
    transparent_crc(g_18.f0.f1, "g_18.f0.f1", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
