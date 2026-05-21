// SPDX-License-Identifier: MIT
// cctest_csmith_2b641256.c --- cctest case csmith_2b641256 (csmith seed 727978582)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xeb5de1a0 */

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

// Options:   -s 727978582 -o /tmp/csmith_gen_dzyo4n79/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint32_t  f1;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   uint8_t  f1;
   int8_t  f2;
   const uint32_t  f3;
   int8_t  f4;
   uint64_t  f5;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   int32_t  f1;
};


static const int16_t g_6 = (-1L);
static int64_t g_36 = 0xEAE883781CDFFA87LL;
static struct S1 g_38[1] = {{0x6E12L,1UL,0L,0xFFFF9752L,-1L,0x7203FCA5EB5A40A7LL}};
static uint8_t g_47 = 252UL;
static int32_t g_49[1] = {0x7DFF937BL};
static struct S0 g_73[2] = {{0x88L,0x1C1AAD5EL},{0x88L,0x1C1AAD5EL}};
static int32_t g_99 = 0x389381DCL;
static int32_t g_110 = 0xA077DDA0L;
static int32_t g_142 = (-1L);
static int32_t g_158 = 1L;



static union U2  func_1(void);
static int16_t  func_9(struct S1  p_10);
static uint16_t  func_14(uint64_t  p_15, union U2  p_16, int32_t  p_17, struct S1  p_18, uint32_t  p_19);
static uint64_t  func_20(struct S1  p_21);




static union U2  func_1(void)
{ 
    struct S1 l_11 = {0x8330L,255UL,0x67L,0xD714F98CL,8L,9UL};
    int32_t l_98 = 0xE50A8E06L;
    int32_t l_114 = 0xD9FAD1A4L;
    int32_t l_117[1][2];
    uint64_t l_141 = 6UL;
    struct S0 l_145 = {-2L,6UL};
    union U2 l_168[2] = {{-1L},{-1L}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_117[i][j] = (-5L);
    }
    g_49[0] = ((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(g_6, (safe_mul_func_int16_t_s_s((g_6 , func_9(l_11)), g_38[0].f3)))) | 0x31DFL), l_11.f2)) && l_11.f2);
    if ((safe_sub_func_int16_t_s_s(g_73[1].f0, (safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u(l_11.f1, g_49[0])) | (safe_div_func_int64_t_s_s(g_47, g_49[0]))) && l_11.f5), l_11.f4)) && 246UL), l_11.f2)))))
    { 
        union U2 l_84 = {2L};
        return l_84;
    }
    else
    { 
        int32_t l_91 = 0x12E26E4AL;
        int32_t l_92 = 0xFE20FE05L;
        int32_t l_111 = 9L;
        int32_t l_113 = 0xBE4B2277L;
        if ((safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((++g_38[0].f5), ((l_92 ^= l_91) == (g_38[0].f4 |= (l_11.f1 & 0xD6L))))), (-1L))))
        { 
            uint64_t l_100 = 18446744073709551606UL;
            union U2 l_109 = {0x4FAE1B8EL};
            for (g_36 = (-29); (g_36 == (-11)); g_36 = safe_add_func_uint32_t_u_u(g_36, 9))
            { 
                g_110 |= ((g_47 > ((-1L) ^ (safe_div_func_int64_t_s_s((~(++l_100)), (safe_add_func_uint16_t_u_u(((((((safe_lshift_func_uint16_t_u_u((l_92 &= (safe_add_func_int8_t_s_s((l_109 , 0x0CL), g_38[0].f3))), 5)) <= g_38[0].f5) != g_38[0].f4) > l_91) >= g_38[0].f4) < 0x01FEL), g_47)))))) <= g_49[0]);
            }
        }
        else
        { 
            int16_t l_112 = 5L;
            int32_t l_115 = 0L;
            int32_t l_116 = 9L;
            int32_t l_118 = 0x8D8379A3L;
            int16_t l_119[4][2] = {{1L,(-1L)},{(-1L),1L},{(-1L),(-1L)},{1L,(-1L)}};
            uint8_t l_120 = 0xB9L;
            int i, j;
            l_120--;
            g_73[0] = g_73[1];
        }
    }
    for (l_114 = (-29); (l_114 != (-2)); l_114 = safe_add_func_int8_t_s_s(l_114, 9))
    { 
        union U2 l_125 = {0xB454EC59L};
        int32_t l_140[3][2] = {{1L,(-1L)},{1L,1L},{(-1L),1L}};
        int i, j;
        g_142 ^= (g_49[0] = (l_98 &= (((l_125 , ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((g_38[0].f1 = g_49[0]), 4)), (safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((l_125.f1 = 9UL), (safe_div_func_int16_t_s_s(l_117[0][0], l_140[2][1])))), l_140[1][0])))) < 18446744073709551615UL), 2)), l_141)) ^ l_140[2][1])) || g_38[0].f5) && 0x59L)));
        g_49[0] |= l_140[2][1];
        for (l_141 = 0; (l_141 > 19); l_141++)
        { 
            int32_t l_148 = 1L;
            struct S0 l_159 = {0L,0x07D1D32CL};
            l_145 = g_73[1];
            if (g_38[0].f0)
            { 
                uint32_t l_157 = 18446744073709551615UL;
                g_49[0] = (safe_sub_func_uint8_t_u_u((g_47++), (g_158 ^= (l_11.f1 >= (l_140[2][1] = ((safe_add_func_uint8_t_u_u((((g_38[0].f4 , (0x27043079L < (((safe_div_func_uint16_t_u_u(((g_38[0].f0 ^= ((safe_rshift_func_uint8_t_u_s((l_11.f3 > g_110), g_38[0].f1)) != 0L)) && g_142), l_157)) <= 4294967288UL) && g_99))) ^ g_73[1].f1) != l_140[0][1]), g_38[0].f4)) && 2UL))))));
                g_73[1] = l_159;
            }
            else
            { 
                int64_t l_160 = 0x46C4C103C77F6B34LL;
                int8_t l_167 = (-8L);
                l_160 = (((g_38[0].f2 | (g_99 && (0x2F91EA85L > g_110))) > g_49[0]) ^ 0x38L);
                if (l_160)
                    continue;
                g_49[0] = (l_167 = (((safe_sub_func_int8_t_s_s(g_47, l_160)) & (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0UL, ((g_142 &= ((g_47 || 4294967289UL) != 0xB8A1L)) , l_148))), g_38[0].f3)) , g_49[0]) | l_140[2][1])) > g_49[0]));
            }
        }
    }
    return l_168[0];
}



static int16_t  func_9(struct S1  p_10)
{ 
    int32_t l_34 = (-1L);
    int32_t l_63[2];
    int32_t l_65 = 0x0F30BDA1L;
    int i;
    for (i = 0; i < 2; i++)
        l_63[i] = 4L;
    for (p_10.f2 = (-22); (p_10.f2 == 16); p_10.f2 = safe_add_func_int64_t_s_s(p_10.f2, 2))
    { 
        const uint16_t l_35 = 0x1302L;
        union U2 l_37 = {0xC7A50190L};
        uint32_t l_50 = 0x05992E41L;
        int32_t l_64 = (-6L);
        int32_t l_66 = 0x60950C43L;
        uint8_t l_67 = 255UL;
        g_49[0] &= (func_14((g_36 ^= ((func_20(p_10) , ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((5L | 0UL) & g_6) == l_34), g_6)), l_35)), 0xCAAF7CC7L)) & 0xE49CE570L)) != l_35)), l_37, p_10.f1, g_38[0], g_6) || g_38[0].f4);
        --l_50;
        for (p_10.f4 = (-11); (p_10.f4 != 13); p_10.f4++)
        { 
            uint32_t l_55 = 4294967291UL;
            int32_t l_60 = 0x882C6531L;
            int32_t l_61 = (-1L);
            int32_t l_62[5] = {2L,2L,2L,2L,2L};
            struct S0 l_72 = {-3L,0x67D69BDFL};
            int i;
            l_60 ^= (g_49[0] = ((l_55 , ((safe_mod_func_int8_t_s_s((l_50 & (safe_rshift_func_uint16_t_u_s(g_49[0], 3))), l_34)) , g_38[0].f3)) , 0xE7E8591FL));
            l_67++;
            for (l_50 = (-10); (l_50 >= 44); ++l_50)
            { 
                g_73[1] = (l_72 = (l_61 , l_72));
            }
        }
    }
    return l_65;
}



static uint16_t  func_14(uint64_t  p_15, union U2  p_16, int32_t  p_17, struct S1  p_18, uint32_t  p_19)
{ 
    uint16_t l_41 = 0xC7C7L;
    int32_t l_46 = 0xA2CC3706L;
    int32_t l_48 = 0L;
    p_16.f1 = ((g_36 = ((((safe_mul_func_uint16_t_u_u(l_41, (l_48 = (safe_sub_func_int16_t_s_s(1L, ((safe_lshift_func_int16_t_s_u(l_41, (g_47 |= ((l_46 = 0xF79CL) && l_46)))) && 4294967295UL)))))) , 0x7E707ECB515FE49BLL) == 0L) & 0xA8E4L)) , g_6);
    return p_17;
}



static uint64_t  func_20(struct S1  p_21)
{ 
    struct S0 l_22 = {0xDDL,0x1FB9A31CL};
    l_22 = l_22;
    if (g_6)
    { 
        uint8_t l_23 = 4UL;
        --l_23;
    }
    else
    { 
        return p_21.f0;
    }
    return p_21.f2;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_38[i].f0, "g_38[i].f0", print_hash_value);
        transparent_crc(g_38[i].f1, "g_38[i].f1", print_hash_value);
        transparent_crc(g_38[i].f2, "g_38[i].f2", print_hash_value);
        transparent_crc(g_38[i].f3, "g_38[i].f3", print_hash_value);
        transparent_crc(g_38[i].f4, "g_38[i].f4", print_hash_value);
        transparent_crc(g_38[i].f5, "g_38[i].f5", print_hash_value);

    }
    transparent_crc(g_47, "g_47", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_49[i], "g_49[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_73[i].f0, "g_73[i].f0", print_hash_value);
        transparent_crc(g_73[i].f1, "g_73[i].f1", print_hash_value);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
