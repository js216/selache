// SPDX-License-Identifier: MIT
// cctest_csmith_b9cc3144.c --- cctest case csmith_b9cc3144 (csmith seed 3117166916)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5de9258a */
/* @exp_ticks 0x3d5 */

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

// Options:   -s 3117166916 -o /home/agent1/fast_data/tmp/csmith_gen_bfdtogov/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int8_t  f0;
};

struct S1 {
   uint32_t  f0;
   int16_t  f1;
   int32_t  f2;
};

union U2 {
   int32_t  f0;
   int8_t  f1;
   uint32_t  f2;
   uint8_t  f3;
};


static int32_t g_2 = 0x214C405BL;
static int32_t g_4 = 0x71867B8FL;
static uint32_t g_5 = 0x69F30CC2L;
static uint8_t g_31 = 0xB3L;
static struct S1 g_34 = {0xC9BF5E4DL,-1L,0x5A61940CL};
static int16_t g_52 = 1L;
static uint32_t g_58 = 0x2E43232AL;
static uint64_t g_63 = 0x786CB52F506A54EELL;
static struct S0 g_94 = {0xC2L};
static uint64_t g_96 = 0xF873594313D3D183LL;
static int16_t g_117 = 0x5305L;
static uint32_t g_141[5] = {1UL,1UL,1UL,1UL,1UL};
static uint64_t g_145 = 0x29738531772C44E1LL;
static uint32_t g_167 = 0UL;
static struct S0 g_201 = {-3L};
static union U2 g_218 = {2L};
static int64_t g_229 = 0x9FDE94E36BB2AB67LL;
static int32_t g_234 = 0xFB0687F2L;
static int32_t g_236 = 0xAA1C89E3L;
static uint32_t g_237[2] = {18446744073709551614UL,18446744073709551614UL};



static int16_t  func_1(void);
static struct S0  func_8(uint16_t  p_9);
static int32_t  func_24(union U2  p_25, uint64_t  p_26);
static struct S1  func_28(uint64_t  p_29, int32_t  p_30);




static int16_t  func_1(void)
{ 
    uint64_t l_3 = 18446744073709551615UL;
    int32_t l_98 = 0x902D4ECAL;
    int64_t l_139 = 0xD42CCF7F33B7E8F3LL;
    uint8_t l_140 = 0xC0L;
    struct S1 l_142 = {0x2F7FA051L,7L,0x7258353CL};
    struct S1 l_144 = {18446744073709551613UL,0x8EE9L,0L};
    struct S0 l_168 = {0x75L};
    int32_t l_177 = 0x836BFEFFL;
    const int8_t l_213 = 0xE1L;
    g_2 = 2L;
    if ((g_2 , l_3))
    { 
        uint16_t l_10 = 65533UL;
        const struct S0 l_137[1][3] = {{{0xBBL},{0xBBL},{0xBBL}}};
        int32_t l_138 = 7L;
        struct S1 l_143 = {0xA75DD027L,0L,0x417AC5C0L};
        int i, j;
        g_5--;
        if (l_3)
        { 
            struct S0 l_97 = {0x83L};
            l_97 = func_8(l_10);
        }
        else
        { 
            int8_t l_106[5][2][1] = {{{0xD6L},{0xDFL}},{{0xD6L},{0xDFL}},{{0xD6L},{0xDFL}},{{0xD6L},{0xDFL}},{{0xD6L},{0xDFL}}};
            int32_t l_111 = (-3L);
            int32_t l_116[5] = {1L,1L,1L,1L,1L};
            int i, j, k;
            if (g_34.f2)
            { 
                return g_34.f2;
            }
            else
            { 
                l_98 = g_34.f1;
                l_98 = ((safe_unary_minus_func_uint16_t_u(((0xA7F7E758L && (g_4 >= (safe_mul_func_int8_t_s_s(((0x91L & (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((l_106[3][1][0] , g_52), 3)), g_34.f1))) ^ l_10), 0x98L)))) , g_5))) || g_63);
            }
            if ((((safe_mod_func_uint16_t_u_u(l_10, (safe_sub_func_int8_t_s_s(l_111, g_52)))) && (safe_div_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(0L, 0x40C8L)) == 0x22E389797D0E0566LL) | 7L), g_34.f0))) && l_106[3][1][0]))
            { 
                uint16_t l_118 = 65528UL;
                ++l_118;
                g_4 = (((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(l_10, ((safe_lshift_func_int16_t_s_u((g_117 = ((g_58 > g_34.f0) > g_34.f1)), 0)) && l_3))), 0)) & g_94.f0) ^ g_31);
            }
            else
            { 
                g_4 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((g_34.f0 != g_52), (g_52 | (safe_rshift_func_int8_t_s_u((l_140 &= (((l_138 ^= (safe_mul_func_uint8_t_u_u(((g_63 = (l_137[0][2] , l_137[0][2].f0)) || l_10), 0x36L))) != l_139) , g_2)), 4))))), 5)), g_34.f2));
            }
            if (l_137[0][2].f0)
            { 
                g_34 = func_28((g_63 = (g_34.f1 ^ ((((l_98 = 0L) && g_34.f2) ^ (g_58 > 0L)) , g_5))), g_141[0]);
                l_143 = l_142;
            }
            else
            { 
                l_144 = g_34;
                g_145--;
                g_2 = (!0x2C7F7F81C38EE3FELL);
            }
        }
    }
    else
    { 
        int16_t l_151[1];
        uint16_t l_217 = 65526UL;
        int64_t l_219 = 0L;
        int32_t l_222 = 0x3E3192B7L;
        int i;
        for (i = 0; i < 1; i++)
            l_151[i] = (-1L);
        if (l_139)
        { 
            uint16_t l_155[4];
            int8_t l_165[4] = {0L,0L,0L,0L};
            int64_t l_194 = 0xA04533268B7DADB2LL;
            int i;
            for (i = 0; i < 4; i++)
                l_155[i] = 2UL;
            for (l_98 = 0; (l_98 != (-10)); --l_98)
            { 
                uint64_t l_152 = 6UL;
                int32_t l_166 = 0x3FBD44C0L;
                uint64_t l_178 = 0UL;
                l_152++;
                l_168 = func_8((((g_31 <= l_155[1]) == g_31) < (~(((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((g_167 = ((l_166 = (((safe_mod_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(l_151[0], l_165[3])) == l_139) | g_4), g_117)) , 0xD7A0CA37L) , l_152)) ^ 0x5FC1EA649016727ELL)), 15)), l_151[0])) == l_151[0]) && 0x8AFA607CF5158564LL))));
                l_178 |= ((l_177 ^= (safe_mod_func_uint16_t_u_u(l_151[0], (safe_sub_func_int8_t_s_s(0x36L, ((safe_mul_func_int16_t_s_s(g_2, (safe_rshift_func_uint16_t_u_s(g_141[0], l_98)))) >= (-10L))))))) < l_165[3]);
            }
            for (g_4 = 4; (g_4 > (-4)); --g_4)
            { 
                uint8_t l_193 = 0x55L;
                g_2 &= g_141[0];
                g_2 = (+(((safe_add_func_int64_t_s_s((!0x61L), g_34.f2)) > (((safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s(g_58, ((0x1C9D4F09L >= 0UL) <= l_168.f0))) || g_141[3]) & 0xD43BL), 4)) && l_165[1]) , g_145) , 0x8BL), l_193)), 0x14A41B78C417BC72LL)) < l_194) , 0x08L)) >= g_96));
            }
        }
        else
        { 
            uint8_t l_199 = 0x2DL;
            uint32_t l_200 = 18446744073709551608UL;
            int32_t l_212 = 4L;
            g_4 = (safe_sub_func_int64_t_s_s((0xF0L <= ((safe_rshift_func_int16_t_s_u(((((l_199 = (g_94 , 0xFD34L)) , 0x8D3DA17FL) ^ g_5) <= g_141[2]), l_200)) >= g_4)), 0xBE5584E04F8DB93CLL));
            g_201 = func_8((g_141[0] != 0x1DA4L));
            for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
            { 
                int i;
                g_2 = (safe_mul_func_uint16_t_u_u((((l_212 = (((safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(g_141[g_4], (safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((0xAAB2A123F684F3E0LL >= 2L), 0x438B6353L)) || 7L), l_151[g_4])))) ^ (-1L)), g_141[g_4])) < 0x2E32L) != l_3)) , 7UL) >= (-9L)), l_213));
                l_219 = (g_52 , (safe_lshift_func_uint8_t_u_u(((~l_217) <= (l_151[g_4] = ((g_218 , 0xE7E7L) , (-1L)))), 7)));
            }
        }
        for (l_144.f1 = 29; (l_144.f1 >= 28); l_144.f1 = safe_sub_func_uint8_t_u_u(l_144.f1, 6))
        { 
            int64_t l_223 = (-10L);
            int32_t l_230 = 0xD9DD0687L;
            int32_t l_235 = 0x6958433AL;
            l_222 ^= ((g_58 && g_141[0]) && g_218.f1);
            if (l_223)
            { 
                int32_t l_224 = (-6L);
                g_34 = func_28(l_224, (safe_sub_func_uint64_t_u_u(((248UL && ((g_229 |= 65528UL) <= (l_230 &= g_117))) < g_34.f2), 0x7B06565B60AC7220LL)));
                g_34 = g_34;
            }
            else
            { 
                uint64_t l_231 = 0x530C7A2D7FE986FCLL;
                --l_231;
                --g_237[0];
            }
        }
    }
    g_201 = func_8(g_96);
    return l_144.f2;
}



static struct S0  func_8(uint16_t  p_9)
{ 
    uint16_t l_13 = 0xEDADL;
    union U2 l_27 = {0L};
    for (g_4 = 26; (g_4 == (-7)); --g_4)
    { 
        struct S1 l_35 = {0x687FD074L,-1L,0x72FA5D87L};
        int32_t l_95 = 0xD4D43A62L;
        l_13++;
        for (g_5 = 23; (g_5 != 47); g_5 = safe_add_func_uint32_t_u_u(g_5, 8))
        { 
            g_96 ^= (safe_sub_func_uint64_t_u_u(((l_95 = (((7L | (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(func_24(l_27, ((l_35 = func_28(l_27.f2, g_4)) , p_9)), g_5)), l_95))) >= p_9) >= p_9)) >= 8L), 1UL));
        }
        l_95 = 0x447E3892L;
    }
    return g_94;
}



static int32_t  func_24(union U2  p_25, uint64_t  p_26)
{ 
    int32_t l_50 = (-1L);
    struct S1 l_83[5][2] = {{{0x4A2B8684L,0xFFD3L,0x4F9076B3L},{0x4A2B8684L,0xFFD3L,0x4F9076B3L}},{{0x4A2B8684L,0xFFD3L,0x4F9076B3L},{0x4A2B8684L,0xFFD3L,0x4F9076B3L}},{{0x4A2B8684L,0xFFD3L,0x4F9076B3L},{0x4A2B8684L,0xFFD3L,0x4F9076B3L}},{{0x4A2B8684L,0xFFD3L,0x4F9076B3L},{0x4A2B8684L,0xFFD3L,0x4F9076B3L}},{{0x4A2B8684L,0xFFD3L,0x4F9076B3L},{0x4A2B8684L,0xFFD3L,0x4F9076B3L}}};
    int i, j;
    for (g_31 = 0; (g_31 > 48); ++g_31)
    { 
        int16_t l_38[5][1][4] = {{{1L,1L,(-7L),(-1L)}},{{(-1L),0x9405L,(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-7L),(-1L),0x9405L,(-1L)}},{{(-1L),1L,0x9405L,0x9405L}}};
        int32_t l_39[3][1][4];
        int64_t l_57 = (-1L);
        int32_t l_91 = 0x191D7193L;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_39[i][j][k] = 0L;
            }
        }
        for (p_25.f1 = 0; (p_25.f1 >= 0); p_25.f1 -= 1)
        { 
            uint64_t l_41 = 0x78F18B01197BA274LL;
            int32_t l_51 = 0x12777FC3L;
            l_39[0][0][2] = p_25.f3;
            for (p_26 = 0; (p_26 <= 0); p_26 += 1)
            { 
                int16_t l_40 = 0L;
                int32_t l_61 = 0x653144D9L;
                int32_t l_62 = 0x09C591EBL;
                int i, j, k;
                l_41--;
                g_2 = ((((((0x2EL && (g_52 = (l_51 |= (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(1L, (((((safe_div_func_uint8_t_u_u(l_38[(p_26 + 3)][p_25.f1][(p_25.f1 + 1)], l_40)) >= 0UL) & p_25.f1) <= 0x24D257E7E5FF1FC5LL) != 1UL))), l_50))))) == (-6L)) != 0x9A7B2E0AL) , l_50) >= 0x10L) , 6L);
                g_2 ^= (safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((++g_58), (--g_63))) < ((safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((l_61 = (safe_rshift_func_uint8_t_u_s(((g_34.f0 != (p_25.f3 , (((((((safe_mod_func_uint64_t_u_u(((((safe_div_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(p_25.f1, g_34.f2)) | p_25.f1) & l_51) & g_4), l_50)) & l_40) != p_25.f1) < g_31), g_4)) >= 0xB047L) == (-3L)) && 1L) ^ 0xCD85L) <= l_50) || g_34.f2))) , l_57), 0))), p_25.f1)), l_51)), 0)) <= p_26)), 0));
            }
        }
        if ((p_26 , (safe_mul_func_uint8_t_u_u(p_25.f1, 0x7DL))))
        { 
            struct S1 l_85 = {18446744073709551609UL,1L,0x5EB91548L};
            if (l_50)
            { 
                int64_t l_82 = 0x50D6AE9E85C28EE6LL;
                return l_82;
            }
            else
            { 
                struct S1 l_84 = {1UL,7L,0xE98DF1E5L};
                int32_t l_86 = (-9L);
                l_50 = 0x30EDDB64L;
                l_85 = (l_84 = l_83[0][0]);
                l_86 = l_84.f0;
            }
        }
        else
        { 
            l_91 &= (l_39[0][0][0] = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((-1L), 14)), l_83[0][0].f2)));
            for (p_25.f2 = 0; (p_25.f2 <= 11); ++p_25.f2)
            { 
                return p_25.f1;
            }
            g_34 = g_34;
        }
    }
    g_94 = g_94;
    return g_5;
}



static struct S1  func_28(uint64_t  p_29, int32_t  p_30)
{ 
    g_31--;
    return g_34;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_218.f3, "g_218.f3", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_237[i], "g_237[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
