// SPDX-License-Identifier: MIT
// cctest_csmith_006b40ff.c --- cctest case csmith_006b40ff (csmith seed 7028991)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbb84656a */
/* @exp_ticks 0x80f */

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

// Options:   -s 7028991 -o /home/agent1/fast_data/tmp/csmith_gen_0cgmpe82/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   const uint32_t  f3;
};


static int8_t g_2[5] = {0x4FL,0x4FL,0x4FL,0x4FL,0x4FL};
static uint32_t g_3 = 0x2937A3A1L;
static union U1 g_11 = {0x23498E64E6DC660FLL};
static struct S0 g_21 = {0x196E86FFL,-1L,0x85EC4150L};
static uint32_t g_34 = 0x1ED5297FL;
static int16_t g_41 = 0x2A5CL;
static int64_t g_42 = 0xD970979B5CEC8167LL;
static int64_t g_43[4][1][4] = {{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}}};
static uint64_t g_44 = 2UL;
static int64_t g_70 = (-1L);
static uint64_t g_71 = 0x61A3ECB10B3F497ELL;
static uint32_t g_76 = 0xEB859678L;
static uint32_t g_91 = 1UL;
static uint16_t g_98 = 65532UL;
static int32_t g_106 = 0L;
static int32_t g_109 = (-1L);
static uint8_t g_111 = 8UL;
static int8_t g_186 = 0x20L;
static uint64_t g_189 = 1UL;
static struct S0 g_222[1] = {{0x92D651C6L,-1L,1UL}};



static int64_t  func_1(void);
static uint64_t  func_8(int8_t  p_9, uint8_t  p_10);
static struct S0  func_17(int32_t  p_18, struct S0  p_19, int8_t  p_20);
static int32_t  func_22(int64_t  p_23);




static int64_t  func_1(void)
{ 
    uint16_t l_14 = 7UL;
    int32_t l_15[3][2][5] = {{{(-1L),(-6L),(-6L),(-1L),0x89F42C60L},{1L,0L,0L,1L,0L}},{{(-1L),(-6L),(-6L),(-1L),0x89F42C60L},{1L,0L,0L,1L,0L}},{{(-1L),(-6L),(-6L),(-1L),0xCDF5EF88L},{0x07C7BE02L,1L,1L,0x07C7BE02L,0xDAC7A8CFL}}};
    int32_t l_16 = 0x12A7B09FL;
    uint8_t l_179 = 0x0AL;
    struct S0 l_221 = {2UL,0L,0x32227011L};
    int i, j, k;
    g_3 = g_2[1];
    if ((safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(func_8((l_15[1][1][4] = (g_11 , (safe_rshift_func_uint8_t_u_u(l_14, 6)))), l_16), l_14)), 0xB0C5L)))
    { 
        int64_t l_156 = 0x9FBBD77870C76364LL;
        int32_t l_183 = (-4L);
        int32_t l_184 = 0xA2BAD3F7L;
        int32_t l_187 = 0L;
        l_156 &= g_44;
        for (l_14 = (-1); (l_14 == 12); l_14 = safe_add_func_uint16_t_u_u(l_14, 1))
        { 
            int8_t l_168 = (-6L);
            uint64_t l_180 = 0x5244D6E761F95ED2LL;
            for (g_21.f0 = 0; (g_21.f0 <= 1); g_21.f0 += 1)
            { 
                uint16_t l_167[4] = {0xCEEBL,0xCEEBL,0xCEEBL,0xCEEBL};
                int i;
                l_16 &= ((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((g_71 && (((safe_lshift_func_uint16_t_u_s(g_42, ((((safe_sub_func_int32_t_s_s((g_21.f2 ^ (g_109 , g_2[1])), l_167[0])) ^ g_21.f1) > l_168) | l_15[1][0][1]))) , 0x09C126308DE061E0LL) || g_2[2])), 3)) >= g_21.f2), 0xA5219CEAL)) ^ g_41);
            }
            g_21.f1 = (safe_mod_func_uint16_t_u_u(((((l_15[1][1][4] = (safe_lshift_func_int16_t_s_u(2L, 2))) || l_168) < (safe_mul_func_uint8_t_u_u(((l_180 ^= (((safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((((l_179 | 0xC67EL) >= l_14) | 0x3C95L), g_76)) >= l_156), l_14)) && l_14) > g_76)) != 2L), l_156))) <= l_14), g_76));
        }
        for (g_41 = 0; (g_41 <= 0); g_41 += 1)
        { 
            uint16_t l_181 = 1UL;
            int32_t l_185 = 4L;
            int32_t l_188 = 0x11E92AA6L;
            for (g_98 = 0; (g_98 <= 0); g_98 += 1)
            { 
                g_21.f1 &= 6L;
            }
            if (l_15[1][0][3])
                break;
            for (g_109 = 0; (g_109 <= 0); g_109 += 1)
            { 
                uint16_t l_182 = 0xA657L;
                uint32_t l_192 = 1UL;
                l_182 |= (l_181 = (-1L));
                --g_189;
                if (l_192)
                    continue;
            }
            for (g_3 = 0; (g_3 <= 0); g_3 += 1)
            { 
                g_21.f1 = l_15[1][1][4];
            }
        }
    }
    else
    { 
        int8_t l_213 = 0x92L;
        int32_t l_238 = 0x4A3F93A2L;
        if ((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((l_16 = (g_76 <= (safe_rshift_func_uint16_t_u_u(g_91, (safe_div_func_uint16_t_u_u((~(((((+(safe_mod_func_int32_t_s_s((g_21.f1 ^= (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_15[1][1][4] = (-4L)), (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((g_76 > g_189), 0UL)), l_179)))), l_213))), 4294967293UL))) >= g_34) , 0x35L) | l_179) && l_213)), g_70)))))), 2L)), g_21.f0)))
        { 
            uint32_t l_214[3];
            uint32_t l_227 = 0x52D114BEL;
            int32_t l_228[2];
            struct S0 l_236 = {0x2DF3804EL,0x63F154D3L,0x32A36E6CL};
            int i;
            for (i = 0; i < 3; i++)
                l_214[i] = 0x2B37AD10L;
            for (i = 0; i < 2; i++)
                l_228[i] = 0x8A663DAEL;
            ++l_214[1];
            l_228[1] &= ((safe_mod_func_int32_t_s_s(0xA0AA601CL, (safe_add_func_int16_t_s_s(((g_189 ^ ((g_222[0] = (g_21 = l_221)) , (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0UL, g_222[0].f2)), g_222[0].f2)))) > g_111), 0xE158L)))) , l_227);
            for (l_221.f1 = 0; (l_221.f1 <= (-26)); l_221.f1 = safe_sub_func_int16_t_s_s(l_221.f1, 8))
            { 
                uint32_t l_235 = 4294967287UL;
                struct S0 l_237 = {0xDA5B25BDL,0L,5UL};
                g_222[0].f1 ^= (((safe_lshift_func_uint16_t_u_s(0xBCEDL, 3)) != (g_44 >= (safe_lshift_func_uint16_t_u_s((0xC12D51D3L && l_235), g_189)))) , 0xB2F709CEL);
                l_237 = l_236;
                g_21.f1 |= 0xBD1E669EL;
            }
        }
        else
        { 
            g_222[0].f1 = l_221.f0;
            for (l_213 = 0; (l_213 <= 1); l_213 += 1)
            { 
                if (l_213)
                    break;
            }
        }
        l_238 = l_14;
        l_221 = func_17(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_21.f2, (safe_rshift_func_uint8_t_u_s(((-2L) || ((((0xE4L > 0x8DL) <= l_179) > g_44) & l_213)), g_2[3])))), l_16)) && 0L), g_222[0], g_222[0].f2);
    }
    return g_21.f1;
}



static uint64_t  func_8(int8_t  p_9, uint8_t  p_10)
{ 
    g_21 = func_17(g_11.f1, g_21, (func_22(g_21.f1) >= 0xEDF0E170L));
    return p_10;
}



static struct S0  func_17(int32_t  p_18, struct S0  p_19, int8_t  p_20)
{ 
    int64_t l_154 = 0xEBBDB59DC4BF33FDLL;
    for (p_20 = 0; (p_20 < (-6)); p_20 = safe_sub_func_uint64_t_u_u(p_20, 3))
    { 
        uint64_t l_153 = 1UL;
        int32_t l_155 = 0x8A0E647CL;
        g_21.f1 = (safe_sub_func_uint8_t_u_u((0x35DF1A5EL == ((((safe_div_func_int64_t_s_s((~((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_19.f2, ((((+(safe_add_func_int32_t_s_s((((((g_34 = ((safe_lshift_func_int16_t_s_s((((l_153 = ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_11.f2, (safe_add_func_uint16_t_u_u(p_19.f1, 0xB798L)))) > p_20), p_19.f2)) ^ g_91)) <= p_20) & l_154), 2)) , 0x0135165CL)) , g_11.f1) , p_18) > 6L) & g_11.f1), g_11.f2))) && g_11.f2) < g_98) || 0xFE436B37L))), 249UL)) | g_11.f1), l_154)), p_20)) <= g_98)), g_11.f2)) < 0x3AL) || p_20) != l_155)), l_155));
    }
    return g_21;
}



static int32_t  func_22(int64_t  p_23)
{ 
    int32_t l_26 = 0xF1FE3D2FL;
    int32_t l_29 = 0xE01E6E83L;
    int32_t l_30 = 0x2095D7C1L;
    struct S0 l_49 = {1UL,0x9BF4A3CAL,8UL};
    int16_t l_110 = 0L;
    if ((safe_rshift_func_uint16_t_u_u((l_26 |= 0x6B90L), 5)))
    { 
        int16_t l_31[3];
        int32_t l_32 = 0x691704D9L;
        int32_t l_33[3][5][3] = {{{0x1BA13726L,3L,0L},{0xA05008D6L,0x9C3CBAA6L,8L},{0xFA942F34L,3L,3L},{8L,0L,0xB085BB31L},{0xFA942F34L,0xF6A1241AL,0xFA942F34L}},{{0xA05008D6L,0x4AD1532DL,0xB085BB31L},{0x1BA13726L,0x1BA13726L,3L},{0L,0x4AD1532DL,8L},{3L,0xF6A1241AL,0L},{0L,0L,0L}},{{0x1BA13726L,3L,0L},{0xA05008D6L,0x9C3CBAA6L,8L},{0xFA942F34L,3L,3L},{8L,0L,0xB085BB31L},{0xFA942F34L,0xF6A1241AL,0xFA942F34L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_31[i] = 0xFC75L;
        if ((safe_add_func_uint32_t_u_u((--g_34), g_21.f1)))
        { 
            int8_t l_60 = 0x58L;
            int32_t l_61 = 0x702DD068L;
            int32_t l_62 = (-1L);
            struct S0 l_69 = {0xD6201886L,-6L,0UL};
            l_32 = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((++g_44), (safe_sub_func_int32_t_s_s(((l_62 = (l_49 , ((safe_mul_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((g_34++), ((((safe_add_func_uint32_t_u_u(((8UL == l_31[1]) < p_23), 0x6659E0EAL)) <= 0L) , p_23) > 4294967290UL))) , g_11.f3), 5)), 7)) < 0x7713L) | g_21.f1) , 0UL) | 0L), g_21.f1)) , l_31[1]))) < 0xC81EL), l_26)))), 12));
            for (l_30 = 0; (l_30 >= (-12)); l_30--)
            { 
                l_32 = g_42;
                l_69 = l_49;
            }
            g_70 = l_69.f1;
        }
        else
        { 
            return l_33[2][1][1];
        }
        ++g_71;
        for (l_32 = 0; (l_32 < 3); l_32 = safe_add_func_int64_t_s_s(l_32, 2))
        { 
            struct S0 l_86 = {4294967293UL,0xCBA9C6CDL,0xD3427313L};
            g_76 ^= g_43[0][0][0];
            if ((safe_sub_func_int16_t_s_s(((((g_43[0][0][0] = (safe_rshift_func_uint8_t_u_s(((l_49 , ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(p_23, 7)) != ((+l_26) , g_76)), g_76)) == g_34)) , p_23), p_23))) == p_23) < 1L) >= 0x47L), 0x1952L)))
            { 
                uint16_t l_92 = 0UL;
                int32_t l_93 = 0x0A6BADE8L;
                l_86 = g_21;
                l_93 = ((g_91 = (safe_mod_func_uint64_t_u_u((g_11.f3 <= (safe_add_func_int64_t_s_s((g_41 && g_41), g_21.f2))), p_23))) != l_92);
            }
            else
            { 
                int16_t l_99 = 1L;
                struct S0 l_100 = {4294967295UL,-7L,4294967295UL};
                l_99 |= ((g_41 = ((safe_add_func_int32_t_s_s((p_23 > g_44), (safe_mod_func_int8_t_s_s((((g_98 ^= (l_86.f1 = ((((l_31[1] | p_23) , 0x860B685EL) | l_49.f1) == l_86.f1))) <= 1L) < p_23), 0x05L)))) , (-4L))) ^ p_23);
                l_86 = l_100;
            }
        }
    }
    else
    { 
        uint16_t l_104 = 65535UL;
        int32_t l_105[1];
        int i;
        for (i = 0; i < 1; i++)
            l_105[i] = 1L;
        g_106 &= (safe_lshift_func_uint8_t_u_u(((g_2[2] == (~(l_105[0] = (((p_23 >= ((p_23 ^ ((-1L) <= 1L)) < p_23)) < l_104) == g_76)))) & l_104), p_23));
        for (l_49.f0 = (-6); (l_49.f0 > 53); l_49.f0 = safe_add_func_uint32_t_u_u(l_49.f0, 8))
        { 
            int64_t l_126 = 0x910FBC845C4EFE4ALL;
            ++g_111;
            l_30 = (safe_mul_func_uint16_t_u_u(((~(((g_2[2] , (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(g_3, 0x0879AB5F6EBE0C2ALL)), ((+(safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((((((g_98 = 65535UL) < g_70) >= l_105[0]) , 18446744073709551615UL) & l_29), 5)) && l_126), 255UL))) , l_126)))) > g_91) > 0x1BF5L)) && 18446744073709551611UL), 1UL));
        }
    }
    return g_34;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2, "g_21.f2", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_43[i][j][k], "g_43[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_222[i].f0, "g_222[i].f0", print_hash_value);
        transparent_crc(g_222[i].f1, "g_222[i].f1", print_hash_value);
        transparent_crc(g_222[i].f2, "g_222[i].f2", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
