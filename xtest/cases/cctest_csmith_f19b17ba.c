// SPDX-License-Identifier: MIT
// cctest_csmith_f19b17ba.c --- cctest case csmith_f19b17ba (csmith seed 4053473210)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc8630994 */
/* @exp_ticks 0x10cd */

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

// Options:   -s 4053473210 -o /home/agent1/fast_data/tmp/csmith_gen_je88awzl/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int8_t  f1;
   int16_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

union U1 {
   uint16_t  f0;
   uint32_t  f1;
   uint32_t  f2;
};

union U2 {
   int32_t  f0;
   uint32_t  f1;
   uint8_t  f2;
   int8_t  f3;
};

union U3 {
   const int64_t  f0;
};


static int8_t g_4 = 0x4FL;
static int64_t g_11 = 0x1A652065C829ED89LL;
static uint32_t g_38[1] = {0xBC712BADL};
static int8_t g_41 = 0x9BL;
static struct S0 g_45 = {0xF521L,1L,0xA52DL,0L};
static int32_t g_47 = 0xDF274C11L;
static struct S0 g_62 = {0xBF26L,0xDEL,0L,0x93BB3FD4L};
static uint32_t g_78 = 18446744073709551606UL;
static const union U1 g_121 = {4UL};
static uint32_t g_134[4][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
static int8_t g_136 = 8L;
static int16_t g_186[3][4] = {{0xA9DBL,2L,0xA9DBL,2L},{0xA9DBL,2L,0xA9DBL,2L},{0xA9DBL,2L,0xA9DBL,2L}};
static uint64_t g_187 = 18446744073709551611UL;



static const uint32_t  func_1(void);
static struct S0  func_2(uint16_t  p_3);
static uint64_t  func_16(uint32_t  p_17, int32_t  p_18, union U2  p_19, uint32_t  p_20, int32_t  p_21);
static uint32_t  func_24(int64_t  p_25, uint32_t  p_26, uint8_t  p_27, uint8_t  p_28);




static const uint32_t  func_1(void)
{ 
    struct S0 l_105 = {0x0EF8L,0xCBL,0x7A3DL,0x248D7427L};
    struct S0 l_106 = {0xDB3DL,-2L,1L,0xA8E11CF2L};
    int32_t l_156 = 0x11651DD7L;
    int64_t l_184 = (-10L);
    int32_t l_185 = 9L;
    l_106 = (l_105 = func_2(g_4));
    if (((safe_add_func_int64_t_s_s((l_105.f1 || l_106.f1), g_45.f0)) <= (((g_47 | 0x60L) || 0x7BL) != 0x8F58BFB5A67006BDLL)))
    { 
        uint32_t l_115[1];
        const int32_t l_116[4][5] = {{0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL},{0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL},{0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL},{0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL,0x7C683C3FL}};
        int64_t l_117 = 0x4A55526D78DB7E04LL;
        union U3 l_120[4][4] = {{{1L},{0L},{0L},{1L}},{{0L},{0L},{2L},{2L}},{{0L},{0L},{1L},{0L}},{{0L},{2L},{2L},{0L}}};
        int32_t l_122[5];
        int i, j;
        for (i = 0; i < 1; i++)
            l_115[i] = 0x47CB24E9L;
        for (i = 0; i < 5; i++)
            l_122[i] = 0x4E5B83B6L;
        g_47 = (((safe_mul_func_uint8_t_u_u(((l_115[0] = (safe_mul_func_uint8_t_u_u(g_45.f0, (safe_sub_func_int8_t_s_s(((g_4 != g_38[0]) && g_38[0]), 1L))))) >= l_116[0][2]), g_38[0])) || 0xA4L) < l_117);
        l_122[1] ^= (((g_47 && g_41) != ((safe_sub_func_uint16_t_u_u(g_38[0], ((l_120[0][2] , g_121) , 0UL))) | l_105.f0)) || 0xE1FFEC589AC8C392LL);
    }
    else
    { 
        int64_t l_153 = (-1L);
        union U1 l_154 = {0xF9F8L};
        int32_t l_158 = 5L;
        for (l_106.f2 = 0; (l_106.f2 >= 0); l_106.f2 -= 1)
        { 
            union U2 l_131 = {0x71C975FBL};
            int32_t l_135[3];
            int i;
            for (i = 0; i < 3; i++)
                l_135[i] = 0xFF0B4F35L;
            if (((safe_mul_func_int16_t_s_s((!0xA3AAL), (l_106.f3 , g_41))) , (+((g_78 || g_121.f0) & l_106.f2))))
            { 
                int i;
                l_105 = ((safe_mod_func_uint32_t_u_u((g_38[l_106.f2] = 0xD1AAD791L), (safe_lshift_func_int8_t_s_s((((((l_131 , 0xAB2D383E86663A56LL) != (safe_mod_func_uint32_t_u_u((g_136 = ((((l_135[0] |= (g_134[0][1] = (0xE2899D26L ^ 0x9E8A1AAAL))) != g_45.f1) ^ g_45.f3) && 0x0DL)), 0x3D49EA86L))) | g_45.f2) != g_11) > g_62.f1), 1)))) , g_45);
            }
            else
            { 
                int32_t l_139 = 0x4BC13751L;
                uint32_t l_155 = 18446744073709551615UL;
                uint16_t l_157 = 0x782AL;
                l_135[0] &= (safe_lshift_func_uint16_t_u_u(g_4, ((0xC80EF8999B4F4D21LL < ((g_62.f3 || (((l_139 = g_121.f0) <= l_106.f2) == g_11)) != g_4)) , l_139)));
                l_158 |= (((!(0xD10FCB5441F78AD5LL <= (safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((l_156 = (((((l_135[0] ^= (safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(0x81C1E56C3BA57B68LL, l_153)), g_45.f3)), 1L))) , l_154) , l_154.f0) | l_155) < g_45.f2)) ^ l_105.f0), l_139)) == 0xB8C84E1C3C384FE0LL), 2L)) , g_134[0][1]), g_78)))) , 0x71553A1BEE393E82LL) <= l_157);
            }
        }
        if ((g_47 |= (18446744073709551615UL < (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((((l_158 > (g_4 , (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_136, g_45.f0)), g_62.f0)))) ^ 1L) || 0x3B9AFEEB84604D86LL) & g_11), 0xC0L)), 2)))), g_136)), g_62.f1)))))
        { 
            uint64_t l_172 = 0x8F0C86490B889745LL;
            l_172 = g_11;
        }
        else
        { 
            g_47 &= 0xE4FE5DE1L;
            for (g_45.f1 = 0; (g_45.f1 > 22); g_45.f1++)
            { 
                int32_t l_183 = 1L;
                l_106 = l_106;
                l_184 = (safe_rshift_func_int8_t_s_s((g_45 , (((safe_add_func_int8_t_s_s((0xA86EL == (l_156 &= (((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_183 = (l_153 , (4UL ^ g_136))), 8L)), 65535UL)) || l_154.f0) ^ g_45.f0))), l_158)) | (-2L)) , g_11)), l_158));
                return l_105.f2;
            }
        }
        g_187++;
    }
    return g_47;
}



static struct S0  func_2(uint16_t  p_3)
{ 
    uint8_t l_42 = 3UL;
    union U2 l_43 = {9L};
    int8_t l_46 = 0x0FL;
    struct S0 l_58 = {8UL,3L,0x102FL,2L};
    int8_t l_60 = 0x9CL;
    const int32_t l_61 = 0x69E9DA12L;
    int32_t l_77 = 3L;
    uint32_t l_102 = 0x94C56F68L;
    g_47 = (p_3 == ((safe_unary_minus_func_int32_t_s(((g_38[0] = (safe_lshift_func_int16_t_s_u((!(((l_43.f0 = (((safe_sub_func_int32_t_s_s((g_11 = 0x83CC47D1L), (((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(func_16(((safe_add_func_uint32_t_u_u(func_24((g_4 <= p_3), p_3, g_4, g_4), 0x9C2D16CFL)) , l_42), l_42, l_43, p_3, g_4), 0x8A615B38D6AEAB66LL)), l_42)) || l_43.f0) || l_46))) & g_4) ^ g_4)) != p_3) == p_3)), g_4))) , l_43.f2))) || 0xF13EL));
    for (l_43.f1 = 19; (l_43.f1 <= 19); l_43.f1 = safe_add_func_uint16_t_u_u(l_43.f1, 4))
    { 
        int32_t l_55[1];
        int32_t l_59[1][5][3] = {{{0x1CA98231L,0L,0x1CA98231L},{0x14CD5900L,0x14CD5900L,0x14CD5900L},{0x1CA98231L,0L,0x1CA98231L},{0x14CD5900L,0x14CD5900L,0x14CD5900L},{0x1CA98231L,0L,0x1CA98231L}}};
        struct S0 l_63 = {0x1B24L,-1L,-1L,-7L};
        union U2 l_79 = {0x83981A73L};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_55[i] = 1L;
        if ((((2UL != (+(safe_add_func_int32_t_s_s(((l_55[0] = l_43.f0) || (l_60 = (((safe_mod_func_uint64_t_u_u(0xE3E0ECE951834415LL, ((l_58 = l_58) , l_59[0][0][2]))) ^ p_3) < 0xAA97CAD959FC8950LL))), l_61)))) >= l_42) == 0x3A76L))
        { 
            if (g_45.f2)
                break;
            l_63 = (g_62 = ((p_3 & p_3) , (g_45 = g_45)));
        }
        else
        { 
            int32_t l_74 = 0x2EE06DCFL;
            int32_t l_80[4][5] = {{(-3L),0x2F9027EAL,(-3L),(-3L),0x2F9027EAL},{0x23680871L,0x4A182F72L,0x4A182F72L,0x23680871L,0x4A182F72L},{0x2F9027EAL,0x2F9027EAL,0x8400EC86L,0x2F9027EAL,0x2F9027EAL},{0x4A182F72L,0x23680871L,0x4A182F72L,0x4A182F72L,0x23680871L}};
            int i, j;
            for (g_62.f0 = 0; (g_62.f0 >= 17); g_62.f0++)
            { 
                l_58 = l_63;
            }
            g_47 = g_45.f1;
            for (g_62.f3 = 0; (g_62.f3 <= 0); g_62.f3 += 1)
            { 
                int i;
                l_59[0][1][1] &= ((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(0x6AL, 3)) | (safe_rshift_func_int8_t_s_u(((l_74 = g_38[g_62.f3]) && (g_45.f0 = (((((g_78 = (l_77 = (safe_mul_func_int8_t_s_s(g_38[g_62.f3], (g_38[g_62.f3] ^ g_38[g_62.f3]))))) > g_38[g_62.f3]) , l_79) , l_58.f2) && 0x35BD15A5L))), p_3))), l_80[0][2])), l_80[0][2])) <= l_60);
            }
        }
        for (g_11 = 0; (g_11 < 29); g_11 = safe_add_func_int64_t_s_s(g_11, 5))
        { 
            int8_t l_89[4];
            int32_t l_90 = 0x3BDBB176L;
            int i;
            for (i = 0; i < 4; i++)
                l_89[i] = 0xFFL;
            if ((~(((safe_rshift_func_int8_t_s_s(g_38[0], 2)) > (+((safe_add_func_uint64_t_u_u((l_90 |= l_89[3]), ((g_62.f3 & ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_89[3], g_78)) >= g_38[0]), 0x24B1L)) , 0xB194L)) != g_45.f3))) ^ 0x6264L))) && l_58.f0)))
            { 
                struct S0 l_95 = {0x2197L,0x42L,0L,0xF5884173L};
                l_95 = l_63;
            }
            else
            { 
                if (p_3)
                    break;
            }
            g_47 = p_3;
        }
        l_77 = ((((safe_mul_func_int8_t_s_s((l_43 , (((0xFB89L && (18446744073709551608UL > ((((safe_mul_func_uint16_t_u_u(((l_58 , l_79.f0) , l_63.f2), 0x2C35L)) >= g_41) == p_3) != p_3))) & 0x84L) || p_3)), g_4)) > g_38[0]) & 0x6A6BL) > (-1L));
    }
    ++l_102;
    return l_58;
}



static uint64_t  func_16(uint32_t  p_17, int32_t  p_18, union U2  p_19, uint32_t  p_20, int32_t  p_21)
{ 
    struct S0 l_44 = {1UL,0L,0x7E9AL,0L};
    g_45 = l_44;
    return l_44.f3;
}



static uint32_t  func_24(int64_t  p_25, uint32_t  p_26, uint8_t  p_27, uint8_t  p_28)
{ 
    int8_t l_31 = 2L;
    int32_t l_39 = (-1L);
    uint32_t l_40 = 0xEE00B46FL;
    l_31 = (safe_lshift_func_uint16_t_u_u(7UL, 3));
    l_39 = ((((((safe_add_func_int16_t_s_s((((((((l_31 , p_25) , l_31) != ((safe_mod_func_int16_t_s_s((g_38[0] = (safe_add_func_int8_t_s_s((l_31 , p_25), g_4))), 65534UL)) <= g_4)) | g_4) , 0UL) == g_4) <= g_4), (-1L))) , g_38[0]) != 0x122A2272L) ^ 1UL) == g_4) > p_27);
    g_41 = (l_40 <= p_26);
    return p_28;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_38[i], "g_38[i]", print_hash_value);

    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_45.f3, "g_45.f3", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_134[i][j], "g_134[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_186[i][j], "g_186[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_187, "g_187", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
