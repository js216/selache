// SPDX-License-Identifier: MIT
// cctest_csmith_27575fd8.c --- cctest case csmith_27575fd8 (csmith seed 660037592)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x637f167b */
/* @exp_ticks 0x301 */

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

// Options:   -s 660037592 -o /home/agent1/fast_data/tmp/csmith_gen_oamdskkk/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint8_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   int32_t  f3;
   int32_t  f4;
};

union U1 {
   uint8_t  f0;
   uint32_t  f1;
};

union U2 {
   uint8_t  f0;
   int16_t  f1;
   int8_t  f2;
};

union U3 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};


static int32_t g_2 = (-1L);
static int32_t g_5[1] = {0x1151C3C3L};
static int32_t g_31 = 5L;
static int64_t g_40 = 0L;
static int8_t g_41 = (-1L);
static uint16_t g_42 = 0UL;
static uint32_t g_63 = 4UL;
static const union U2 g_89 = {0x13L};
static uint16_t g_104 = 0xC4DCL;
static struct S0 g_105[1] = {{0x15L,0xBE5B5757L,0x25A1L,4L,0L}};
static uint16_t g_110 = 0xAC32L;
static uint32_t g_127 = 0xB37417BDL;
static int8_t g_130 = 0x96L;
static union U3 g_157 = {0x54A6F35BL};
static int64_t g_164 = 0xE95F642D8EDDB30ELL;
static union U1 g_167 = {1UL};
static uint32_t g_204 = 0xDBCA6F5DL;
static uint32_t g_226 = 4294967295UL;
static uint32_t g_229 = 0x43E87FF4L;



static const union U3  func_1(void);
static const uint32_t  func_17(int64_t  p_18, int16_t  p_19, uint64_t  p_20);
static uint32_t  func_22(uint16_t  p_23, int16_t  p_24, const struct S0  p_25, uint8_t  p_26, uint32_t  p_27);
static int32_t  func_32(int32_t  p_33, uint32_t  p_34, uint32_t  p_35, uint16_t  p_36, union U2  p_37);




static const union U3  func_1(void)
{ 
    const struct S0 l_29 = {0UL,0x8FBFC75DL,6UL,0xBBD18838L,0x09552053L};
    int32_t l_228 = 1L;
    const union U3 l_232 = {0x36D3559EL};
    for (g_2 = 0; (g_2 <= (-23)); g_2--)
    { 
        const uint64_t l_16 = 0x1AC3DC99CDF9C775LL;
        int32_t l_210 = 1L;
        for (g_5[0] = 0; (g_5[0] <= (-9)); --g_5[0])
        { 
            uint16_t l_28 = 0UL;
            l_210 ^= ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s(g_5[0], 0x36DE0184DCC80FC3LL)) < (safe_rshift_func_int16_t_s_u(((l_16 > func_17(((safe_unary_minus_func_uint32_t_u(func_22(g_5[0], l_28, l_29, g_2, g_5[0]))) | g_5[0]), g_89.f0, l_29.f0)) == g_89.f0), l_28))), 5)), g_5[0])) , l_28);
            if (g_105[0].f2)
                continue;
            for (g_204 = 0; (g_204 <= 0); g_204 += 1)
            { 
                uint64_t l_227 = 0x2DF95CBA6E25E85ELL;
                if (l_29.f1)
                    break;
                l_228 = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((+(safe_mul_func_int8_t_s_s((g_42 > (safe_div_func_uint32_t_u_u((g_167.f1 = (safe_sub_func_uint16_t_u_u(((g_89.f0 , (safe_mod_func_uint8_t_u_u(g_42, ((safe_add_func_uint64_t_u_u(((g_104 = (g_226 != l_16)) < l_28), g_127)) ^ l_210)))) & l_227), 0xF54DL))), l_16))), 255UL))), 3)), 0x9D0DL));
                --g_229;
            }
        }
        if (l_29.f1)
            continue;
    }
    return l_232;
}



static const uint32_t  func_17(int64_t  p_18, int16_t  p_19, uint64_t  p_20)
{ 
    uint16_t l_202[4];
    struct S0 l_208[1][2] = {{{249UL,0xC49FD6B0L,0xCD2CL,8L,-9L},{249UL,0xC49FD6B0L,0xCD2CL,8L,-9L}}};
    int i, j;
    for (i = 0; i < 4; i++)
        l_202[i] = 0x3FFDL;
    for (g_127 = 22; (g_127 > 43); g_127 = safe_add_func_int64_t_s_s(g_127, 5))
    { 
        int8_t l_203 = 0xCCL;
        struct S0 l_209 = {1UL,18446744073709551615UL,1UL,0L,0x8762AC07L};
        g_204 ^= ((safe_div_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((g_167.f0 = (p_18 < (safe_div_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(g_89.f0, 6)) >= ((g_41 , ((safe_lshift_func_int16_t_s_u(((safe_div_func_uint8_t_u_u(l_202[1], g_164)) > p_20), g_89.f2)) == l_203)) , p_20)), g_105[0].f0)))), 0x1FL)) , 0UL) & 0xE3592EE3L), p_19)) | l_202[1]);
        for (g_157.f2 = 0; (g_157.f2 != 0); g_157.f2 = safe_add_func_uint8_t_u_u(g_157.f2, 8))
        { 
            struct S0 l_207 = {0UL,18446744073709551609UL,0x9AD1L,0xC72D1252L,8L};
            l_208[0][1] = l_207;
            l_209 = g_105[0];
        }
    }
    return g_105[0].f4;
}



static uint32_t  func_22(uint16_t  p_23, int16_t  p_24, const struct S0  p_25, uint8_t  p_26, uint32_t  p_27)
{ 
    uint16_t l_30 = 0x1477L;
    int32_t l_38[1];
    int32_t l_39 = 0x5BB5FB49L;
    union U2 l_45 = {7UL};
    uint16_t l_61 = 0x07B8L;
    uint32_t l_62 = 0xCBC8CA92L;
    uint32_t l_72 = 0xCEB03922L;
    uint16_t l_111[4];
    uint16_t l_154 = 5UL;
    int i;
    for (i = 0; i < 1; i++)
        l_38[i] = 0x2C298C24L;
    for (i = 0; i < 4; i++)
        l_111[i] = 3UL;
    g_31 = l_30;
    if (func_32(((1UL != 0xF5L) || 0x74F5L), (--g_42), (p_27 = ((l_30 <= p_23) && l_30)), p_25.f2, l_45))
    { 
        uint64_t l_56 = 0xEFD9132E88240862LL;
        int32_t l_69 = 1L;
        g_63 = (safe_lshift_func_uint16_t_u_s((g_40 <= ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((p_24 = 0L), 10)), 10)) ^ ((safe_mul_func_uint8_t_u_u(((l_56 , ((safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(p_25.f0, 0x6696L)), l_61)) && l_62)) , l_45.f2), 0xFEL)) ^ p_25.f2))), 3));
        l_69 = (safe_lshift_func_int16_t_s_u(((~(g_5[0] || (g_63 < (safe_sub_func_uint32_t_u_u((((l_45.f2 && (p_25 , 0x00286F3A6950E6E2LL)) & p_24) && g_5[0]), l_56))))) < 0x00L), g_41));
        l_69 = (l_61 , (((safe_div_func_uint64_t_u_u(g_5[0], g_63)) == g_63) != l_72));
    }
    else
    { 
        union U3 l_77 = {0xACABD119L};
        int32_t l_78 = 0x75FBD26DL;
        int32_t l_109 = 4L;
        if (((18446744073709551614UL < (((p_23 || (l_78 ^= (safe_div_func_uint64_t_u_u((l_77 , g_41), l_61)))) && 0L) < 0UL)) >= 3UL))
        { 
            int64_t l_107 = 0xF57EB90776C5754DLL;
            const int8_t l_108 = 0x84L;
            if (l_45.f0)
            { 
                return l_30;
            }
            else
            { 
                int32_t l_106[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_106[i] = 0L;
                g_110 = (safe_mod_func_int64_t_s_s(0x42E2EE0BD24A1705LL, (((safe_add_func_uint32_t_u_u(((((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_109 = (((safe_mul_func_uint8_t_u_u((g_89 , 0x85L), (g_41 = ((safe_div_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s((l_78 = ((l_107 = (safe_lshift_func_uint16_t_u_u((((l_106[0] = (((safe_rshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s((((((safe_mod_func_int16_t_s_s((g_104 &= (safe_lshift_func_int8_t_s_u(g_31, 5))), g_42)) <= 0x79BBDC21L) == 0x8564L) >= p_25.f0) < 0x7357609E5B73647BLL), 0xE1143771L)) , p_25.f3) , p_27), l_45.f2)) , g_105[0]) , g_105[0].f4)) , l_39) ^ g_105[0].f4), 6))) <= 0UL)), l_108)) || p_27) < g_105[0].f1), l_108)) || g_31)))) >= l_108) ^ l_108)) <= g_5[0]) , p_25.f1), 7)) <= 1UL), p_23)) , p_25.f4) <= p_27) && g_63), 4294967295UL)) <= 1L) & g_31)));
                g_105[0] = p_25;
            }
            --l_111[1];
        }
        else
        { 
            for (l_109 = (-4); (l_109 == (-4)); ++l_109)
            { 
                int32_t l_116 = 8L;
                if (p_25.f1)
                    break;
                l_116 = 1L;
            }
        }
        for (p_23 = (-10); (p_23 == 10); p_23 = safe_add_func_uint64_t_u_u(p_23, 9))
        { 
            int8_t l_128[5];
            int32_t l_133 = (-4L);
            int32_t l_134 = 2L;
            union U2 l_156 = {0x71L};
            int i;
            for (i = 0; i < 5; i++)
                l_128[i] = 3L;
            if (p_24)
            { 
                uint32_t l_129 = 9UL;
                int32_t l_135 = 0x72C0FF22L;
                int32_t l_136 = 0xDF77CBFDL;
                union U2 l_155 = {0x92L};
                g_130 |= (safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_31 <= ((g_105[0].f0 || ((safe_lshift_func_uint8_t_u_u((g_105[0].f2 > (safe_mod_func_uint16_t_u_u(((l_128[1] = ((5L & g_127) , p_25.f2)) == p_26), p_23))), 1)) , l_129)) != g_89.f0)), g_63)), 0UL));
                l_133 |= (safe_rshift_func_int16_t_s_u((((--p_27) ^ (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((l_39 & ((l_156 = ((safe_sub_func_uint64_t_u_u((7L > (((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((!((((safe_lshift_func_uint8_t_u_s((0L <= (p_25.f0 && p_24)), 3)) || g_31) != p_25.f2) , p_23)) && 0x1C7EL), 1)), 0x45FD3A0BC11C586FLL)) & l_134) == l_128[3]), l_128[1])) || l_154) ^ p_25.f1)), p_25.f0)) , l_155)) , l_135)) > p_23), 4)), 0xF08CL))) > g_63), p_25.f0));
                l_134 = 0x67F3A6B8L;
            }
            else
            { 
                union U2 l_160 = {252UL};
                int32_t l_161 = (-9L);
                g_164 = ((g_157 , ((safe_add_func_uint16_t_u_u(g_157.f0, (l_133 = (l_160 , (++g_104))))) , (g_105[0].f0 = p_25.f2))) , g_40);
                return p_25.f2;
            }
            for (l_156.f2 = 0; (l_156.f2 <= 5); ++l_156.f2)
            { 
                int32_t l_172 = 0x8C539415L;
                uint8_t l_173 = 0xA2L;
                int32_t l_186[4][3] = {{1L,1L,0xA8BF02E3L},{(-2L),0xA8BF02E3L,0xA8BF02E3L},{0xA8BF02E3L,1L,1L},{(-2L),1L,(-2L)}};
                int32_t l_187 = 0xADAD8518L;
                int i, j;
                l_38[0] = (g_167 , ((safe_rshift_func_int8_t_s_s(0x99L, 6)) > ((safe_mul_func_uint8_t_u_u(((l_133 = ((l_172 ^ l_77.f0) ^ g_167.f0)) , g_5[0]), l_173)) <= 0xBFC28CD2L)));
                l_187 = (l_186[3][2] = ((((safe_rshift_func_int16_t_s_s(2L, (safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_38[0] &= ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((g_104 >= (g_105[0].f2 <= (l_133 = ((safe_add_func_int32_t_s_s((g_31 < p_25.f2), p_25.f2)) == g_89.f2)))), g_5[0])), 7)) & l_156.f0)), 0UL)), p_23)))) & g_42) || 0xD95DL) , l_109));
                if (g_105[0].f4)
                    continue;
            }
        }
        return g_104;
    }
    return p_25.f2;
}



static int32_t  func_32(int32_t  p_33, uint32_t  p_34, uint32_t  p_35, uint16_t  p_36, union U2  p_37)
{ 
    union U1 l_46 = {0x0CL};
    int32_t l_47 = 0x1081B270L;
    l_47 ^= (l_46 , (-3L));
    return p_34;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_105[i].f0, "g_105[i].f0", print_hash_value);
        transparent_crc(g_105[i].f1, "g_105[i].f1", print_hash_value);
        transparent_crc(g_105[i].f2, "g_105[i].f2", print_hash_value);
        transparent_crc(g_105[i].f3, "g_105[i].f3", print_hash_value);
        transparent_crc(g_105[i].f4, "g_105[i].f4", print_hash_value);

    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167.f0, "g_167.f0", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
