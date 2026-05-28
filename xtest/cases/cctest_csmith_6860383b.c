// SPDX-License-Identifier: MIT
// cctest_csmith_6860383b.c --- cctest case csmith_6860383b (csmith seed 1751136315)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x50584c6c */
/* @exp_ticks 0x571e */

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

// Options:   -s 1751136315 -o /tmp/csmith_gen_l6fqdem2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint16_t  f1;
   int32_t  f2;
   int32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int32_t  f0;
};
#pragma pack(pop)

struct S3 {
   const uint32_t  f0;
   struct S2  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   int16_t  f0;
   struct S3  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S5 {
   struct S3  f0;
   int32_t  f1;
   int8_t  f2;
};
#pragma pack(pop)

union U7 {
   int64_t  f0;
   uint64_t  f1;
};


static uint32_t g_3[5][3] = {{2UL,4294967295UL,4294967295UL},{0x6092F644L,4294967295UL,0xEDA58528L},{0x5357F451L,2UL,0x4CE55459L},{0x6092F644L,0x6092F644L,0x4CE55459L},{2UL,0x5357F451L,0xEDA58528L}};
static struct S5 g_16 = {{0x586FA66FL,{1L}},-10L,0x3AL};
static const int32_t g_18 = 2L;
static struct S1 g_22[5] = {{0x4FCE8863L},{0x4FCE8863L},{0x4FCE8863L},{0x4FCE8863L},{0x4FCE8863L}};
static uint32_t g_31 = 4294967288UL;
static uint8_t g_32 = 0UL;
static uint16_t g_33[4] = {0x7DC5L,0x7DC5L,0x7DC5L,0x7DC5L};
static uint64_t g_51 = 5UL;
static int16_t g_60 = 0x1D89L;
static int8_t g_81 = (-1L);
static struct S0 g_82 = {0x2005L,0xCD35L,-1L,0x65700571L,0x61B918F6L};
static int8_t g_83 = 0L;
static union U7 g_93[3] = {{0x6D85D5641618F1E0LL},{0x6D85D5641618F1E0LL},{0x6D85D5641618F1E0LL}};
static int32_t g_94 = 0L;
static struct S4 g_113[5][5] = {{{0x247FL,{0xD21CD3C5L,{-3L}}},{1L,{0xB425780FL,{0xA4CDD596L}}},{0x247FL,{0xD21CD3C5L,{-3L}}},{0xA71CL,{0UL,{0x9750D2B4L}}},{1L,{0xB425780FL,{0xA4CDD596L}}}},{{7L,{18446744073709551615UL,{6L}}},{0xC45AL,{0x56930D83L,{0x2E9BB931L}}},{0xA71CL,{0UL,{0x9750D2B4L}}},{7L,{18446744073709551615UL,{6L}}},{0xA71CL,{0UL,{0x9750D2B4L}}}},{{7L,{18446744073709551615UL,{6L}}},{7L,{18446744073709551615UL,{6L}}},{0xBF67L,{3UL,{-1L}}},{1L,{0xB425780FL,{0xA4CDD596L}}},{-7L,{0xB96263D1L,{0xAC5B96D1L}}}},{{0x247FL,{0xD21CD3C5L,{-3L}}},{-7L,{0xB96263D1L,{0xAC5B96D1L}}},{0xA71CL,{0UL,{0x9750D2B4L}}},{0xA71CL,{0UL,{0x9750D2B4L}}},{0xA71CL,{0UL,{0x9750D2B4L}}}},{{0xA71CL,{0UL,{0x9750D2B4L}}},{0xBF67L,{3UL,{-1L}}},{1L,{1UL,{0xA84F034BL}}},{0xA71CL,{0UL,{0x9750D2B4L}}},{0xDF9DL,{7UL,{0x1483B713L}}}}};
static uint32_t g_149 = 1UL;
static uint64_t g_158[1] = {1UL};
static struct S2 g_159 = {3L};
static uint16_t g_169[5][2] = {{65529UL,8UL},{2UL,8UL},{65529UL,2UL},{65535UL,65535UL},{65535UL,2UL}};
static uint16_t g_170 = 4UL;
static int32_t g_182 = (-10L);
static uint32_t g_183 = 0UL;



static uint16_t  func_1(void);
static struct S0  func_6(const struct S4  p_7);
static struct S4  func_8(uint64_t  p_9, int64_t  p_10, const int8_t  p_11, const struct S3  p_12);
static int64_t  func_13(uint16_t  p_14, uint32_t  p_15);




static uint16_t  func_1(void)
{ 
    int8_t l_2 = 1L;
    int32_t l_147 = 0x728A352BL;
    uint32_t l_148 = 9UL;
    const uint16_t l_181 = 0UL;
    ++g_3[3][0];
    g_82 = func_6(func_8(l_2, func_13(g_3[3][0], (g_3[2][0] && (g_16 , (-2L)))), l_2, g_16.f0));
    for (g_60 = 0; (g_60 >= 6); g_60++)
    { 
        int16_t l_132 = 7L;
        int32_t l_171[2][5][1] = {{{0xF6F722B7L},{0xBFA4616BL},{0xBFA4616BL},{0xF6F722B7L},{0xBFA4616BL}},{{0xBFA4616BL},{0xF6F722B7L},{0xBFA4616BL},{0xBFA4616BL},{0xF6F722B7L}}};
        int32_t l_180 = 0xDDF3D5DEL;
        int i, j, k;
        if ((((g_93[1].f1 <= g_3[2][0]) | (safe_rshift_func_uint16_t_u_u((((((((g_94 ^ 0xDED41DA0L) != l_132) > l_2) == l_2) > 0UL) && l_132) >= (-4L)), 6))) && 4L))
        { 
            int32_t l_146 = 0L;
            int32_t l_156 = 0x463EB591L;
            g_149 ^= (+((l_132 == ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_147 = ((l_132 ^ (((safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((g_18 < 0xF6L) | l_146), 8)), l_2)) || 0xEEF4L), g_16.f1)) ^ l_2) != 0L)) > g_32)), l_2)), g_83)) == l_148)) <= l_132));
            if (((safe_rshift_func_int16_t_s_s(((l_156 |= ((safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(1L, ((g_16.f0.f1 , g_93[0]) , (l_147 <= l_132)))) < l_2), 0x52A9FC2AAD8E3870LL)) , 4UL)) && 0xC9719984EDDFC615LL), g_83)) == 0xAA136FB2L))
            { 
                const int32_t l_157 = 0x30A2B9BFL;
                g_158[0] = l_157;
            }
            else
            { 
                g_113[3][0].f1.f1 = g_159;
                if (l_132)
                    break;
            }
        }
        else
        { 
            int16_t l_168 = 0x0C51L;
            g_169[2][0] ^= ((!(safe_unary_minus_func_uint64_t_u((g_113[3][0] , 0x8F7B8AB57959B7E8LL)))) | (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0xA175L, 9)), (safe_mul_func_uint8_t_u_u(((g_149 , l_148) | g_81), l_168)))));
            g_16.f0.f1 = g_16.f0.f1;
            l_171[1][0][0] |= (g_170 = l_132);
        }
        if (l_2)
            break;
        if ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_169[4][1], ((g_81 ^= (((l_148 >= (safe_lshift_func_uint16_t_u_s((g_18 | (safe_div_func_uint64_t_u_u(g_16.f0.f0, 0xBF7725A6DD12310BLL))), 15))) == l_180) < 0L)) , l_181))), 8UL)))
        { 
            return g_169[2][1];
        }
        else
        { 
            ++g_183;
        }
    }
    return l_148;
}



static struct S0  func_6(const struct S4  p_7)
{ 
    int64_t l_57 = 0xEABDE2A9FC04FBFDLL;
    int32_t l_69 = (-1L);
    int32_t l_84 = 0xD4211988L;
    struct S0 l_107[5][5] = {{{0xFA31L,0x590EL,-1L,2L,0xBF4FD87FL},{0xB48DL,0x1DC0L,0x2F281150L,0x74567ED7L,0xFDE4B572L},{-9L,0x5D48L,-1L,0xCD7A3E1DL,0xC708496AL},{0xCD54L,0xB5EBL,1L,0x629C93A3L,-1L},{0x2120L,0xDCF7L,0xF008C425L,0xF7E9F5D4L,0L}},{{-9L,0x5D48L,-1L,0xCD7A3E1DL,0xC708496AL},{0xB48DL,0x1DC0L,0x2F281150L,0x74567ED7L,0xFDE4B572L},{0xFA31L,0x590EL,-1L,2L,0xBF4FD87FL},{0xFA31L,0x590EL,-1L,2L,0xBF4FD87FL},{0xB48DL,0x1DC0L,0x2F281150L,0x74567ED7L,0xFDE4B572L}},{{0xD799L,0xC5F3L,-1L,0xA2725A88L,0x0B9DDE58L},{0x6942L,0x47CAL,0x9AABCC59L,0x1A49182DL,0x9DC89B84L},{-9L,0xEFB2L,-2L,-4L,-9L},{0xB48DL,0x1DC0L,0x2F281150L,0x74567ED7L,0xFDE4B572L},{0x2120L,0xDCF7L,0xF008C425L,0xF7E9F5D4L,0L}},{{0x6942L,0x47CAL,0x9AABCC59L,0x1A49182DL,0x9DC89B84L},{0xFA31L,0x590EL,-1L,2L,0xBF4FD87FL},{-9L,0xEFB2L,-2L,-4L,-9L},{1L,1UL,9L,0x2DCEE338L,0xDDA2504BL},{-9L,0xEFB2L,-2L,-4L,-9L}},{{0x2120L,0xDCF7L,0xF008C425L,0xF7E9F5D4L,0L},{0x2120L,0xDCF7L,0xF008C425L,0xF7E9F5D4L,0L},{0xFA31L,0x590EL,-1L,2L,0xBF4FD87FL},{0xD799L,0xC5F3L,-1L,0xA2725A88L,0x0B9DDE58L},{8L,0UL,0x7E4973F2L,-4L,-5L}}};
    struct S0 l_127 = {-4L,65534UL,1L,0x3E9B3E84L,-4L};
    int i, j;
    g_60 ^= (safe_lshift_func_int16_t_s_u(((l_57 = (safe_div_func_int32_t_s_s(g_3[3][0], 0x865AEC41L))) != (safe_mul_func_int8_t_s_s(g_33[2], 0x14L))), 3));
    if (((safe_div_func_int32_t_s_s(0xBE0F627EL, p_7.f1.f0)) ^ p_7.f1.f1.f0))
    { 
        int64_t l_63 = 0xD6D778B148893BA8LL;
        struct S3 l_70 = {18446744073709551612UL,{-1L}};
        int32_t l_71[5] = {1L,1L,1L,1L,1L};
        int i;
        l_63 = (-1L);
        for (g_51 = 0; (g_51 <= 3); g_51 += 1)
        { 
            struct S0 l_64 = {0xBFC9L,0UL,0xB8EC4A45L,1L,-1L};
            return l_64;
        }
        if ((((((((((g_3[3][0] == (((g_32 = (safe_sub_func_int16_t_s_s((p_7.f1.f1.f0 > (l_69 = (safe_lshift_func_uint8_t_u_s(0x6DL, 5)))), (((0xE9071E3CL < p_7.f1.f0) >= p_7.f1.f1.f0) > p_7.f1.f0)))) || g_60) < 0x8165L)) , l_70) , 0L) & p_7.f0) >= 1UL) == l_70.f1.f0) | l_57) <= p_7.f1.f0) ^ p_7.f1.f1.f0))
        { 
            int16_t l_80 = 0x63A2L;
            uint64_t l_85 = 18446744073709551615UL;
            l_71[2] = p_7.f1.f0;
            if (((safe_sub_func_int64_t_s_s((l_70.f1.f0 == (((--g_31) || (((((((g_81 = (((g_16 , (l_80 = (safe_rshift_func_int8_t_s_s((g_16.f2 = (safe_mod_func_int64_t_s_s((250UL > (0x028E1C9646ABAFA4LL != l_69)), p_7.f1.f0))), 3)))) && 1L) != l_57)) , 1UL) == g_33[2]) | 0xDAA5A9D40A9413DELL) > 0x85L) && 0xF491L) > g_60)) < 0x1D915B70ED8B5597LL)), p_7.f1.f1.f0)) < p_7.f1.f1.f0))
            { 
                return g_82;
            }
            else
            { 
                l_85--;
                g_94 = (((safe_mul_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s(0x1BD5E56AD494AE63LL, (p_7.f1.f0 <= (~((g_93[1] , 4294967287UL) != l_84))))) | p_7.f1.f0) < l_80), g_16.f1)) <= g_32) != p_7.f0);
            }
        }
        else
        { 
            int32_t l_97 = 0x9EFA1EB4L;
            l_71[3] ^= ((g_93[1].f0 ^= (safe_sub_func_uint64_t_u_u(g_16.f0.f0, (((((0xD6A2L == (l_97 = (((g_83 = 0x67L) & (g_16.f0.f0 > p_7.f0)) != p_7.f1.f0))) > p_7.f1.f1.f0) ^ p_7.f0) ^ 0xA489413133DC0AD4LL) > p_7.f1.f0)))) != l_63);
        }
    }
    else
    { 
        struct S0 l_106[3] = {{0L,65535UL,-1L,0x228A13AAL,-1L},{0L,65535UL,-1L,0x228A13AAL,-1L},{0L,65535UL,-1L,0x228A13AAL,-1L}};
        int32_t l_114 = (-1L);
        struct S2 l_115 = {-3L};
        uint32_t l_126 = 0xBA12CAA5L;
        int i;
        for (g_51 = 0; (g_51 <= 52); g_51 = safe_add_func_uint8_t_u_u(g_51, 1))
        { 
            for (g_82.f4 = 26; (g_82.f4 >= (-16)); g_82.f4 = safe_sub_func_uint32_t_u_u(g_82.f4, 2))
            { 
                if (p_7.f1.f1.f0)
                    break;
                if (g_82.f3)
                    continue;
                if (g_94)
                    break;
            }
            for (g_81 = 0; (g_81 > (-21)); g_81--)
            { 
                struct S2 l_104 = {0x41625C23L};
                struct S0 l_105 = {-5L,65526UL,0xA6530755L,-1L,0x1D3E0DDAL};
                union U7 l_108 = {-1L};
                l_104 = p_7.f1.f1;
                l_107[0][2] = (l_106[1] = l_105);
                l_69 &= ((9UL < (((l_108 , (!((((((((safe_sub_func_int16_t_s_s(p_7.f1.f0, ((+(l_84 = (g_113[3][0] , g_31))) , p_7.f1.f0))) || g_51) >= g_33[0]) >= l_105.f0) > 0xC078B0A3L) != g_82.f1) >= 0x31845497L) | g_16.f0.f0))) , 18446744073709551606UL) == 0x42DB36039B1839ECLL)) , l_106[1].f1);
            }
            for (g_82.f1 = 0; (g_82.f1 <= 4); g_82.f1 += 1)
            { 
                l_114 = (g_16.f0.f0 && (-7L));
            }
        }
        l_115 = g_113[3][0].f1.f1;
        l_126 = ((p_7.f1.f1.f0 > (-1L)) == (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(p_7.f0, (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((g_16 , l_107[0][2].f1), 0x61C2L)), p_7.f0)))), g_60)), l_107[0][2].f4)) != p_7.f0) && p_7.f1.f0));
    }
    return l_127;
}



static struct S4  func_8(uint64_t  p_9, int64_t  p_10, const int8_t  p_11, const struct S3  p_12)
{ 
    int32_t l_38 = (-8L);
    int32_t l_43 = 0x0466E1A5L;
    struct S4 l_52 = {0xC8A0L,{0UL,{0xA61DCCC5L}}};
    for (g_16.f1 = 0; (g_16.f1 != 12); g_16.f1 = safe_add_func_int32_t_s_s(g_16.f1, 2))
    { 
        int16_t l_41[2];
        int32_t l_42 = (-1L);
        int32_t l_44[4][5][5] = {{{0xEA11AD51L,0x3C403CB7L,0xD644770CL,1L,(-4L)},{0xACA3631AL,(-1L),0xD5CE9A20L,(-1L),0xACA3631AL},{1L,1L,7L,0xD67785DCL,(-4L)},{1L,0xF9644A59L,0xAEBACB58L,1L,0xACA3631AL},{0xDF00AC9EL,1L,0L,1L,(-4L)}},{{0x11925CFBL,1L,0xD996F049L,0xB5619AF7L,0xACA3631AL},{(-4L),(-7L),0x4BA75048L,(-7L),(-4L)},{7L,0xCAE1FAD0L,1L,0xF9644A59L,0xACA3631AL},{(-2L),0xD67785DCL,0x98E2CF01L,0x3C403CB7L,(-4L)},{5L,0xB5619AF7L,(-1L),0xCAE1FAD0L,0xACA3631AL}},{{0xEA11AD51L,0x3C403CB7L,0xD644770CL,1L,(-4L)},{0xACA3631AL,(-1L),0xD5CE9A20L,(-1L),0xACA3631AL},{1L,1L,7L,0xD67785DCL,(-4L)},{1L,0xF9644A59L,0xAEBACB58L,1L,0xACA3631AL},{0xDF00AC9EL,1L,0L,1L,(-4L)}},{{0x11925CFBL,1L,0xD996F049L,0xB5619AF7L,0xACA3631AL},{(-4L),(-7L),0x4BA75048L,(-7L),(-4L)},{7L,0xCAE1FAD0L,1L,0xF9644A59L,0xACA3631AL},{(-2L),0xD67785DCL,0x98E2CF01L,0x3C403CB7L,(-4L)},{5L,0xB5619AF7L,(-1L),0xCAE1FAD0L,0xACA3631AL}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_41[i] = 1L;
        l_44[0][4][0] = (safe_sub_func_int16_t_s_s((l_38 & l_38), (safe_mul_func_uint16_t_u_u((l_43 |= ((l_42 ^= l_41[0]) & g_32)), g_16.f1))));
    }
    l_43 = ((g_51 = (l_38 = (safe_add_func_int8_t_s_s(p_10, ((0xB521F313C854BE8DLL < ((((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(l_43, 1)) || (((g_16.f0.f0 >= p_10) != l_38) || 0x00C290CEL)) && p_12.f1.f0), l_43)) <= 0x37093F07CA432BFDLL) && 0x6CE1L) , l_43)) <= 0xF5864DC9L))))) != 0x0C55B62D563F42B1LL);
    return l_52;
}



static int64_t  func_13(uint16_t  p_14, uint32_t  p_15)
{ 
    int64_t l_17 = 0x0E426067BBDA73A1LL;
    struct S0 l_26 = {4L,0x74D9L,1L,0L,0x9FF40B36L};
    int8_t l_27[4][1][5] = {{{0x11L,0x95L,0x8BL,0x95L,0x11L}},{{0x11L,0x95L,0x8BL,0x95L,0x11L}},{{0x11L,0x95L,0x8BL,0x95L,0x11L}},{{0x11L,0x95L,0x8BL,0x95L,0x11L}}};
    int32_t l_28 = 0xDD9258C0L;
    int32_t l_29[1];
    int32_t l_30 = 1L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_29[i] = 0x1521F00BL;
    l_17 = p_15;
    g_33[2] = (((((g_18 || (g_32 ^= ((safe_add_func_uint8_t_u_u(((((!(g_16.f0.f0 < (g_22[3] , (!(((((g_31 = ((l_30 = ((l_29[0] = ((l_28 = (((safe_add_func_int8_t_s_s((l_26 , g_3[4][1]), 0x62L)) > l_27[3][0][2]) ^ g_3[3][0])) >= p_14)) != p_15)) == g_22[3].f0)) > g_16.f0.f0) || p_15) >= p_15) <= 0xA13E97A0L))))) >= p_15) == g_16.f2) ^ l_26.f1), 0xA7L)) < g_22[3].f0))) && g_16.f0.f0) > 0xC0L) ^ p_14) >= 0x8AE633C574C3FC6CLL);
    return l_29[0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_16.f0.f0, "g_16.f0.f0", print_hash_value);
    transparent_crc(g_16.f0.f1.f0, "g_16.f0.f1.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_22[i].f0, "g_22[i].f0", print_hash_value);

    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);

    }
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_82.f1, "g_82.f1", print_hash_value);
    transparent_crc(g_82.f2, "g_82.f2", print_hash_value);
    transparent_crc(g_82.f3, "g_82.f3", print_hash_value);
    transparent_crc(g_82.f4, "g_82.f4", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_93[i].f0, "g_93[i].f0", print_hash_value);
        transparent_crc(g_93[i].f1, "g_93[i].f1", print_hash_value);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_113[i][j].f0, "g_113[i][j].f0", print_hash_value);
            transparent_crc(g_113[i][j].f1.f0, "g_113[i][j].f1.f0", print_hash_value);
            transparent_crc(g_113[i][j].f1.f1.f0, "g_113[i][j].f1.f1.f0", print_hash_value);

        }
    }
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_158[i], "g_158[i]", print_hash_value);

    }
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_169[i][j], "g_169[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
