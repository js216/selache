// SPDX-License-Identifier: MIT
// cctest_csmith_b676d1a9.c --- cctest case csmith_b676d1a9 (csmith seed 3061240233)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x60b02735 */
/* @exp_ticks 0x3ec2 */

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

// Options:   -s 3061240233 -o /home/agent1/fast_data/tmp/csmith_gen_j031k4se/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
};

union U1 {
   uint64_t  f0;
};

union U2 {
   int32_t  f0;
   int64_t  f1;
};


static int32_t g_2 = 0xD386CCE5L;
static int32_t g_6 = 0xF6C74AA0L;
static int32_t g_33 = 0x9C4DDB84L;
static uint64_t g_34 = 18446744073709551614UL;
static struct S0 g_36 = {4L,5UL};
static int16_t g_51 = 1L;
static uint64_t g_73 = 0x34BB1B2B1506F573LL;
static int32_t g_88 = 0xD4F66362L;
static int32_t g_89 = 0L;
static uint8_t g_121 = 0UL;
static int32_t g_181 = (-9L);
static uint8_t g_184 = 0UL;
static union U1 g_210 = {1UL};
static int8_t g_236 = 6L;
static int16_t g_238 = (-3L);
static uint8_t g_239[3][3][5] = {{{4UL,9UL,0xF8L,0xF8L,9UL},{4UL,9UL,0xF8L,0xF8L,9UL},{4UL,9UL,0xF8L,0xF8L,9UL}},{{4UL,9UL,0xF8L,0xF8L,9UL},{4UL,9UL,0xF8L,0xF8L,9UL},{4UL,9UL,0xF8L,0xF8L,9UL}},{{4UL,9UL,0xF8L,0xF8L,9UL},{4UL,9UL,0xF8L,0xF8L,9UL},{4UL,9UL,0xF8L,0xF8L,9UL}}};
static int8_t g_278 = 0x8DL;
static const union U2 g_310 = {0x265C5504L};
static struct S0 g_318 = {4L,65535UL};
static uint32_t g_332 = 0xFF6CCFB4L;



static const int8_t  func_1(void);
static int32_t  func_7(int16_t  p_8);
static int16_t  func_16(uint16_t  p_17, uint32_t  p_18, int64_t  p_19);
static uint16_t  func_24(int32_t  p_25, int64_t  p_26, uint32_t  p_27);




static const int8_t  func_1(void)
{ 
    union U2 l_5[5] = {{0x7A6DEEC5L},{0x7A6DEEC5L},{0x7A6DEEC5L},{0x7A6DEEC5L},{0x7A6DEEC5L}};
    int32_t l_54 = 0xB7835602L;
    uint8_t l_55[4] = {0x3CL,0x3CL,0x3CL,0x3CL};
    int32_t l_312 = 0L;
    int i;
    for (g_2 = 0; (g_2 >= (-7)); g_2 = safe_sub_func_int32_t_s_s(g_2, 2))
    { 
        int64_t l_279[1][5] = {{0x200749428BCF449ALL,0x200749428BCF449ALL,0x200749428BCF449ALL,0x200749428BCF449ALL,0x200749428BCF449ALL}};
        struct S0 l_314 = {1L,0xF3D0L};
        int32_t l_329 = 1L;
        int i, j;
        for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
        { 
            int8_t l_32 = 0L;
            l_312 ^= func_7((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((g_278 = (+(func_16((g_6 , (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_24(g_6, (g_34 &= (0x1780EEC2L && ((safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(((g_33 |= l_32) != g_6), g_6)), 0x275FF4442628217CLL)) , g_33))), g_6), g_2)), l_54))), l_32, l_55[0]) >= 2UL))), g_6)) , (-4L)), 2)), l_279[0][4])));
            if (g_238)
            { 
                l_314.f0 = ((((+(g_278 < (((((l_314 , (safe_sub_func_int32_t_s_s((g_89 = l_314.f0), (0x84E1F444ABC4ACA0LL || l_54)))) <= g_33) == 0xBB289A04L) , l_32) , g_238))) , g_36.f1) && g_89) || 6UL);
            }
            else
            { 
                struct S0 l_317[1][3][5] = {{{{0x7D273A75L,0x4EAAL},{-10L,0xDEBBL},{-10L,0xDEBBL},{0x7D273A75L,0x4EAAL},{-10L,0xDEBBL}},{{0x567EC094L,0xD4EAL},{0x567EC094L,0xD4EAL},{0x81C6F64AL,65527UL},{0x567EC094L,0xD4EAL},{0x567EC094L,0xD4EAL}},{{-10L,0xDEBBL},{0x7D273A75L,0x4EAAL},{-10L,0xDEBBL},{-10L,0xDEBBL},{0x7D273A75L,0x4EAAL}}}};
                int i, j, k;
                if (l_32)
                    break;
                g_318 = (l_317[0][0][4] = l_317[0][1][2]);
                g_318 = g_36;
            }
            for (l_314.f0 = 3; (l_314.f0 >= 0); l_314.f0 -= 1)
            { 
                union U1 l_321 = {0xFB2C7E0AD0DFBB70LL};
                struct S0 l_322 = {9L,65535UL};
                g_36.f0 = (((g_239[1][0][0] , ((!(safe_unary_minus_func_uint8_t_u(l_279[0][4]))) >= ((l_321 , (l_321.f0 >= g_2)) && g_88))) || l_32) < g_239[1][0][0]);
                l_329 = (g_318.f0 = ((g_36 = l_322) , (safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s(l_279[0][4], g_239[1][0][0])) , (g_51 = (l_322.f0 = (safe_mod_func_uint64_t_u_u(g_2, 0xBDF167376010C94ALL))))) < l_279[0][4]), l_32))));
            }
        }
        for (g_210.f0 = (-3); (g_210.f0 <= 13); g_210.f0 = safe_add_func_uint64_t_u_u(g_210.f0, 3))
        { 
            g_332++;
        }
    }
    return g_210.f0;
}



static int32_t  func_7(int16_t  p_8)
{ 
    int64_t l_284 = (-8L);
    int32_t l_302 = (-10L);
    union U2 l_309 = {-3L};
    if (p_8)
    { 
        uint32_t l_301 = 0x3FFCC7CFL;
        uint32_t l_303[4][2] = {{4294967287UL,4294967287UL},{4294967287UL,4294967287UL},{4294967287UL,4294967287UL},{4294967287UL,4294967287UL}};
        int i, j;
        if ((((((((g_184 < (((safe_div_func_uint64_t_u_u(0UL, (safe_mul_func_int8_t_s_s(l_284, (l_284 > g_51))))) != 0xE669EC0A325B1714LL) >= 0x9A834AAAL)) , p_8) <= (-5L)) ^ g_36.f1) > 7UL) <= 0xB9D798BD247DEDECLL) , g_184))
        { 
            uint8_t l_289[3][5] = {{248UL,248UL,249UL,248UL,248UL},{0x96L,251UL,0x96L,0x96L,251UL},{248UL,248UL,248UL,248UL,248UL}};
            int i, j;
            for (p_8 = (-2); (p_8 < (-30)); p_8--)
            { 
                g_89 = (l_289[1][1] = ((safe_sub_func_int16_t_s_s(g_278, g_181)) >= 3UL));
            }
        }
        else
        { 
            union U2 l_300 = {0L};
            l_302 ^= ((safe_mod_func_int32_t_s_s(0x0F4C23C4L, 0x4161C9ACL)) , (((g_89 = (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((l_300.f0 = (safe_rshift_func_uint8_t_u_u(0UL, (g_121 = (safe_add_func_int16_t_s_s((l_300 , l_301), 0xFD46L)))))), g_238)) < 0x18BF66C19CA71FDFLL) <= g_210.f0), l_284))) <= l_284) >= p_8));
            return l_303[2][0];
        }
        g_89 |= ((safe_lshift_func_uint8_t_u_u((~l_284), ((safe_sub_func_int16_t_s_s((((l_309.f0 = ((l_301 , (((l_309 , 0L) , g_36) , g_310)) , g_88)) ^ l_302) != l_303[2][1]), 0x640CL)) || g_36.f1))) || l_302);
    }
    else
    { 
        int32_t l_311 = 1L;
        return l_311;
    }
    return g_278;
}



static int16_t  func_16(uint16_t  p_17, uint32_t  p_18, int64_t  p_19)
{ 
    int64_t l_64 = 6L;
    int32_t l_65 = 0x7ECA51C1L;
    int32_t l_70 = (-1L);
    int32_t l_71[5] = {0x0AD5834DL,0x0AD5834DL,0x0AD5834DL,0x0AD5834DL,0x0AD5834DL};
    int32_t l_72[5];
    const union U2 l_80[1][4] = {{{5L},{5L},{5L},{5L}}};
    struct S0 l_96[2][1][5] = {{{{0xE3403064L,4UL},{0xE3403064L,4UL},{0xE3403064L,4UL},{0xE3403064L,4UL},{0xE3403064L,4UL}}},{{{0xE3403064L,4UL},{0xE3403064L,4UL},{0xE3403064L,4UL},{0xE3403064L,4UL},{0xE3403064L,4UL}}}};
    uint32_t l_124[1];
    const int32_t l_228 = (-10L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_72[i] = 0x36FDE002L;
    for (i = 0; i < 1; i++)
        l_124[i] = 4294967294UL;
    if (((safe_mod_func_uint16_t_u_u(g_34, ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((l_65 = (1UL & (safe_div_func_int64_t_s_s((l_64 != l_64), p_19)))) ^ 1L), 7)), 0L)) || p_19))) != l_64))
    { 
        const uint8_t l_84 = 0x9DL;
        if ((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((g_34 = p_18), (g_73++))) == 0x43E267A5L), p_17)))
        { 
            for (g_51 = (-10); (g_51 != (-8)); g_51 = safe_add_func_int64_t_s_s(g_51, 1))
            { 
                return p_19;
            }
        }
        else
        { 
            uint32_t l_87 = 0x9A5CE765L;
            g_88 ^= ((+(-3L)) < (safe_unary_minus_func_uint32_t_u((l_80[0][1] , (((l_87 = ((safe_unary_minus_func_int64_t_s((l_84 == (safe_mul_func_uint16_t_u_u(p_19, 0L))))) | p_17)) == l_84) && p_19)))));
        }
        return g_89;
    }
    else
    { 
        const int32_t l_106 = 2L;
        int32_t l_111 = 0xC8398D9BL;
        int32_t l_112 = 0xFB341928L;
        l_112 |= ((safe_sub_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s(((g_36 = l_96[1][0][4]) , (safe_div_func_int32_t_s_s((+(safe_mod_func_int64_t_s_s((((safe_div_func_int16_t_s_s((((((safe_rshift_func_uint8_t_u_s((g_34 == l_106), ((safe_sub_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((l_111 = p_17), 0xEAL)) && p_17) > g_89), 0xAEL)) , g_73))) , l_111) & 9UL) & 0x176CL) | g_33), 0x37F7L)) != (-10L)) & p_17), 18446744073709551615UL))), g_34))), 0x904586DBL)) != p_19), 0x45D7L)) > (-10L)) , g_73) <= 0xC763L), 1L)) , 7L);
    }
    if ((l_96[1][0][4].f0 &= (safe_lshift_func_int16_t_s_s((((l_80[0][2] , (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_89, (safe_div_func_uint32_t_u_u((g_121 = l_72[1]), (safe_sub_func_uint8_t_u_u(0UL, 250UL)))))), l_71[1]))) ^ 65534UL) >= l_124[0]), p_18))))
    { 
        int32_t l_156 = 0x3AF947C6L;
        struct S0 l_159 = {0L,65526UL};
        for (g_88 = 0; (g_88 == (-29)); g_88 = safe_sub_func_int32_t_s_s(g_88, 2))
        { 
            uint32_t l_127 = 6UL;
            int32_t l_157 = 0x24141E32L;
            int32_t l_158 = 0x0F790E20L;
            ++l_127;
            l_158 &= (safe_div_func_uint64_t_u_u(((0UL ^ ((((-10L) ^ l_127) == ((safe_unary_minus_func_uint64_t_u((safe_mul_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((l_71[0] = ((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_157 = ((((l_96[1][0][4].f0 = ((((safe_mod_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((g_88 != p_17))), 4294967295UL)) == p_19), p_18)) < g_88) == g_51) != 8L)) == l_65) || l_156) && l_156)), 6)), l_156)), g_36.f1)) ^ (-1L)) & p_18), l_156)) < 0x69L)) < p_17), p_19)), g_51)), p_17)) && 0x72254074L) < 2L), l_156)) <= l_156) | l_156), 0xD8L)))) > l_64)) && 0x2EL)) > g_121), (-5L)));
            l_96[0][0][3] = l_159;
        }
        if ((((safe_mul_func_uint16_t_u_u(((+(g_2 < (safe_mul_func_uint16_t_u_u(g_51, (safe_mod_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(0x8BFC0376L, l_156)), g_36.f0)))))) , l_156), g_89)) > 1UL) & g_34))
        { 
            uint32_t l_171 = 0x888D3F9EL;
            for (g_33 = 0; (g_33 > 0); ++g_33)
            { 
                --l_171;
            }
            g_36.f0 = (safe_rshift_func_int8_t_s_u(0xE9L, (g_184 = (l_72[2] = (safe_unary_minus_func_uint64_t_u(((safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((l_159.f1 >= (g_181 = (-10L))) < (safe_mul_func_int16_t_s_s(g_88, 0x3CDBL))), l_159.f0)), 0x8EC998684FA51A12LL)) > g_36.f0)))))));
        }
        else
        { 
            int8_t l_195 = (-10L);
            int32_t l_196 = 1L;
            g_36.f0 &= (((l_196 = ((((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_2, (safe_mul_func_uint16_t_u_u((g_51 , ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_18, (g_34 | 1L))), 0x6AL)) && g_33)), 1L)))), l_156)) >= g_181) & l_195) > g_89)) > 0x8C22L) > 0xA939E12E8AAE058FLL);
        }
        g_36.f0 = ((safe_mod_func_int16_t_s_s((g_181 != (((safe_unary_minus_func_int8_t_s((l_159.f0 = (0xBE6DL || (0x563165A292D23B91LL >= ((safe_sub_func_int64_t_s_s(((l_72[2] |= 1L) || l_156), g_34)) && g_88)))))) > 0x6EFE925C9C59BD72LL) & g_51)), l_159.f1)) == g_2);
    }
    else
    { 
        union U2 l_202 = {-2L};
        int32_t l_230 = (-1L);
        if (((((l_202 , ((l_96[1][0][4].f1 ^ p_18) || p_19)) && l_124[0]) & g_51) < 0x72DDL))
        { 
            struct S0 l_203 = {0L,0xFCF5L};
            uint32_t l_220 = 2UL;
            g_36 = l_203;
            l_65 &= (g_34 == ((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_210 , ((safe_mod_func_int8_t_s_s((g_121 > ((((l_71[1] &= (((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((~((l_202.f0 != 0x547DL) , p_19)), g_184)) , p_19) | g_184), p_19)) , l_220) == g_181)) > p_19) , 0xABL) == g_121)), g_89)) && 1L)), p_18)), 13)), p_17)) ^ g_184));
        }
        else
        { 
            int16_t l_229 = 0x8B3BL;
            g_36.f0 = (l_71[1] <= (g_89 = ((safe_lshift_func_int8_t_s_s(l_202.f0, ((l_230 = (~(safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((p_19 < l_228) > 1UL) && g_51), p_17)), l_229)))) ^ l_72[2]))) & l_202.f0)));
        }
    }
    for (p_19 = 0; (p_19 >= 0); p_19 -= 1)
    { 
        int32_t l_237 = 1L;
        union U2 l_276 = {0L};
        for (g_89 = 0; (g_89 >= 0); g_89 -= 1)
        { 
            int i;
            l_72[p_19] = l_72[(g_89 + 3)];
            for (l_70 = 0; (l_70 <= 0); l_70 += 1)
            { 
                int i;
                l_72[(g_89 + 4)] &= (65526UL | ((0xEB716F4F35B7F529LL || ((safe_rshift_func_int16_t_s_s(l_96[1][0][4].f0, p_17)) >= l_124[0])) != p_19));
                g_236 = (0x1EF3BD04L | (g_36.f0 = (((l_72[2] = (safe_add_func_int64_t_s_s((~(((g_210.f0 > p_19) ^ 0x5CABCBA9L) || p_18)), 0UL))) && 4294967293UL) < p_17)));
                l_72[(g_89 + 4)] ^= g_210.f0;
            }
        }
        g_239[1][0][0]++;
        for (g_34 = 0; (g_34 <= 0); g_34 += 1)
        { 
            int64_t l_248 = 0xB8B4CAA5AC24F387LL;
            l_237 = 0xF473321FL;
            l_248 &= (p_17 , (g_236 == (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((-4L), (safe_div_func_uint64_t_u_u((p_18 & p_17), 0x98A6DB2C2C7609B5LL)))), g_73))));
            for (l_65 = 0; (l_65 <= 0); l_65 += 1)
            { 
                l_237 = (-10L);
            }
        }
        for (l_64 = 0; (l_64 <= 0); l_64 += 1)
        { 
            union U1 l_263 = {1UL};
            union U2 l_275 = {0x23E87904L};
            for (g_88 = 0; (g_88 >= 0); g_88 -= 1)
            { 
                int i, j, k;
                g_89 ^= (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(g_239[g_88][(p_19 + 2)][(g_88 + 4)], ((safe_rshift_func_int16_t_s_s(7L, (safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s((-1L), 0x5E07L)), 5L)))) || g_239[(p_19 + 2)][l_64][(l_64 + 3)]))) ^ l_71[(l_64 + 1)]) < 251UL), (-5L)));
            }
            if (p_18)
            { 
                g_36.f0 ^= (l_70 = (0x478FC7E9L && (safe_lshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s(p_17, p_19)) ^ ((g_210 = l_263) , g_33)), 8))));
                return p_18;
            }
            else
            { 
                uint16_t l_277 = 0x396BL;
                g_89 = (((safe_div_func_uint32_t_u_u(g_238, (safe_sub_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(0xE0L, (l_237 && ((((safe_mod_func_int32_t_s_s((!(safe_sub_func_int16_t_s_s(((l_276 = l_275) , l_263.f0), 65535UL))), g_184)) >= 0x556C135286ADEA88LL) ^ g_33) || 0x47501276L)))) , l_277) | p_19) || g_236), 250UL)))) <= l_237) , g_6);
                return p_19;
            }
        }
    }
    return l_96[1][0][4].f0;
}



static uint16_t  func_24(int32_t  p_25, int64_t  p_26, uint32_t  p_27)
{ 
    struct S0 l_35 = {0x261718BCL,65535UL};
    int32_t l_52 = 0x9EF5B506L;
    int32_t l_53 = 0x4ADE726FL;
    g_36 = l_35;
    l_53 ^= ((l_52 = ((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_6 && (g_33 && ((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((g_51 = (g_34 , (safe_mul_func_int8_t_s_s(((l_35.f0 |= (safe_mul_func_int16_t_s_s(g_6, l_35.f1))) ^ p_27), l_35.f1)))), 9)) <= l_35.f1), g_36.f0)) != l_35.f1))), 0x9AL)), 2)) , p_26)) & p_25);
    return l_52;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_239[i][j][k], "g_239[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    transparent_crc(g_318.f1, "g_318.f1", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
